using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;
using Random = UnityEngine.Random;

public class SignUp : MonoBehaviour
{
    private string SignUpUrl = ServiceUrl.baseUrl + ServiceUrl.signUp;
    
    [SerializeField] private Button _signIn;
    [SerializeField] private Button _signUp;

    [SerializeField] private TMP_InputField userName;
    [SerializeField] private TMP_InputField password;
    [SerializeField] private TMP_InputField mobileNum;
    private string tokenDevice;
    
    [SerializeField] private GenerateOtp otpScript;

    private void OnEnable()
    {
        _signIn.onClick.AddListener(OnSignIn);
        _signUp.onClick.AddListener(OnSignUp);
        otpScript = GetComponent<GenerateOtp>();
        
        tokenDevice =
            "12345" + Random.Range(1, 9) + Random.Range(1, 9) + Random.Range(1, 9) + Random.Range(1, 9);
    }

    private void OnDisable()
    {
        _signIn.onClick.RemoveListener(OnSignIn);
        _signUp.onClick.RemoveListener(OnSignUp);
        StopCoroutine("SendSignUpRequest");
    }

    void OnSignIn()
    {
        UIManager.ChangeScreen(UIManager.Screen.SignIn);
    }
    
    void OnSignUp()
    {
        SignUpRequest signUpData = new SignUpRequest
        {
            playername = userName.text,
            password = password.text,
            mobilenumber = mobileNum.text,
            device_token = tokenDevice,
            refer_code = ""
        };

        StartCoroutine(SendSignUpRequest(SignUpUrl, signUpData));
    }
    
    private IEnumerator SendSignUpRequest(string url, SignUpRequest data)
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
            SignUpResponse signUpResponse = JsonConvert.DeserializeObject<SignUpResponse>(request.downloadHandler.text);

            Debug.Log($"Message: {signUpResponse.message}, PlayerID: {signUpResponse.playerid}");
            ProfileFetch.playid = int.Parse(signUpResponse.playerid);
            
            PlayerPrefs.SetString("mobileNumber", mobileNum.text);
            
            otpScript.OnGenerateOtp();

            yield return new WaitForSeconds(2);
                
            UIManager.ChangeScreen(UIManager.Screen.Otp);
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
            // Handle error, display error message, or retry logic
        }
    }
    
    public class SignUpRequest
    {
        public string playername;
        public string password;
        public string mobilenumber;
        public string device_token;
        public string refer_code;
    }

    public class SignUpResponse
    {
        public string message;
        public string playerid;
    }
}
