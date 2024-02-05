using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class ProfileFetch : MonoBehaviour
{
    string profileFetchURL = ServiceUrl.baseUrl + ServiceUrl.profileFetch;
    public static int playid;
    public static string gameplayed;
    public static string totalcoin;
    public static string username;
    public static string mobilenumber;

    [SerializeField] private Button otpverify;

    private void OnEnable()
    {
        otpverify.onClick.AddListener(ProfileFetchAPI);
    }

    private void OnDisable()
    {
        otpverify.onClick.RemoveListener(ProfileFetchAPI);
    }

    void ProfileFetchAPI()
    {
        ProfileRequest profileRequestData = new ProfileRequest
        {
            playerid = playid
        };

        StartCoroutine(SendProfileRequest(profileFetchURL, profileRequestData));
    }
    
    private IEnumerator SendProfileRequest(string url, ProfileRequest data)
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
            ProfileResponse profileResponse = JsonConvert.DeserializeObject<ProfileResponse>(request.downloadHandler.text);

            if (profileResponse != null)
            {
                Debug.Log($"Message: {profileResponse.message}");
 
                PlayerData playerData = profileResponse.playerdata;
                
                Debug.Log($"Player ID: {playerData.id}, Username: {playerData.username}, Total Coin: {playerData.totalcoin}");
                gameplayed = playerData.GamePlayed;
                totalcoin = playerData.totalcoin.ToString();
                username = playerData.username;
                mobilenumber = playerData.userphone;

            }
            else
            {
                Debug.LogError("Invalid Profile Response");
            }
        }
        else
        {
            Debug.LogError($"UnityWebRequest Error: {request.error}");
        }
    }
}

public class ProfileRequest
{
    public int playerid;
}

public class ProfileResponse
{
    public string message;
    public PlayerData playerdata;
}

public class PlayerData
{
    public int id;
    public string created_at;
    public string updated_at;
    public string userid;
    public int playerid;
    public string username;
    public string userphone;
    public string password;
    public string OTPCode;
    public string useremail;
    public string photo;
    public string refer_code;
    public string used_refer_code;
    public string totalgem;
    public int totalcoin;
    public string playcoin;
    public int wincoin;
    public string device_token;
    public string registerDate;
    public string refrelCoin;
    public string GamePlayed;
    public string twoPlayWin;
    public string FourPlayWin;
    public string twoPlayloss;
    public string FourPlayloss;
    public string status;
    public string banned;
    public string accountHolder;
    public string accountNumber;
    public string ifsc;
    public string uniquebankid;
    public string in_game_status;
    public string uniqueupiid;
    public string upi_id;
    public string upi_name;
    public string acc_holder;
    public string tournament_id;
    public string table_id;
    public string bid_pay_status;
    public string kyc_completed;
    public string matkapicks;
    public int fruitscore;
    public int fruitwin;
    public int fruitlose;
    public int spins;
    public int spinwins;
    public int spinloss;
    public int rummywins;
    public int rummyloss;
    public int teenpattiwins;
    public int teenpattiloss;
    public int matkawins;
    public int matkaloss;

}
