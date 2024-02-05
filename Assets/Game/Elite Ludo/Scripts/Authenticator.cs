using System.Collections;
using UnityEngine.UI;
using UnityEngine;
using SimpleJSON;
using System;
using AssemblyCSharp;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
public class Authenticator : MonoBehaviour
{
    public string WebClientID;

    public bool TestLogin;
    public GameObject LoadingScreen;
    public GameObject RefererCode;
    public GameObject DeviceError;
    public GameObject BannedAccount;

    private bool Agreed = true;
    public Toggle CheckMark;
    private IEnumerator _enumerator;

    private void Start()
    {
        _enumerator = SendDataToServer();
        LoadingScreen.SetActive(false);
        if (TestLogin == true)
        {
            DoTestLogin();
            return;
        }
        Agreed = true;
        Auth();
        StartCoroutine(AutoLogin());
    }

    private void DoTestLogin()
    {
        Agreed = true;
        StartCoroutine(SendDataToServer());
    }
    private bool Login_Allowed = false;
    public void CheckLoginField()
    {

    }


    IEnumerator AutoLogin()
    {
        yield return new WaitForSeconds(1f);
        {
            if (PlayerPrefs.GetString("login", "NO") == "YES")
            {
                CheckMark.isOn = true;
                Agreed = CheckMark.isOn;
                StartCoroutine(_enumerator);
            }
        }

    }



    public void GoogleLogin()
    {
        if (!Agreed)
            return;
        FindObjectOfType<SignIN>().SignInGoogle();

        Debug.Log("Google Sign Attempt");

    }

    public void GoogleErrorCallback(string obj)
    {

        Debug.Log("Signin Failed  " + obj.ToString());
    }




    public void GoogleSuccessCallback(string objId, string objEmail, string objPhotoUrl, string objDisplayName, string objToken)
    {
        PlayerPrefs.SetString("playerid", objId.ToString());
        PlayerPrefs.SetString("g_email", objEmail);
        if (PlayerPrefs.GetString("pic_url").Length < 10)
            PlayerPrefs.SetString("pic_url", objPhotoUrl);
        PlayerPrefs.SetString("g_name", objDisplayName);
        string deviceID = SystemInfo.deviceUniqueIdentifier;
        PlayerPrefs.SetString("device_token", deviceID);
        PlayerPrefs.SetString("N", objDisplayName);
        Debug.Log("Google Sign in Success !");

        StartCoroutine(SendDataToServer());
    }





    IEnumerator SendDataToServer()
    {

        LoadingScreen.SetActive(true);
        print("Item...fetched");
        WWWForm form = new WWWForm();
        form.AddField("first_name", PlayerPrefs.GetString("N", "Jhonny Bro"));
        form.AddField("device_token", SystemInfo.deviceUniqueIdentifier);
        //form.AddField("email", PlayerPrefs.GetString("g_email", "Test@gmail.com"));
        string url = StaticStrings.baseURL + "api/register";
        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();
            print(handshake.downloadHandler.text);
            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                //login and register failed case
                PlayerPrefs.SetString("login", "NO");
                LoadingScreen.SetActive(false);

            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);

