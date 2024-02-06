using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Newtonsoft.Json;
using UnityEngine.Networking;

public class SignIn : MonoBehaviour
{
    private string SignInUrl = ServiceUrl.baseUrl + ServiceUrl.signIn;
    private string GenerateOtpUrl = ServiceUrl.baseUrl + ServiceUrl.generateOtp;
    
    [SerializeField] private Button _signIn;
    [SerializeField] private Button _signUp;
    [SerializeField] private GameObject _info;

    [SerializeField] private TMP_InputField mobileNumberInput;

    private GenerateOtp otpScript;

    private void OnEnable()
    {
        _signUp.onClick.AddListener(OnSignUp);
        _signIn.onClick.AddListener(OnSignIn);
        otpScript = GetComponent<GenerateOtp>();
        
        _info.SetActive(false);

        if (PlayerPrefs.GetString("mobileNumber") != null)
        {
            //AutoSignIn();
        }
    }

    private void OnDisable()
    {
        _signUp.onClick.RemoveListener(OnSignUp);
        _signIn.onClick.RemoveListener(OnSignIn);
        StopCoroutine("SendSignInRequest");
    }

    void OnSignUp()
    {
        UIManager.ChangeScreen(UIManager.Screen.SignUp);
    }
    
    void OnSignIn()
    {

        _signIn.interactable = false;
        _signUp.interactable = false;
        SignInRequest signInData = new SignInRequest
        {
            mobilenumber = mobileNumberInput.text
        };

        StartCoroutine(SendSignInRequest(SignInUrl, signInData));
    }

    void AutoSignIn()
    {
        SignInRequest autosignInData = new SignInRequest
        {
            //mobilenumber = PlayerPrefs.GetString("mobileNumber")
        };

        StartCoroutine(SendSignInRequest(SignInUrl, autosignInData));
    }
    
    private IEnumerator SendSignInRequest(string url, SignInRequest data)
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
            SignInResponse signInResponse = JsonConvert.DeserializeObject<SignInResponse>(request.downloadHandler.text);
            
            Debug.Log($"Message: {signInResponse.message}, PlayerID: {signInResponse.playerid}, Success: {signInResponse.success}");
            ProfileFetch.playid = int.Parse(signInResponse.playerid);
            
            if (signInResponse.success)
            {
                otpScript.OnGenerateOtp();
                if (mobileNumberInput != null)
                {
                    PlayerPrefs.SetString("mobileNumber", mobileNumberInput.text);
                }

                yield return new WaitForSeconds(2);
                
                _signIn.interactable = true;
                _signUp.interactable = true;
                _info.SetActive(false);
                
                UIManager.ChangeScreen(UIManager.Screen.Otp);
            }
            else
            {
                _signIn.interactable = true;
                _signUp.interactable = true;
                _info.SetActive(true);
            }

            
        }
        else
        {
            Debug.LogError($"Error: {request.error}");
            _signIn.interactable = true;
            _signUp.interactable = true;
            _info.SetActive(true);
        }
    }

    public class SignInRequest
    {
        public string mobilenumber;
    }

    public class SignInResponse
    {
        public string message;
        public string playerid;
        public bool success;
    }
    
    
}
