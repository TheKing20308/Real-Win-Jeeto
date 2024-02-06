using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class VerifyOtp : MonoBehaviour
{
    [SerializeField] private Button _verifyOTP;
    [SerializeField] private Button _resendOTP;
    [SerializeField] private Button _back;
    
    [SerializeField] private TMP_Text showOtp;
    [SerializeField] private TMP_InputField otpInput;
    
    [SerializeField] private GameObject _info;
    private GenerateOtp _otpScript;
    
    public static string otpResponse;

    private string verifyOtpUrl = ServiceUrl.baseUrl + ServiceUrl.verifyOtp;
    private void OnEnable()
    {
        _otpScript = GetComponent<GenerateOtp>();
        
        _verifyOTP.onClick.AddListener(OnVerify);
        _resendOTP.onClick.AddListener(OnResend);
        _back.onClick.AddListener(OnBack);
        _info.SetActive(false);
    }

    private void OnDisable()
    {
        _verifyOTP.onClick.RemoveListener(OnVerify);
        _resendOTP.onClick.AddListener(OnResend);
        _back.onClick.RemoveListener(OnBack);
        StopCoroutine("SendOtpRequest");
    }

    private void Update()
    {
        showOtp.text = ("OTP:" + otpResponse);
    }

    void OnBack()
    {
        UIManager.ChangeScreen(UIManager.Screen.SignIn);
    }

    void OnResend()
    {
        _otpScript.OnGenerateOtp();
    }
    
    void OnVerify()
    {
        _verifyOTP.interactable = false;
        _back.interactable = false;
        
        OtpRequest otpRequestData = new OtpRequest
        {
            otp = otpInput.text
        };

        StartCoroutine(SendOtpRequest(verifyOtpUrl, otpRequestData));
    }
    
    private IEnumerator SendOtpRequest(string url, OtpRequest data)
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
            OtpResponse otpResponse = JsonConvert.DeserializeObject<OtpResponse>(request.downloadHandler.text);

            Debug.Log($"Message: {otpResponse.message}, Success: {otpResponse.success}");
            
            if (otpResponse.success)
            {
                UIManager.ChangeScreen(UIManager.Screen.Home);
                PlayerPrefs.SetString("isLoggedIn", "yes");
                
                _verifyOTP.interactable = true;
                _back.interactable = true;
                _info.SetActive(false);
            }
            else
            {
                _verifyOTP.interactable = true;
                _back.interactable = true;
                _info.SetActive(true);
            }
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
            _verifyOTP.interactable = true;
            _back.interactable = true;
            _info.SetActive(true);
        }
    }

    class OtpRequest
    {
        public string otp;
    }

    class OtpResponse
    {
        public string message;
        public bool success;
    }
}
