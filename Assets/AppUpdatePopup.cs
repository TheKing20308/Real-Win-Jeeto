using AssemblyCSharp;
using SimpleJSON;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class AppUpdatePopup : MonoBehaviour
{
    public Authenticator authObjectUsed;
    public Button button;

    internal IEnumerator CheckVersion()
    {
        string url = StaticStrings.baseURL + "api/check/app/version";
        using (UnityWebRequest handshake = UnityWebRequest.Get(url))
        {
            yield return handshake.SendWebRequest();
            Debug.Log(handshake.downloadHandler.text);

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log(handshake.error.ToString());
            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);
                bool appV = (float.Parse(jsonNode["gameconfig"]["app_version"]) > float.Parse(Application.version));
                Debug.Log("Api json node--->" +float.Parse(jsonNode["gameconfig"]["app_version"]) +","+float.Parse(Application.version));
                authObjectUsed.signalForAppVersion = appV ? -1 : 1;

                if (appV)
                {
                    gameObject.SetActive(appV);
                    authObjectUsed.signalForAppVersion = appV ? -1:1;
                    button.onClick.AddListener(() =>
                    {
                        Application.OpenURL(jsonNode["gameconfig"]["website_url"]);
                    });
                }
                
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
