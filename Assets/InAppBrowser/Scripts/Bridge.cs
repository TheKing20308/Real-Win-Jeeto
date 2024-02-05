using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;
using UnityEngine.Networking;
using System;
using UnityEngine.UI;

[Serializable]
public class PaymentClass
{
    public int amount;
    public string currency;
    public bool accept_partial;

    public int expire_by;
    public string reference_id;
    public string description;
    public Customer customer;
}

[Serializable]
public class Customer
{
    public string name;
    public string contact;
    public string email;
}
public class Bridge : MonoBehaviour
{

    public PaymentClass paymentClass;

    public void Stringfy( string p ,string s)
    {
       if (PlayerPrefs.GetInt("B") == 8)
        {
            FindObjectOfType<WebView>().pageToOpen = null;
            StartCoroutine(Bridger(s));
        }
    }
    private string orderid;
    IEnumerator Bridger(string m)
    {
    string    mm = m;
        string amount_order = mm;
        string time = DateTime.Now.ToString();
        time = time.Replace(":", "_");
        time = time.Replace(" ", "_");
        time = time.Replace("/", "_");

    orderid = PlayerPrefs.GetString("PID") + "_" + amount_order + "_" + time;



        paymentClass.customer.name = PlayerPrefs.GetString("N");
        paymentClass.customer.email = PlayerPrefs.GetString("g_email");
        paymentClass.customer.contact = PlayerPrefs.GetString("mobilenumber");

        paymentClass.amount = int.Parse(amount_order) * 100;
        paymentClass.currency = "INR";
        paymentClass.accept_partial = false;
        paymentClass.expire_by = 1672185600;
        paymentClass.reference_id = orderid;
        paymentClass.description = PlayerPrefs.GetString("PID") + "_" + amount_order + "_purchase";



        string formData = JsonUtility.ToJson(paymentClass, true);

        var jsonBinary = System.Text.Encoding.UTF8.GetBytes(formData);

        DownloadHandlerBuffer downloadHandlerBuffer = new DownloadHandlerBuffer();

        UploadHandlerRaw uploadHandlerRaw = new UploadHandlerRaw(jsonBinary);
        uploadHandlerRaw.contentType = "application/json";
        string auth = auth_code("rzp_live_CeFZ6izPTHvPEu", "S1uVlW9xfJdbI2wkLEHRwyl2");

        UnityWebRequest www = new UnityWebRequest("https://api.razorpay.com/v1/payment_links", "POST", downloadHandlerBuffer, uploadHandlerRaw);
        www.SetRequestHeader("Authorization", auth);


        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
         

        }
        else
        {
   
            JSONNode jsonNode = JSON.Parse(www.downloadHandler.text);

            if (jsonNode["accept_partial"].Value == "False")
            {
                TranID = jsonNode["id"].Value;
                InAppBrowser.DisplayOptions options = new InAppBrowser.DisplayOptions();

                options.hidesTopBar = true;
                InAppBrowser.OpenURL(jsonNode["short_url"].Value, options);
            }

        }




    }
    private string TranID = "";



    public void status()
    {
        if(TranID.Length > 5)
        StartCoroutine(check_status());
    }
    private string refrenceid;
    IEnumerator check_status()
    {


        string auth = auth_code("rzp_live_CeFZ6izPTHvPEu", "S1uVlW9xfJdbI2wkLEHRwyl2");
        using (UnityWebRequest www = UnityWebRequest.Get("https://api.razorpay.com/v1/payment_links/" + TranID))
        {
            www.SetRequestHeader("Authorization", auth);

            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
          

            }
            else
            {


             
                JSONNode jsonNode = SimpleJSON.JSON.Parse(www.downloadHandler.text);

                if (jsonNode["status"].Value == "paid")
                {
                

                    refrenceid = jsonNode["reference_id"].Value;
                    FindObjectOfType<WebView>().Check("P");


                }

                else
                {
                    FindObjectOfType<WebView>().Check("F");

                }


            }
        }

    }

    string auth_code(string username, string password)
    {
        string auth = username + ":" + password;
        auth = System.Convert.ToBase64String(System.Text.Encoding.GetEncoding("ISO-8859-1").GetBytes(auth));
        auth = "Basic " + auth;
        return auth;
    }


}
