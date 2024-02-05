using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using System;
//using Garlic.Plugins.Webview;
//using Garlic.Plugins.Webview.Utils;
using UnityEngine.Networking;

using System.Text;
//using paytm;
using AssemblyCSharp;


public class BuyItemControl : MonoBehaviour
{


    public string amt = "";

    public Text AmountShow,CoinCount;


    public void SetBuyData(string amount)
    {
        amt = amount;
        CoinCount.text = amt;
        AmountShow.text = " ₹ " + amt ;
    }


    public void buyItem()
    {
        
    FindObjectOfType<WebView>().    OnOpenWebView(amt);
    }
 

}
