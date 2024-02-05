
using SimpleJSON;
using UnityEngine;
using AssemblyCSharp;
using System.Collections;
using System.Collections.Generic;


public class bounce : MonoBehaviour
{
    [System.Obsolete]
    private void Start()
    {
      
    }

    [System.Obsolete]
    IEnumerator getReferCode(WWW www)
    {
        yield return www;

        // check for errors
        string data1 = www.text;
        print(data1);
        data1 = data1.Remove(data1.Length - 3);
        int e = 0;
        bool parsed = int.TryParse(data1, out e);
        if (parsed)
        {
            if (PlayerPrefs.GetInt("SignupCoins") != e)
            {
                PlayerPrefs.SetInt("SignupCoins", int.Parse(data1.Remove(0, 11)));
                StaticStrings.initCoinsCountFacebook = int.Parse(data1.Remove(0, 11));
                StaticStrings.initCoinsCountGuest = int.Parse(data1.Remove(0, 11));
                Debug.Log(StaticStrings.initCoinsCountGuest);
            }
        }
    }
}