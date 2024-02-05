using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class PopUp_ProceedToPay : MonoBehaviour
{
    private string confirmUrl = LuckyNumServiceUrl.baseUrl + LuckyNumServiceUrl.confirm;
    private string updateUrl = MoneyUrl.moneyBaseUrl + MoneyUrl.updateCoin;
    
    [SerializeField] private TMP_InputField _amount;
    [SerializeField] private Button _confirm;
    
    public static ButtonScript ButtonScript;
    public static string amount;
    public static string gameId;
    public static GameObject _num;
    private int _numInt;

    [SerializeField] private PopUp_Exit script;
    [SerializeField] private GameObject popUpExit;
    [SerializeField] private GameObject noMoney;

    [SerializeField] private TMP_Text coins;
    float time = 0;

    private int currentAmount;
    private int currentCoins;

    private void OnEnable()
    {
        _confirm.onClick.AddListener(OnClick);
    }

    private void OnDisable()
    {
        _confirm.onClick.RemoveListener(OnClick);
    }

    private void Update()
    {
        time -= Time.deltaTime;
        
        if (time < 0f && time >-0.5f)
        {
            noMoney.SetActive(false);
        }
    }

    void OnClick()
    {
        currentAmount = Int32.Parse(_amount.text);
        currentCoins = Int32.Parse(coins.text);
        
        amount = _amount.text;
        _numInt = int.Parse(_num.name);
        
        script.amount.text = "Amount Paid: " + _amount.text;
        script.numSelec.text = "Number Selected: " + _numInt;
        
        if (currentAmount < currentCoins)
        {
            currentCoins -= currentAmount;
            coins.text = currentCoins.ToString();
            OnConfirmApi();
        }
        else
        {
            time = 3f;
            noMoney.SetActive(true);
        }

    }
    
    private void OnConfirmApi()
    {
        LuckyNumberRequest luckyNumberData = new LuckyNumberRequest
        {
            game_id = int.Parse(gameId)  ,
            player_id = ProfileFetch.playid,
            bid_amount = int.Parse(amount),
            picked_ball = _numInt
        };

        StartCoroutine(SendLuckyNumberRequest(confirmUrl, luckyNumberData));
    }
    
    private IEnumerator SendLuckyNumberRequest(string url, LuckyNumberRequest data)
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
            LuckyNumberResponse luckyNumberResponse = JsonConvert.DeserializeObject<LuckyNumberResponse>(request.downloadHandler.text);

            Debug.Log($"Response Code: {luckyNumberResponse.responseCode}, Success: {luckyNumberResponse.success}, Message: {luckyNumberResponse.responseMessage}, Picked Ball: {luckyNumberResponse.pickedBall}");
            UpdateMoney();
            popUpExit.SetActive(true);
            gameObject.SetActive(false);
            
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
            
        }
    }

    void UpdateMoney()
    {
        UpdateCoinRequest updateCoinRequestData = new UpdateCoinRequest
        {
            player_id = ProfileFetch.playid,
            new_totalcoin = currentCoins
        };

        StartCoroutine(SendUpdateCoinRequest(updateUrl, updateCoinRequestData));
    }
    
    private IEnumerator SendUpdateCoinRequest(string url, UpdateCoinRequest data)
    {
        string jsonRequest = JsonConvert.SerializeObject(data);

        var request = new UnityWebRequest(url, "PUT");
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonRequest);
        request.uploadHandler = (UploadHandler)new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            UpdateCoinResponse updateCoinResponse = JsonConvert.DeserializeObject<UpdateCoinResponse>(request.downloadHandler.text);

            if (updateCoinResponse != null)
            {
                Debug.Log($"Success: {updateCoinResponse.success}, Message: {updateCoinResponse.message}");
            }
            else
            {
                Debug.LogError("Invalid UpdateCoin Response");
            }
        }
        else
        {
            Debug.LogError($"UnityWebRequest Error: {request.error}");
        }
    }
    
}

public class LuckyNumberRequest
{
    public int game_id;
    public int player_id;
    public int bid_amount;
    public int picked_ball;
}
public class LuckyNumberResponse
{
    public string responseCode;
    public bool success;
    public string responseMessage;
    public string pickedBall;
}

public class UpdateCoinRequest
{
    public int player_id;
    public int new_totalcoin;
}

public class UpdateCoinResponse
{
    public string success;
    public string message;
}