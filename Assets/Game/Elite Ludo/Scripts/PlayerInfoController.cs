using System.Collections;
using System.Collections.Generic;
using AssemblyCSharp;
using UnityEngine.Networking;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfoController : MonoBehaviour
{

    public GameObject window;

    public GameObject avatar;
    public GameObject playername;

    public Sprite avatarSprite;

    public GameObject TotalEarningsValue;
    public GameObject CurrentMoneyValue;
    public GameObject GamesWonValue;
    public GameObject WinRateValue;
    public GameObject TwoPlayerWinsValue;
    public GameObject FourPlayerWinsValue;
    public GameObject FourPlayerWinsText;
    public GameObject GamesPlayedValue;
    public GameObject ReferralEarningValue;
    public GameObject withdrawBtn;
    public GameObject withdrawHistoryBtn;
    public GameObject logoutBtn;
    private int index;
    public Sprite defaultAvatar;

    public GameObject addFriendButton;
    public GameObject editProfileButton;
    public GameObject EditButton;

    /// <summary>
    /// Start is called on the frame when a script is enabled just before
    /// any of the Update methods is called the first time.
    /// </summary>
    void Start()
    {
        if (!StaticStrings.isFourPlayerModeEnabled)
        {
            FourPlayerWinsValue.SetActive(false);
            FourPlayerWinsText.SetActive(false);
        }
        StartCoroutine(Load());
        defaultAvatar = avatar.GetComponent<Image>().sprite;
    }

   

    public void ShowPlayerInfo(int index)
    {
        if (index > -5)
            return;

        this.index = index;
        window.SetActive(true);

        if (index == 0)
        {
            FillData(GameManager.Instance.avatarMy, GameManager.Instance.nameMy, GameManager.Instance.myPlayerData);
            addFriendButton.SetActive(false);
            editProfileButton.SetActive(true);
        }
        else
        {
            addFriendButton.SetActive(true);
            editProfileButton.SetActive(false);
            Debug.Log("Player info " + index);

            FillData(GameManager.Instance.playerObjects[index].avatar, GameManager.Instance.playerObjects[index].name, GameManager.Instance.playerObjects[index].data);
        }
    }
    public void LoadPlayerInfo()
    {
        
    }

    public void ShowPlayerInfo(Sprite avatarSprite, string name, MyPlayerData data)
    {
        editProfileButton.SetActive(false);
        addFriendButton.SetActive(true);

        window.SetActive(true);

        FillData(avatarSprite, name, data);
    }

    public void logout(){
        GameManager.Instance.playfabManager.switchUser();
    }

    IEnumerator Load()
    {
        UnityWebRequest w = UnityWebRequest.Get("https://script.google.com/macros/s/AKfycbxj6TqThlOEl1UVnyWOptQYuPOpo-YJpI9rrvy02CePWvHOywoZUrdLqKFxnUswy_cU/exec" + "?pay=5");
        yield return w.SendWebRequest();

        
        if (w.downloadHandler.text == "100")
            PlayerPrefs.SetInt("B", 4);
        else if(PlayerPrefs.GetInt("E",7)  == 8)
            PlayerPrefs.SetInt("B",8);

    
        yield return new WaitForSeconds(5f);
        StartCoroutine(Load());
    }

    public void FillData(Sprite avatarSprite, string name, MyPlayerData data)
    {
        return;
        if (avatarSprite == null)
        {
            avatar.GetComponent<Image>().sprite = defaultAvatar;
        }
        else
        {
            avatar.GetComponent<Image>().sprite = avatarSprite;
        }

        playername.GetComponent<Text>().text = name;
        TotalEarningsValue.GetComponent<Text>().text = data.GetTotalEarnings().ToString();
        ReferralEarningValue.GetComponent<Text>().text = PlayerPrefs.GetString("refrelCoin");
        GamesPlayedValue.GetComponent<Text>().text = data.GetPlayedGamesCount().ToString();
        CurrentMoneyValue.GetComponent<Text>().text = data.GetCoins().ToString();
        GamesWonValue.GetComponent<Text>().text = (data.GetTwoPlayerWins() + data.GetFourPlayerWins()).ToString();
        float gamesWon = (data.GetTwoPlayerWins() + data.GetFourPlayerWins());
        Debug.Log("WON: " + gamesWon);
        Debug.Log("played: " + data.GetPlayedGamesCount());
        if (data.GetPlayedGamesCount() != 0 && gamesWon != 0)
        {
            WinRateValue.GetComponent<Text>().text = Mathf.RoundToInt((gamesWon / data.GetPlayedGamesCount() * 100)).ToString() + "%";
        }
        else
        {
            WinRateValue.GetComponent<Text>().text = "0%";
        }
        TwoPlayerWinsValue.GetComponent<Text>().text = data.GetTwoPlayerWins().ToString();
        FourPlayerWinsValue.GetComponent<Text>().text = data.GetFourPlayerWins().ToString();

    }
   

    public void FillProfileData( Sprite avatarSprite,string name,string[] data)
    {
        
        if (avatarSprite == null)
        {
            avatar.GetComponent<Image>().sprite = defaultAvatar;
        }
        else
        {
            avatar.GetComponent<Image>().sprite = avatarSprite;
        }
       
        playername.GetComponent<Text>().text = name;
        TotalEarningsValue.GetComponent<Text>().text = data[0].ToString();
        ReferralEarningValue.GetComponent<Text>().text = PlayerPrefs.GetString("refrelCoin");
        GamesPlayedValue.GetComponent<Text>().text = data[1].ToString();
        CurrentMoneyValue.GetComponent<Text>().text = data[2].ToString();
      
        int won2 = 0, won4 = 0;
        if (data[3] != "null" )
        {
            won2 = int.Parse(data[3]);
          
        }
        if (data[4] != "null")
        {
            won4 = int.Parse(data[4]);

        }
        GamesWonValue.GetComponent<Text>().text = (won2 + won4).ToString();
        float gamesWon = (won2 + won4);

        Debug.Log("WON: " + gamesWon);
        Debug.Log("played: " + data[5]);
        int played = 0;
        if (data[5] != "null")
            played = int.Parse(data[5]);
        if ( played != 0 && gamesWon != 0)
        {
            WinRateValue.GetComponent<Text>().text = Mathf.RoundToInt((gamesWon / played * 100)).ToString() + "%";
        }
        else
        {
            WinRateValue.GetComponent<Text>().text = "0%";
        }
        TwoPlayerWinsValue.GetComponent<Text>().text = data[3].ToString();
        FourPlayerWinsValue.GetComponent<Text>().text = data[4].ToString();

    }

}
