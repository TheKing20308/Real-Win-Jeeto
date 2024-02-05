using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class SPGameManager : MonoBehaviour
{
    [SerializeField] private TMP_Text coins;
    private string LNDetailURL = ServiceUrl.baseUrl + ServiceUrl.profileFetch;

    private void Awake()
    {
        LNDetailRequest lnDetailRequestData = new LNDetailRequest
        {
            playerid = ProfileFetch.playid
        };

        StartCoroutine(SendLNDetailRequest(LNDetailURL, lnDetailRequestData));
    }
    
    private IEnumerator SendLNDetailRequest(string url, LNDetailRequest data)
    {
        string jsonRequest = JsonConvert.SerializeObject(data);

        var request = new UnityWebRequest(url, "POST");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonRequest);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            LNDetailResponse lnDetailResponse = JsonConvert.DeserializeObject<LNDetailResponse>(request.downloadHandler.text);

            if (lnDetailResponse != null && lnDetailResponse.playerdata != null)
            {
                Debug.Log($"Total Coin: {lnDetailResponse.playerdata.totalcoin}");

                coins.text = lnDetailResponse.playerdata.totalcoin.ToString();
            }
            else
            {
                Debug.LogError("Invalid LNDetail Response");
            }
        }
        else
        {
            Debug.LogError($"UnityWebRequest Error: {request.error}");
        }
        
        StopCoroutine(SendLNDetailRequest(null,null));
    }
    
    public class LNDetailRequest
    {
        public int playerid;
    }
    
    public class LNDetailResponse
    {
        public LNPlayerDetail playerdata;
    }

    public class LNPlayerDetail
    {
        public int totalcoin;
    }
}
