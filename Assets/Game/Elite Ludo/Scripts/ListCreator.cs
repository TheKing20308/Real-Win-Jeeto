using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Text.RegularExpressions;
using AssemblyCSharp;

[System.Serializable]
public class BaseAbility
{
    public string request_amount;
    public string status;
    public string date_created;
}

[System.Serializable]
public class GetBAResult
{
    public List<BaseAbility> output;
}

public class ListCreator : MonoBehaviour {

    [SerializeField]
    private Transform SpawnPoint = null;

    [SerializeField]
    private GameObject item = null;

    [SerializeField]
    private RectTransform content = null;

    [SerializeField]
    private int numberOfItems = 3;

    public string[] itemAmount = null;
    public string[] itemStatus = null;
    public string[] itemDate = null;
    public string playfabId = "";
    // public Sprite[] itemImages = null;

    // Use this for initialization
    void Start () {
        
        //setContent Holder Height;
  /*      content.sizeDelta = new Vector2(0, numberOfItems * 60);    
        playfabId = GameManager.Instance.playfabManager.PlayFabId;
            string url = StaticStrings.baseURL+"payment-history.php?player_id="+playfabId;
            WWW www = new WWW(url);
            StartCoroutine(WaitForRequest(www));
            Debug.Log("Full Url to control : "+url);*/
        
    }
        IEnumerator WaitForRequest(WWW www)
     {
         yield return www;

         // check for errors
         if (www.error == null)
         {
            string data = www.text;

            GetBAResult P = JsonUtility.FromJson<GetBAResult>(data);
            Debug.Log("Count Json: " + P.output.Count);
            for (int i = 0; i < P.output.Count; i++)
            {
                // 60 width of item
            float spawnY = i * 100;
            //newSpawn Position
            Vector3 pos = new Vector3(0, -spawnY, SpawnPoint.position.z);
            //instantiate item
            GameObject SpawnedItem = Instantiate(item, pos, SpawnPoint.rotation);
            //setParent
            SpawnedItem.transform.SetParent(SpawnPoint, false);
            //get ItemDetails Component
            ItemDetails itemDetails = SpawnedItem.GetComponent<ItemDetails>();
            //set name
            itemDetails.text.text = P.output[i].request_amount;
            if(int.Parse(P.output[i].status) == 0){
                itemDetails.text2.text = "Pending";
            }
            else if(int.Parse(P.output[i].status) == 1){
                itemDetails.text2.text = "Paid";
            }
            else if(int.Parse(P.output[i].status) == 2){
                itemDetails.text2.text = "Confirmed";
            }
            else if(int.Parse(P.output[i].status) == 3){
                itemDetails.text2.text = "Declined";
            }
            else{
                itemDetails.text2.text = "Failed";
            }
            
            itemDetails.text3.text = P.output[i].date_created;
                Debug.Log("Request Amount: " + P.output[i].request_amount);
                Debug.Log("Status: " + P.output[i].status);
                Debug.Log("Date Created: " + P.output[i].date_created);
            }
            Debug.Log("Result from www : " + www.text);
            
         }
         else{
            Debug.Log("Error getting data : "+ www.text);
         }
     }
}