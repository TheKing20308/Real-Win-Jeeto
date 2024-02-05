using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine.UI;
using System.Text.RegularExpressions;
using AssemblyCSharp;

public class TermsConditions : MonoBehaviour
{
    public Text termsText;
    // Start is called before the first frame update
    void Start()
    {
         string url = StaticStrings.baseURL+"terms-conditions.php?player_id=AC52407049B1CA9A";
            WWW www = new WWW(url);
            StartCoroutine(WaitForRequest(www));
            Debug.Log("Full Url to control : "+url);
        
    }
    IEnumerator WaitForRequest(WWW www)
     {
         yield return www;

         // check for errors
         if (www.error == null)
         {
            string data = www.text;
            termsText.text = data;
         }
         else
         {
            termsText.text = "There is an error, please try again!";
         }
     }

    // Update is called once per frame
    void Update()
    {
        
    }
}
