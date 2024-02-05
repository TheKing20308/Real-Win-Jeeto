using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.UI;
using ExitGames.Client.Photon.Chat;
using ExitGames.Client.Photon;

public class UpdateActivePlayersFrame : MonoBehaviour
{

    private string currentValue = "Player : 0";
    private Text text;
    // Use this for initialization
    void Start()
    {
        text = GetComponent<Text>();
        InvokeRepeating("CheckAndUpdatePlayersValue", 0.2f, 0.2f);
    }

    private void CheckAndUpdatePlayersValue()
    {
        // if (currentValue != GameManager.Instance.myPlayerData.GetCoins())
        // {
        //     currentValue = GameManager.Instance.myPlayerData.GetCoins();
        //     if (currentValue != 0)
        //     {
        //         text.text = GameManager.Instance.myPlayerData.GetCoins().ToString("0,0", CultureInfo.InvariantCulture).Replace(',', ' ') + " INR";
        //     }
        //     else
        //     {
        //         text.text = "0 INR";
        //     }
        // }
        // Debug.Log("Total count of active player : " +PhotonNetwork.countOfPlayers);
        text.text = "Players : " + PhotonNetwork.countOfPlayers;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
