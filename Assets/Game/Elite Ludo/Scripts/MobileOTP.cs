using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using SimpleJSON;
using System;
using System.Net;
using UnityEngine.Networking;
using AssemblyCSharp;
using System.Collections.Specialized;
using System.Web;
using Random = UnityEngine.Random;

public class MobileOTP : MonoBehaviour
{
    public GameObject MobilePanel;
    public GameObject OTPPannel;
    public GameObject UserinfoPanel;
    public GameObject mobilenumber;
    public GameObject otp;
    public GameObject username;
    public GameObject refercode;
    public GameObject getotp;
    public GameObject verifyotp;
    public GameObject submitbutton;
    public Text messageToShow;
    public Text warning;
    public Text OTPwarning;
    public Text UserRefgernotice;
    public GameObject DeviceError;
    public GameObject BannedAccount;
    // Start is called before the first frame update
    void OnEnable()
    {
        OTP = "";
        mobilenumber.GetComponent<InputField>().text = "";
        messageToShow.GetComponent<Text>().text = "";
        otp.GetComponent<InputField>().text = "";
    }

    public void GetOTP()
    {
        if (mobilenumber.GetComponent<InputField>().text == "")
        {
            warning.GetComponent<Text>().text = "Please Enter Valid Details";
        }
        else if (mobilenumber.GetComponent<InputField>().text.Length != 10)
        {
            warning.GetComponent<Text>().text = "Please Enter Valid Number";
        }
        else if (mobilenumber.GetComponent<InputField>().text != "" && mobilenumber.GetComponent<InputField>().text.Length == 10)
        {
            MobilePanel.SetActive(false);
            OTPPannel.SetActive(true);

            try
            {
                String otpp = UnityEngine.Random.Range(100000, 999999).ToString();
                OTP = otpp;
                TimerOTP._otpText.text = otpp;
                //Hii name Your OTP Is otp Please Enter &Login LudoGame
                string message = "Hii Ludouser Your OTP Is " + otpp + " Please Enter & Login LudoGame";
                String encodedMessage = HttpUtility.UrlEncode(message);
                print("encodedMessage = " + encodedMessage);
                print("myphonenumber = " + mobilenumber.GetComponent<InputField>().text);
                using (var wb = new WebClient())
                {
                    byte[] response = wb.UploadValues("https://api.textlocal.in/send/", new NameValueCollection() {
                        {
                            "apikey", "MDM0ZWExM2M5NjM2OWM0M2VkYTY1N2VmMjY5ODNlZTQ="
                        }, {
                            "numbers", mobilenumber.GetComponent<InputField>().text
                        }, {
                            "message", encodedMessage
                        }, {
                            "sender", "LUDOGM"
                        }
                    });

                    string result = System.Text.Encoding.UTF8.GetString(response);
                    print("OTP RESULT : \r\n" + result);
                    messageToShow.GetComponent<Text>().text = "OTP Sent to " + mobilenumber.GetComponent<InputField>().text;
                    StartCoroutine(CheckUser());
                }
            }
            catch (Exception e)
            {
                throw (e);
            }



            //   String encodedMessage = HttpUtility.Encode(message);

        }

    }

    private bool JustverifyandAllow = false;

    public IEnumerator CheckUser()
    {

        FindObjectOfType<Authenticator>().LoadingScreen.SetActive(true);
        WWWForm form = new WWWForm();
        form.AddField("mobilenumber", mobilenumber.GetComponent<InputField>().text);

        string url = StaticStrings.baseURL + "api/mobile/checkuser";
        using (UnityWebRequest req = UnityWebRequest.Post(url, form))
        {

            yield return req.SendWebRequest();

            if (req.isHttpError || req.isNetworkError)
            {
                print(req.error.ToString());
                FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);
            }
            else if (req.downloadHandler.text.Length > 5)
            {
                JSONNode node = JSON.Parse(req.downloadHandler.text);
                if (node["message"].Value == "User Not Exist !")
                {
                    JustverifyandAllow = false;
                    FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);

                }
                if (node["message"].Value == "User Already Exist !")
                {
                    JustverifyandAllow = true;

                    PlayerPrefs.SetString("PID", node["playerid"].Value);
                    FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);
                }
                if (node["message"].Value == "User Banned")
                {
                    BannedAccount.SetActive(true);

                }
                if (node["message"].Value == "User Used Diffrent Device")
                {
                    DeviceError.SetActive(true);

                }
            }


        }

    }

    private string OTP = "";
    public void VerifyOTP()
    {

        if (JustverifyandAllow)

        {
            if (otp.GetComponent<InputField>().text == OTP)
            {

                FindObjectOfType<Authenticator>().Lobby();
            }
            else
            {
                otp.GetComponent<InputField>().text = string.Empty;
                OTPwarning.text = "Incorrect OTP Entered !";
            }
        }
        else
        {

            if (otp.GetComponent<InputField>().text == OTP)
            {
                OTPwarning.text = "OTP Verified !";
                Invoke("Reg", 2.0f);
            }
            else
            {
                otp.GetComponent<InputField>().text = string.Empty;
                OTPwarning.text = "Incorrect OTP Entered !";
            }
        }

    }

    private void Reg()
    {
        OTPPannel.SetActive(false);
        UserinfoPanel.SetActive(true);
    }
    public void OnClickRegister()
    {


        if (username.GetComponent<InputField>().text.Length <= 4)
        {
            UserRefgernotice.text = "Enter Valid Username";
        }
        else
        {
            StartCoroutine(ProceedRegister());
        }


    }


    public IEnumerator ProceedRegister()
    {
        FindObjectOfType<Authenticator>().LoadingScreen.SetActive(true);
        WWWForm form = new WWWForm();
        string deviceID = SystemInfo.deviceUniqueIdentifier;
        PlayerPrefs.SetString("device_id", deviceID);
        form.AddField("playername", username.GetComponent<InputField>().text);
        form.AddField("mobilenumber", mobilenumber.GetComponent<InputField>().text);
        form.AddField("device_token", deviceID);
        form.AddField("refer_code", refercode.GetComponent<InputField>().text);
        string url = StaticStrings.baseURL + "api/mobile/registration";
        print(url);
        using (UnityWebRequest req = UnityWebRequest.Post(url, form))
        {

            //actual registration logic
            yield return req.SendWebRequest();

            if (req.isHttpError || req.isNetworkError)
            {
                Debug.Log(req.error.ToString());
                FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);
            }
            else if (req.downloadHandler.text.Length > 5)
            {
                JSONNode node = JSON.Parse(req.downloadHandler.text);
                if (node["message"].Value == "User Created Successfully !")
                {
                    UserRefgernotice.text = "User Created Successfully !";
                    PlayerPrefs.SetString("N", username.GetComponent<InputField>().text);
                    PlayerPrefs.SetString("g_name", username.GetComponent<InputField>().text);

                    PlayerPrefs.SetString("PID", node["playerid"].Value);
                    FindObjectOfType<Authenticator>().Lobby();
                }
                //use less code for now
                if (node["message"].Value == "Invalid Refer Code")
                {
                    UserRefgernotice.text = "Invalid Refer Code !";
                    FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);
                }
                if (node["message"].Value == "Something is wrong")
                {
                    UserRefgernotice.text = "Something is wrong";
                    FindObjectOfType<Authenticator>().LoadingScreen.SetActive(false);
                }
            }


        }
    }

}
