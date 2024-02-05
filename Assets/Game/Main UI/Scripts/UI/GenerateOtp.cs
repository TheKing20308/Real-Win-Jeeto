using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class GenerateOtp : MonoBehaviour
{
    private string generateOtpUrl = ServiceUrl.baseUrl + ServiceUrl.generateOtp;
    
    private void OnDisable()
    {
        StopCoroutine("SendGenerateOtpRequest");
    }
    
    public void OnGenerateOtp()
    {
        StartCoroutine(SendGenerateOtpRequest(generateOtpUrl));
    }
    
    private IEnumerator SendGenerateOtpRequest(string url)
    {
        var request = UnityWebRequest.Get(url);
        request.downloadHandler = new DownloadHandlerBuffer();

        yield return request.SendWebRequest();

        if (request.result == UnityWebRequest.Result.Success)
        {
            GenerateOtpResponse otpResponse = JsonConvert.DeserializeObject<GenerateOtpResponse>(request.downloadHandler.text);
            
            Debug.Log($"Success: {otpResponse.success}, OTP: {otpResponse.OTP}");

            VerifyOtp.otpResponse = otpResponse.OTP;
            Debug.Log(VerifyOtp.otpResponse);

        }
        else
        {
            Debug.LogError($"Error: {request.error}");
        }
    }

    class GenerateOtpResponse
    {
        public bool success;
        public string OTP;
    }
}
