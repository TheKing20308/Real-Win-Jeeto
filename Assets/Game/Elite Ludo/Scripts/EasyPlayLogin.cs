using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using UnityEngine.Networking;
using AssemblyCSharp;

using System.Text;

[System.Serializable]
public class Data
    {
        public string id ;
        public string ref_by ;
        public string ref_id ;
        public string role ;
        public string user_type;
        public string email_status;
        public string isactive ;
        public string username ;
        public string email ;
        public string phone ;
        public string tokenid ;
        public string currency ;
        public string std_code ;
        public string country_name ;
        public string f_name ;
        public string designation ;
        public string profile_pic ;
        public string profile_pic_thumb ;
        public string country ;
        public string phonecode ;
        public string address_id ;
        public string address_id_path ;
        public string address_thumb ;
        public string national_id ;
        public string national_thumb ;
        public string national_id_path ;
        public string address_id_status ;
        public string national_id_status ;
        public string wallet ;
        public string active_date ;
        public string dashboard_webviewurl ;
    }

    [System.Serializable]
    public class ResponseData
    {
        public int status ;
        public string token ;
        public Data data ;
        public string message ;
    }

public class EasyPlayLogin : MonoBehaviour
{
    public GameObject loginUser;
    public GameObject loginPass;
    public GameObject EasyplayLoginDialog;
    public GameObject easyLoginInformationText;
    
    // Start is called before the first frame update
    void Start()
    {
        easyLoginInformationText.SetActive(false);
        GameManager.Instance.easyLogin = this;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void easyPlayLoginDialogClose(){
        GameManager.Instance.easyLoginDialog.SetActive(false);
    }

    // public void loginEasyPlay()
    // {
    //     StartCoroutine(LoginEasyPlayApi());
    // }

    // IEnumerator LoginEasyPlayApi() {
    //     string username = "";
    //     string password = "";
    //     username = loginUser.GetComponent<Text>().text;
    //     password = loginPass.GetComponent<Text>().text;
    //     Debug.Log("Easy play login credentials" + username +" "+ password);
        
    //         var request = new UnityWebRequest(StaticStrings.easyPlayLogin, "POST");
    //         JsonData str = new JsonData();
    //         str["username"] = username;
    //         str["u_password"] = password;
    //         str["device_type"] = "1";
    //         str["device_token"] = "1234567898sssss";
    //         // str["device_token"] = deviceToken;
    //         string jsonStr = str.ToJson();
    //         byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonStr);
    //         request.uploadHandler = new UploadHandlerRaw(bodyRaw);
    //         string getByte = Encoding.ASCII.GetString(bodyRaw);
    //         Debug.Log("Body Raw : "+bodyRaw);
    //         request.downloadHandler = new DownloadHandlerBuffer();
    //         request.SetRequestHeader("token", "easyplai11header");
    //         request.SetRequestHeader("Content-Type", "application/json");
    //         yield return request.SendWebRequest();
    //         Debug.Log("Response from Easy Play" + request.downloadHandler.text);
    //         if(request.isNetworkError){
    //             easyLoginInformationText.SetActive(true);
    //                 easyLoginInformationText.GetComponent<Text>().text = request.error;
    //             Debug.Log("Error While Sending: " + request.error);
    //         }
    //         else{
    //             ResponseData rootObjects = JsonUtility.FromJson<ResponseData>(request.downloadHandler.text);
    //             // Debug.Log("Status is : "+rootObjects[].status);
    //             if(rootObjects.status == 200){

    //                 GameManager.Instance.easyplayLogin = true;
    //                 PlayerPrefs.SetString("easyplay_user",rootObjects.data.username);
    //                 PlayerPrefs.SetString("easyplay_userid",rootObjects.data.id);
    //                 PlayerPrefs.SetString("easyplay_pass",password);
    //                 PlayerPrefs.SetString("easyplay_token",rootObjects.token);
    //                 PlayerPrefs.SetString("easyplay_tokeId",rootObjects.data.tokenid);
    //                 PlayerPrefs.SetString("easyplay_name",rootObjects.data.f_name);
    //                 PlayerPrefs.SetString("easyplay_wallet",rootObjects.data.wallet);
    //                 PlayerPrefs.SetString("easyplay_isLogged","1");
    //                 PlayerPrefs.Save();
    //                 Debug.Log("Data is : "+rootObjects.message);
    //                 Debug.Log("wallet is : "+rootObjects.data.wallet);
    //                 GameManager.Instance.easyLoginDialog.SetActive(false);
    //             }
    //             else{
    //                 easyLoginInformationText.SetActive(true);
    //                 easyLoginInformationText.GetComponent<Text>().text = rootObjects.message;
    //             }
    //             // for (int i = 0; i < rootObjects.data.Count; i++)
    //             //     {
    //             //         Debug.Log("Data is : "+rootObjects.status);
    //             //     }
    //             // Debug.Log("Response from Easy Play" + request.downloadHandler.text);
    //         }
            
    //         // if(request.ResponseCode)
        

    // }
}
