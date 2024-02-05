using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices.ComTypes;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class MatkaCheck : MonoBehaviour
{
    private string statusUrl = LuckyNumServiceUrl.baseUrl + LuckyNumServiceUrl.status;
    private string activeUrl = LuckyNumServiceUrl.baseUrl + LuckyNumServiceUrl.active;
    
    public bool gameRunning = false;

    public void StatusApi()
    {
        StartCoroutine(SendMatkaCheckRequest(statusUrl));
    }
    
    private IEnumerator SendMatkaCheckRequest(string url)
    {
        var request = UnityWebRequest.Get(url);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            MatkaCheckResponse matkaCheckResponse = JsonConvert.DeserializeObject<MatkaCheckResponse>(request.downloadHandler.text);

            Debug.Log($"Response Code: {matkaCheckResponse.responseCode}, Success: {matkaCheckResponse.success}, Message: {matkaCheckResponse.responseMessage}");
            
            if (matkaCheckResponse.reponseData != null)
            {
                Debug.Log($"Inner Response Code: {matkaCheckResponse.reponseData.responseCode}, Current Status: {matkaCheckResponse.reponseData.currentstatus}");
                if (matkaCheckResponse.reponseData.responseCode == "0")
                {
                    gameRunning = true;
                    StartCoroutine(SendActiveGameRequest(activeUrl));
                }
                else
                {
                    gameRunning = false;
                }
            }
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
        }
    }
    
    private IEnumerator SendActiveGameRequest(string url)
    {
        var request = UnityWebRequest.Get(url);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            ActiveResponse activeResponse = JsonConvert.DeserializeObject<ActiveResponse>(request.downloadHandler.text);
            ActiveResponseData activeResponseData = JsonConvert.DeserializeObject<ActiveResponseData>(request.downloadHandler.text);
            ActiveResponseGameData activeResponseGameData = JsonConvert.DeserializeObject<ActiveResponseGameData>(request.downloadHandler.text);

            
            

            if (activeResponse.success)
            {
                Debug.Log($"Game ID: {activeResponse.responseData.matkaGame.id}, MID: {activeResponse.responseData.matkaGame.mid}, Status: {activeResponse.responseData.matkaGame.mstatus}, Win Ball: {activeResponse.responseData.matkaGame.mwinball}, Created At: {activeResponse.responseData.matkaGame.created_at}, Updated At: {activeResponse.responseData.matkaGame.updated_at}");
                PopUp_ProceedToPay.gameId = activeResponse.responseData.matkaGame.mid;
                Debug.Log(PopUp_ProceedToPay.gameId);
            }
            else
            {
                Debug.LogError($"API Error: {activeResponse.responseMessage}");
            }
        }
        else
        {
            Debug.LogError($"UnityWebRequest Error: {request.error}");
        }
    }
}

public class MatkaCheckResponse
{
    public string responseCode;
    public bool success;
    public string responseMessage;
    public MatkaCheckResponseData reponseData;
}

public class MatkaCheckResponseData
{
    public string responseCode;
    public string currentstatus;
}

public class ActiveResponse
{
    public string responseCode;
    public bool success;
    public string responseMessage;
    public ActiveResponseData responseData;
}

public class ActiveResponseData
{
    public ActiveResponseGameData matkaGame;
}

public class ActiveResponseGameData
{
    public string id;
    public string mid;
    public string mstatus;
    public string mwinball;
    public string created_at;
    public string updated_at;
}


