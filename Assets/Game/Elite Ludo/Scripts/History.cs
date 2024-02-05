using System.Collections;
using System.Collections.Generic;
using AssemblyCSharp;
using UnityEngine.Networking;
using SimpleJSON;
using UnityEngine;
using UnityEngine.UI;
public class History : MonoBehaviour
{
    public Text HistoryText;


    // Use this for initialization
    public void OnEnable()
    {
        HistoryText.text = "";
        ShowHistory();

    }

    public void ShowHistory()
    {

        StartCoroutine(Hist());

    }

    IEnumerator Hist()
    {
        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID", ""));
        string url = StaticStrings.baseURL + "api/payment/history";
        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();
            Debug.Log(handshake.downloadHandler.text);

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log(handshake.error.ToString());
            }
           else {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);

                if (jsonNode["notice"] == "No Any History Found")
                {
                    HistoryText.text = "No Transactions Yet !";
                }

         

                if (jsonNode["notice"] == "Player Withdraw & Transaction History")
                {
                    HistoryText.text = "";

                    for (int i = 0; i < jsonNode["withdrawhistory"].Count; i++)
                    {
                        if (i == 0)
                            HistoryText.text += "Withdrawal History \n\n";
                        if (i != 0)
                            HistoryText.text += "\n";
                            HistoryText.text += "Amount : " + jsonNode["withdrawhistory"][i]["amount"].Value + "\n" +
                            "Payment Method : " + jsonNode["withdrawhistory"][i]["payment_method"].Value + "\n" +
                            "Payment ID : " + jsonNode["withdrawhistory"][i]["account_number"].Value + "\n"+
                        "Status : " +  Status(jsonNode["withdrawhistory"][i]["status"].Value) ;
                    }
                    {
                        for (int i = 0; i < jsonNode["transactionhistory"].Count; i++)
                        {
                            if (i == 0)
                                HistoryText.text += "\n\nTransaction History \n\n";
                            if (i != 0)
                                HistoryText.text += "\n";
                            HistoryText.text += "Amount : " + jsonNode["transactionhistory"][i]["amount"].Value + "\n" +
                                "Transaction ID : " + jsonNode["transactionhistory"][i]["txn_id"].Value + "\n" +
                            "Status : " + jsonNode["transactionhistory"][i]["status"].Value + "\n" +
                                "Transaction Date : " + jsonNode["transactionhistory"][i]["created_at"].Value;
                           

                        }
                    }
                    if (jsonNode["withdrawhistory"].Count == 0 && jsonNode["transactionhistory"].Count == 0)
                        HistoryText.text = " No Transaction Yet !";
                }
          

            }
        }
        }

    private string Status(string r)
    {
        string s = "";
        
        if (r == "1")
        {
            s = " Successfull ! ";    
        }

        if (r == "0")
        {
            s = " Pending ! ";
        }

        if (r == "2")
        {
            s = " Rejected ! ";
        }

        return s;
    }
}
