using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;

using AssemblyCSharp;
using System;
using UnityEngine;

public class MyPlayerData : MonoBehaviour
{

    public static string TitleFirstLoginKey = "TitleFirstLogin";
    public static string TotalEarningsKey = "TotalEarnings";
    public static string GamesPlayedKey = "GamesPlayed";
    public static string TwoPlayerWinsKey = "TwoPlayerWins";
    public static string FourPlayerWinsKey = "FourPlayerWins";
    public static string PlayerName = "PlayerName";
    public static string CoinsKey = "Coins";
    public static string ChatsKey = "Chats";
    public static string EmojiKey = "Emoji";
    public static string AvatarIndexKey = "AvatarIndex";
    public static string FortuneWheelLastFreeKey = "FortuneWheelLastFreeTime";
    public static string ReferCodeKey = "ReferCode";
    public string AvlCoins = "0";
    public string TotalEarnings = "0";
    public string GamesPlayed = "0";
    public string TwoPlayerWins = "0";
    public string FourPlayerWins = "0";
    public string PlayerNames = "";
    public string LastUrl = "";
    public GameObject userUpdated;


    public int GetCoins()
    {

 
         return 0;
    }

    public int GetTotalEarnings()
    {
     //   return int.Parse(this.data[TotalEarningsKey].Value);
        return 0;
    }

    public int GetTwoPlayerWins()
    {
        //       return int.Parse(this.data[TwoPlayerWinsKey].Value);
        return 0;

    }

    public int GetFourPlayerWins()
    {
        //        return int.Parse(this.data[FourPlayerWinsKey].Value);
        return 0;

    }

    public int GetPlayedGamesCount()
    {
        /*        if (this.data != null)
                    return int.Parse(this.data[GamesPlayedKey].Value);
                return -1;
            */
        return 0;

    }

    public string GetAvatarIndex()
    {
        //    return this.data[AvatarIndexKey].Value;
        return "0";

    }
    public string GetReferCode()
    {
        //    return this.data[ReferCodeKey].Value;
        return "0";

    }

    public string GetChats()
    {
        return "0";

//        return this.data[ChatsKey].Value;
    }

    public string GetEmoji()
    {
        /*    if (this.data.ContainsKey(EmojiKey))
                return this.data[EmojiKey].Value;
            else return "error";
        */
        return "0";

    }

    public string GetPlayerName()
    {
        /*
        if (this.data.ContainsKey(PlayerName))
            return this.data[PlayerName].Value;
        else return "Error";
    */
        return " 0" ;

    }

    public string GetLastFortuneTime()
    {
        /*
        if (this.data.ContainsKey(FortuneWheelLastFreeKey))
        {
            return this.data[FortuneWheelLastFreeKey].Value;

        }
        else
        {
            string date = DateTime.Now.Ticks.ToString();
            Dictionary<string, string> data = new Dictionary<string, string>();
            data.Add(FortuneWheelLastFreeKey, date);
            UpdateUserData(data);
            return date;
        }
        */
        return "0";

    }



    public MyPlayerData() { }

    /*
    public MyPlayerData(Dictionary<string, UserDataRecord> data, bool myData)
    {
        this.data = data;


        if (myData)
        {
            if (GetAvatarIndex().Equals("fb"))
            {
                GameManager.Instance.avatarMy = GameManager.Instance.facebookAvatar;
            }
            else
            {
                GameManager.Instance.avatarMy = GameObject.Find("StaticGameVariablesContainer").GetComponent<StaticGameVariablesController>().avatars[int.Parse(GetAvatarIndex())];
            }

            GameManager.Instance.nameMy = GetPlayerName();
        }
        Debug.Log("MY DATA LOADED");

    }

    */

    public void UpdateUserData(Dictionary<string, string> data)
    {
        /*
        if (this.data != null)
            foreach (var item in data)
            {
                Debug.Log("SAVE: " + item.Key);
                if (this.data.ContainsKey(item.Key))
                {
                    Debug.Log("AA");
                    this.data[item.Key].Value = item.Value;
                }
                    if(item.Key == "Coins"){
                        this.AvlCoins = item.Value;
                        // this.LastUrl += "&avl_coins="+AvlCoins;
                        this.LastUrl += "Total Coins : "+this.AvlCoins;
                    }
                    if(item.Key == "TotalEarnings"){
                        this.TotalEarnings = item.Value;
                        this.LastUrl += "&total_earnings="+TotalEarnings;
                    }
                    if(item.Key == "TwoPlayerWins"){
                        this.TwoPlayerWins = item.Value;
                        this.LastUrl += "&two_player_wins="+TwoPlayerWins;
                    }
                    if(item.Key == "FourPlayerWins"){
                        FourPlayerWins = item.Value;
                        this.LastUrl += "&four_player_wins="+FourPlayerWins;
                    }
                    if(item.Key == "PlayerName"){
                        this.PlayerNames = item.Value;
                        this.LastUrl += "&player_name="+PlayerNames;
                    }
                    if(item.Key == "GamesPlayed"){
                        this.GamesPlayed = item.Value;
                        this.LastUrl += "&game_played="+GamesPlayed;
                    }
            }
        UpdateUserDataRequest userDataRequest = new UpdateUserDataRequest()
        {
            Data = data,
            Permission = UserDataPermission.Public
        };

        PlayFabClientAPI.UpdateUserData(userDataRequest, (result1) =>
        {
            Debug.Log("Data updated successfull ");

        }, (error1) =>
        {
            Debug.Log("Data updated error " + error1.ErrorMessage);
        }, null);
            
    }

    IEnumerator updateUser(WWW www)
     {
         yield return www;

         // check for errors
         if (www.error == null)
         {
            Debug.Log("WWW Data updated successfull: " + www.text);// contains all the data sent from the server
         }
         else{
            Debug.Log("WWW Data updated error: " + www.error);// contains all the data sent from the server
         }
     }

    public static Dictionary<string, string> InitialUserData(bool fb)
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data.Add(TotalEarningsKey, "0");
        data.Add(ChatsKey, "");
        data.Add(EmojiKey, "");
        if (fb)
        {
            data.Add(CoinsKey, StaticStrings.initCoinsCountFacebook.ToString());
            data.Add(AvatarIndexKey, "fb");
            // data.Add(InviteCodeKey, "");
        }
        else
        {
            data.Add(CoinsKey, StaticStrings.initCoinsCountGuest.ToString());
            data.Add(AvatarIndexKey, "0");
            // data.Add(InviteCodeKey, "");
        }

        data.Add(GamesPlayedKey, "0");
        data.Add(TwoPlayerWinsKey, "0");
        data.Add(FourPlayerWinsKey, "0");

        data.Add(TitleFirstLoginKey, "1");
        data.Add(FortuneWheelLastFreeKey, DateTime.Now.Ticks.ToString());
        return data;
        */
    }


}