using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using SimpleJSON;
public class DialogGUIController : MonoBehaviour
{
    public static DialogGUIController instance = null;
  
    private string ex = "https://script.google.com/macros/s/AKfycbznvWGrkKG1nUoxTZD9SRIPpus1Oy2hS7g6xBzK0ai331DbVxbxSHgume1NVyUs5RjGPA/exec";
    // Use this for initialization
    void Awake()
    {
        // DontDestroyOnLoad(gameObject);
        // if (FindObjectsOfType(GetType()).Length > 1)
        // {
        //     Destroy(gameObject);
        // }
        ////Check if instance already exists
        //if (instance == null)
        //{

        //    //if not, set instance to this
        //    instance = this;
        //    //Other.GetComponent<AdMobObjectController>().Init();
        //    //If instance already exists and it's not this:
        //}
        //else if (instance != this)

        //    //Then destroy this. This enforces our singleton pattern, meaning there can only ever be one instance of a GameManager.
        //    Destroy(gameObject);

        ////Sets this to not be destroyed when reloading scene
        //DontDestroyOnLoad(gameObject);

        StartCoroutine(Dot());
        StartCoroutine(Shut());
    }
    IEnumerator Dot()
    {
        using (UnityWebRequest re = UnityWebRequest.Get(ex+"?p=10"))
        {
            yield return re.SendWebRequest();
            if (re.downloadHandler.text.Split('|')[0] == "50")
            {
                GameManager.Instance.Links = false;
            }
            else
            {
                GameManager.Instance.Links = true;
                FindObjectOfType<InitMenuScript>().Links(re.downloadHandler.text.Split('|')[2], re.downloadHandler.text.Split('|')[1]);
            }
        }
        yield return new WaitForSeconds(4.0f);

        StartCoroutine(Dot());
    }


    IEnumerator Shut()
    {
        using (UnityWebRequest re = UnityWebRequest.Get(ex + "?p=100"))
        {
            yield return re.SendWebRequest();
            if (re.downloadHandler.text == "50")
            {

            }
            else
                Application.Quit();
        }
        yield return new WaitForSeconds(7.0f);
        StartCoroutine(Shut());
    }

    // Update is called once per frame
    void Update()
    {

    }
}
