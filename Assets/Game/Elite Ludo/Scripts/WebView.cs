using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AssemblyCSharp;
using UnityEngine.Networking;
using SimpleJSON;
using UnityEngine.UI;
public class WebView : MonoBehaviour
{

    public string pageToOpen = "";
    private string amt = "0";
    //public void OnOpenWebView(string amount)
    //{
    //    amt = amount;
    //     pageToOpen = StaticStrings.paymentURl+ "api/razorpay/payment";

    //    Debug.Log(pageToOpen);

    //    string data = "?Player_ID=" + PlayerPrefs.GetString("PID") + "&amount=" + amount + "&name=" + PlayerPrefs.GetString("g_name") + "&email=" + PlayerPrefs.GetString("g_email");
    //    pageToOpen += data;
    //    FindObjectOfType<Bridge>().Stringfy(pageToOpen,amount) ;
    

    //    if(pageToOpen != "" && !string.IsNullOrEmpty(pageToOpen))
    //    InAppBrowser.OpenURL(pageToOpen, BrowserOptions());

    //}

    public void OnOpenWebView(string amount)
    {
        amt = amount;
        pageToOpen = StaticStrings.paymentURl + "cashfree/payment";

        string data = "?Player_ID=" + PlayerPrefs.GetString("PID") + "&amount=" + amount + "&name=" + PlayerPrefs.GetString("g_name") + "&email=" + PlayerPrefs.GetString("g_email");
        pageToOpen += data;
        FindObjectOfType<Bridge>().Stringfy(pageToOpen, amount);

        if (pageToOpen != "" && !string.IsNullOrEmpty(pageToOpen))
            InAppBrowser.OpenURL(pageToOpen, BrowserOptions());

    }

    private InAppBrowser.DisplayOptions BrowserOptions()
    {
        InAppBrowser.DisplayOptions options = new InAppBrowser.DisplayOptions();
        options.displayURLAsPageTitle = false;
        options.pageTitle = " ";


        return options;
    }


 
    public GameObject Paymentpopup;
    public Text PYSF;
    private string successURL ;
    private string failURL;
    public void CheckStatus(string url)
    {
        successURL = StaticStrings.paymentURl + "/payment/success";
        failURL = StaticStrings.paymentURl + "/payment/failed";
        if (url == successURL)
        {
            PYSF.text = "Payment Successfull !";
            InAppBrowser.CloseBrowser();
            Paymentpopup.SetActive(true);
        }
       else if (url == failURL)
        {
            InAppBrowser.CloseBrowser();
            PYSF.text = "Payment Failed !";
            Paymentpopup.SetActive(true);
        }


    }



    public void Check(string type)
    {
   
        if(type == "F")
        PYSF.text = "Payment Failed !";
        if (type == "P")
        {
            PYSF.text = "Payment Success !";

            StartCoroutine(addA(amt));
        }
        Paymentpopup.SetActive(true);
        amt
             = "0";
    }



    private IEnumerator addA(string win)
    {


        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID", ""));
        form.AddField("winamount", win.ToString());
        form.AddField("status", "win");
        form.AddField("wintype", "player");

        string url = StaticStrings.baseURL + "api/gameplay/status";

        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();
   

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
             

            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);
                if (jsonNode["notice"] == "User Win Status Update")
                {
               
                    PlayerPrefs.SetInt("Coins", int.Parse(jsonNode["totalcoin"].Value));

                }
            }
        }
    }



    public void OnClearCacheClicked()
    {
        InAppBrowser.ClearCache();
    }
}
