using AssemblyCSharp;
using SimpleJSON;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class LeaderboardData : MonoBehaviour
{
    public Text rank;
    public Text coins;
    public Text name;
    public GameObject profileImage;
    public GameObject background;
    public GameObject leaderboardItem;
    public GameObject parentObject;
    public List<Sprite> avatars;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Leaderboardlist());
    }

    public IEnumerator Leaderboardlist()
    {
        string url = StaticStrings.baseURL + "api/player/leaderboard";
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
                Debug.Log("-->" + jsonNode["leaderboard"].Count);
                for(int i=0;i< jsonNode["leaderboard"].Count;i++)
                {
                    GameObject obj = Instantiate(leaderboardItem, parentObject.transform);
                    obj.transform.GetChild(1).GetComponent<Text>().text = (i + 1).ToString();
                    obj.transform.GetChild(3).GetComponent<Text>().text = jsonNode["leaderboard"][i]["username"];
                    obj.transform.GetChild(4).GetComponent<Text>().text = jsonNode["leaderboard"][i]["wincoin"];
                    if(jsonNode["leaderboard"][i]["photo"] == null)
                    obj.transform.GetChild(2).GetComponent<Image>().sprite = avatars[Random.Range(0, avatars.Count-1)];
                    else
                    {
                        string MediaUrl = StaticStrings.baseURL+"storage/Profile"+jsonNode["leaderboard"][i]["photo"];
                        UnityWebRequest request = UnityWebRequestTexture.GetTexture(MediaUrl);
                        yield return request.SendWebRequest();
                        if (request.isNetworkError || request.isHttpError)
                            Debug.Log(request.error);
                        else
                        {
                            Texture2D tex  = ((DownloadHandlerTexture)request.downloadHandler).texture;
                            Sprite sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(tex.width / 2, tex.height / 2));
                            obj.transform.GetChild(2).GetComponent<Image>().overrideSprite = sprite;
                        }
                    }
                }
            }
        }

    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