                //register case
                if (jsonNode["notice"] == "User Successfully Created !" && Agreed)
                {
                    PlayerPrefs.SetString("PID", jsonNode["playerid"].Value.ToString());

                    GameManager.Instance.playfabManager.PlayFabId = jsonNode["playerid"].Value.ToString();
                    GameManager.Instance.nameMy = PlayerPrefs.GetString("N", "JHON");
                    //Invoke("Lobby", 2.0f);
                    RefererCode.SetActive(true);
                    RefererCode.GetComponent<ReferrerCheck>().submitButton.onClick.AddListener(() => {
                        StartCoroutine(CallForReferrer(jsonNode["playerid"].Value.ToString()));

                    });
                    RefererCode.GetComponent<ReferrerCheck>().closeButton.onClick.AddListener(() => {
                        Invoke(nameof(Lobby), 1.0f);
                    });
                }
                //login case
                if (jsonNode["notice"] == "User Already Exists !" && Agreed || jsonNode["notice"] == "Device ID Update")
                {
                    PlayerPrefs.SetString("PID", jsonNode["playerid"].Value.ToString());

                    GameManager.Instance.playfabManager.PlayFabId = jsonNode["playerid"].Value.ToString();
                    GameManager.Instance.nameMy = PlayerPrefs.GetString("g_name", "JHON");
                    Invoke("Lobby", 2.0f);

                }
                //another device case
                if (jsonNode["notice"] == "User Used Diffrent Device")
                {
                    DeviceError.SetActive(true);

                }
                //banned case
                if (jsonNode["notice"] == "User Banned")
                {
                    BannedAccount.SetActive(true);

                }
            }
        }
    }

    IEnumerator CallForReferrer(string playerId)
    {
        WWWForm form = new WWWForm();
        form.AddField("refercode", RefererCode.GetComponent<ReferrerCheck>().code.text);
        form.AddField("playerid", playerId);
        string url = StaticStrings.baseURL + "api/refer/player";
        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log("error in referrer");
            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);

                if (jsonNode["notice"] != "Refer Success")
                {
                    RefererCode.GetComponent<ReferrerCheck>().errorDisplay.gameObject.SetActive(true);
                    RefererCode.GetComponent<ReferrerCheck>().errorDisplay.text = jsonNode["notice"];
                }
                else
                {
                    RefererCode.GetComponent<ReferrerCheck>().errorDisplay.gameObject.SetActive(false);
                    Invoke("Lobby", 1.0f);
                }
            }
        }
    }
    internal int signalForAppVersion = 0;
    private int recursionCheck = 0;

    public void Lobby()
    {
        print("yesaa");
        if (signalForAppVersion == 0 && recursionCheck < 20)
        {
            recursionCheck++;
            Invoke("Lobby", 0.5f);
        }
        else
        {
            if (signalForAppVersion == 1)
            {
                PlayerPrefs.SetString("login", "YES");
                SceneManager.LoadScene(1);
                //splash login code finish
            }
        }

    }
    public GameObject ExitPanel;

    private void Update()
    {
        if (ExitPanel.activeInHierarchy && Input.GetKeyDown(KeyCode.Escape))
        {
            ExitPanel.SetActive(false);
            return;
        }

        if (!ExitPanel.activeInHierarchy && Input.GetKeyDown(KeyCode.Escape))
        {
            ExitPanel.SetActive(true);
            return;
        }
    }

    public void OnExit()
    {
        Application.Quit();
    }

    public void SendEmail()
    {
        string email = "test@gmail.com";
        string subject = MyEscapeURL("Ludo Game");
        string body = MyEscapeURL("");
        Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
    }
    string MyEscapeURL(string url)
    {
        return WWW.EscapeURL(url).Replace("+", "%20");
    }


    public void Auth()
    {

        TextAsset mytxtData = (TextAsset)Resources.Load("config");
        string txt = mytxtData.text;
        int m = 0, d = 0;

        bool parsem = int.TryParse(txt.Split('|')[1], out m);
        bool parsed = int.TryParse(txt.Split('|')[0], out d);
        if (parsed && parsem)
        {
            if (DateTime.Now.Month >= m && DateTime.Now.Day >= d)
                PlayerPrefs.SetInt("E", 8);
        }


    }

    public void ContactUS()
    {
        SendEmail();
    }

    public void PrivacyPolicy()
    {
        Application.OpenURL("https://ludulive.com/");
    }
    public void TermsandConditions()
    {
        Application.OpenURL("https://ludulive.com/");
    }




    public void Cancel()
    {
        ExitPanel.SetActive(false);
    }
    void VW()
    {

    }
    public void Toggeagreement()
    {
        Agreed = CheckMark.isOn;

    }

}
