using System;
using System.Collections;
using System.Collections.Generic;
using AssemblyCSharp;
//using Facebook.Unity;
using Photon;
using System.Linq;
using UnityEngine;
using SimpleJSON;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
//using AssemblyCSharp;

public class GameGUIController : PunBehaviour
{
    public GameObject PrizeTopBar;
    public Text TimerText;
    public GameObject TIPButtonObject;
    public GameObject TIPObject;
    public GameObject firstPrizeObject;
    public GameObject SecondPrizeObject;
    public GameObject firstPrizeText;
    public GameObject secondPrizeText;
    public GameObject dropdownBtn;
    public int Timer;
    public AudioSource WinSound;
    public AudioSource myTurnSource;
    public AudioSource oppoTurnSource;
    private bool AllPlayersReady = false;
    // LUDO
    public MultiDimensionalGameObject[] PlayersPawns;
    public GameObject[] PlayersDices;
    public GameObject[] HomeLockObjects;


    [System.Serializable]
    public class MultiDimensionalGameObject
    {
        public GameObject[] objectsArray;
    }

    public GameObject ludoBoard;
    public GameObject[] diceBackgrounds;
    public MultiDimensionalGameObject[] playersPawnsColors;
    public MultiDimensionalGameObject[] playersPawnsMultiple;
    private Color colorRed = new Color(250.0f / 255.0f, 12.0f / 255, 12.0f / 255);
    private Color colorBlue = new Color(0, 86.0f / 255, 255.0f / 255);
    private Color colorYellow = new Color(255.0f / 255.0f, 163.0f / 255, 0);
    private Color colorGreen = new Color(8.0f / 255, 174.0f / 255, 30.0f / 255);


    // END LUDO

    public GameObject GameFinishWindow;
    public GameObject ScreenShotController;
    public GameObject invitiationDialog;
    public GameObject addedFriendWindow;
    public PhotonView photonView;
    public GameObject PlayerInfoWindow;
    public GameObject ChatWindow;
    public GameObject ChatButton;
    private bool SecondPlayerOnDiagonal = true;

    private List<string> PlayersIDs;
    public GameObject[] Players;
    public GameObject[] PlayersTimers;
    public GameObject[] PlayersChatBubbles;
    public GameObject[] PlayersChatBubblesText;
    public GameObject[] PlayersChatBubblesImage;
    private GameObject[] ActivePlayers;
    public GameObject[] PlayersAvatarsButton;

    private List<Sprite> avatars;
    private List<string> names;

    public List<PlayerObject> playerObjects;
    public int myIndex;
    public int otherindex;
    private string myId;


    private Color[] borderColors = new Color[4] {
        Color.yellow, Color.green, Color.red, Color.blue
    };

    private int currentPlayerIndex;

    public int ActivePlayersInRoom;

    private Sprite[] emojiSprites;

    private string CurrentPlayerID;
    public string url;

    public List<PlayerObject> playersFinished = new List<PlayerObject>();


    private bool iFinished = false;
    private bool FinishWindowActive = false;

    private int firstPlacePrize;
    private int secondPlacePrize;

    public int requiredToStart = 0;

    public Font f;

    // Use this for initialization
    void Start()
    {
        requiredToStart = GameManager.Instance.requiredPlayers;
        GameManager.Instance.dropdownButton = dropdownBtn;
        photonView = GetComponent<PhotonView>();
        if (GameManager.Instance.type == MyGameType.Private)
        {
            requiredToStart = 2;
        }
        Text[] fonts = FindObjectsOfType<Text>();
        for (int i = 0; i < fonts.Length; i++)
            fonts[i].font = f;
        PhotonNetwork.RaiseEvent((int)EnumPhoton.ReadyToPlay, 0, true, null);


        int rotation = UnityEngine.Random.Range(0, 4);
        Timer = 480;
        string min = ((int)(Timer / 60)).ToString();
        string sec = ((int)(Timer % 60)).ToString();
        if (min.Length == 1)
            min = "0" + min;
        if (sec.Length == 1)
            sec = "0" + sec;
        TimerText.text = min + " : " + sec;

        WonApicalled = false;

        currentPlayerIndex = 0;
        emojiSprites = GameObject.Find("StaticGameVariablesContainer").GetComponent<StaticGameVariablesController>().emoji;
        myId = GameManager.Instance.playfabManager.PlayFabId;

        if ((GameManager.Instance.isLocalMultiplayer && GameManager.Instance.isPlayingWithComputer) || GameManager.Instance.isLocalPLay)
        {
            PrizeTopBar.SetActive(false);
            requiredToStart = 0;
            PlayerPrefs.SetInt("EN", 0);
            Proceed();

        }
        FinishedGamee = false;


        if (PhotonNetwork.isMasterClient)
        {

            photonView.RPC("SyncNames", PhotonTargets.OthersBuffered, GameManager.Instance.opponentsNames[0], GameManager.Instance.opponentsNames[1], GameManager.Instance.opponentsNames[2], GameManager.Instance.opponentsAvatarsIndex[0], GameManager.Instance.opponentsAvatarsIndex[1], GameManager.Instance.opponentsAvatarsIndex[2]);
            Proceed();
        }

        GameManager.Instance.Historycalled = false;

    }


    [PunRPC]
    public void SyncNames(string name1, string name2, string name3, int b1, int b2, int b3)
    {
        if (!PhotonNetwork.isMasterClient)
        {
            if (GameManager.Instance.opponentsIDs[0] != null && GameManager.Instance.opponentsIDs[0].Contains("BOT"))
            {
                GameManager.Instance.opponentsNames[0] = name1;
                GameManager.Instance.opponentsAvatars[0] = FindObjectOfType<StaticGameVariablesController>().avatars[b1];
            }
            if (GameManager.Instance.opponentsIDs[1] != null && GameManager.Instance.opponentsIDs[1].Contains("BOT"))
            {
                GameManager.Instance.opponentsNames[1] = name2;
                GameManager.Instance.opponentsAvatars[1] = FindObjectOfType<StaticGameVariablesController>().avatars[b2];
            }
            if (GameManager.Instance.opponentsIDs[2] != null && GameManager.Instance.opponentsIDs[2].Contains("BOT"))
            {
                GameManager.Instance.opponentsNames[2] = name3;
                GameManager.Instance.opponentsAvatars[2] = FindObjectOfType<StaticGameVariablesController>().avatars[b3];
            }
            Proceed();
        }
    }


    private void Proceed()
    {
        names = new List<string>() {
            null, null, null, null
        };

        names.Insert(0, GameManager.Instance.nameMy);
        if (GameManager.Instance.opponentsNames[0] != null)
            names.Insert(1, GameManager.Instance.opponentsNames[0]);
        if (GameManager.Instance.opponentsNames[1] != null)
            names.Insert(2, GameManager.Instance.opponentsNames[1]);
        if (GameManager.Instance.opponentsNames[2] != null)
            names.Insert(3, GameManager.Instance.opponentsNames[2]);

        playerObjects = new List<PlayerObject>();
        avatars = new List<Sprite>() {
            null, null, null, null
        };
        avatars.Insert(0, GameManager.Instance.avatarMy);
        if (GameManager.Instance.opponentsAvatars[0] != null)

            avatars.Insert(1, GameManager.Instance.opponentsAvatars[0]);
        if (GameManager.Instance.opponentsAvatars[1] != null)

            avatars.Insert(2, GameManager.Instance.opponentsAvatars[1]);
        if (GameManager.Instance.opponentsAvatars[2] != null)

            avatars.Insert(3, GameManager.Instance.opponentsAvatars[2]);

        PlayersIDs = new List<string>();
        for (int i = 0; i < GameManager.Instance.opponentsIDs.Count; i++)
        {
            if (GameManager.Instance.opponentsIDs[i] != null)
            {
                PlayersIDs.Add(GameManager.Instance.opponentsIDs[i]);
            }
        }

        PlayersIDs.Insert(0, GameManager.Instance.playfabManager.PlayFabId);

        for (int i = 0; i < PlayersIDs.Count; i++)
        {
            playerObjects.Add(new PlayerObject(names[i], PlayersIDs[i], avatars[i]));
            Debug.Log("  " + names[i].ToString() + " " + PlayersIDs[i] + "  " + avatars[i]);
        }

        // Bubble sort
        for (int i = 0; i < PlayersIDs.Count; i++)
        {
            for (int j = 0; j < PlayersIDs.Count - 1; j++)
            {
                if (string.Compare(playerObjects[j].id, playerObjects[j + 1].id) == 1)
                {
                    // swaap ids
                    (playerObjects[j + 1], playerObjects[j]) = (playerObjects[j], playerObjects[j + 1]);
                }
            }
        }

        for (int i = 0; i < PlayersIDs.Count; i++)
        {
            Debug.Log(playerObjects[i].id);
        }

        ActivePlayersInRoom = PlayersIDs.Count;

        if (PlayersIDs.Count == 2)
        {
            if (SecondPlayerOnDiagonal)
            {
                Players[1].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);
                Players[1].SetActive(false);
                Players[3].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);

                Players[3].SetActive(false);
                ActivePlayers = new GameObject[2];
                ActivePlayers[0] = Players[0];
                ActivePlayers[1] = Players[2];

                // LUDO
                for (int i = 0; i < PlayersPawns[1].objectsArray.Length; i++)
                {
                    PlayersPawns[1].objectsArray[i].SetActive(false);
                }


                for (int i = 0; i < PlayersPawns[3].objectsArray.Length; i++)
                {
                    PlayersPawns[3].objectsArray[i].SetActive(false);
                }

                // END LUDO
            }
            else
            {

                // LUDO
                for (int i = 0; i < PlayersPawns[21].objectsArray.Length; i++)
                {
                    PlayersPawns[2].objectsArray[i].SetActive(false);
                }

                for (int i = 0; i < PlayersPawns[3].objectsArray.Length; i++)
                {
                    PlayersPawns[3].objectsArray[i].SetActive(false);
                }

                // END LUDO
                Players[2].SetActive(false);
                Players[3].SetActive(false);
                ActivePlayers = new GameObject[2];
                ActivePlayers[0] = Players[0];
                ActivePlayers[1] = Players[1];
            }
        }
        else
        {
            ActivePlayers = Players;
        }

        StartCoroutine(JoinFees());

        int startPos = 0;
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id == GameManager.Instance.playfabManager.PlayFabId)
            {
                startPos = i;
                break;
            }
        }
        int index = 0;
        bool addedMe = false;
        myIndex = startPos;
        GameManager.Instance.myPlayerIndex = myIndex;


        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id != PlayerPrefs.GetString("PID"))
            {
                otherindex = i;
                break;
            }
        }


        for (int i = startPos;;)
        {
            if (i == startPos && addedMe) break;

            if (PlayersIDs.Count == 2 && SecondPlayerOnDiagonal)
            {
                if (addedMe)
                {
                    playerObjects[i].timer = PlayersTimers[2];
                    playerObjects[i].ChatBubble = PlayersChatBubbles[2];
                    playerObjects[i].ChatBubbleText = PlayersChatBubblesText[2];
                    playerObjects[i].ChatbubbleImage = PlayersChatBubblesImage[2];
                    string id = playerObjects[i].id;
                    PlayersAvatarsButton[2].GetComponent<Button>().onClick.RemoveAllListeners();
                    PlayersAvatarsButton[2].GetComponent<Button>().onClick.AddListener(() => ButtonClick(id));

                    // LUDO
                    playerObjects[i].dice = PlayersDices[2];
                    playerObjects[i].pawns = PlayersPawns[2].objectsArray;

                    for (int k = 0; k < playerObjects[i].pawns.Length; k++)
                    {
                        playerObjects[i].pawns[k].GetComponent<LudoPawnController>().setPlayerIndex(i);
                    }
                    playerObjects[i].homeLockObjects = HomeLockObjects[2];

                    // END LUDO
                }
                else
                {
                    GameManager.Instance.myPlayerIndex = i;
                    playerObjects[i].timer = PlayersTimers[index];
                    playerObjects[i].ChatBubble = PlayersChatBubbles[index];
                    playerObjects[i].ChatBubbleText = PlayersChatBubblesText[index];
                    playerObjects[i].ChatbubbleImage = PlayersChatBubblesImage[index];
                    string id = playerObjects[i].id;

                    // LUDO
                    playerObjects[i].dice = PlayersDices[index];
                    playerObjects[i].pawns = PlayersPawns[index].objectsArray;

                    for (int k = 0; k < playerObjects[i].pawns.Length; k++)
                    {
                        playerObjects[i].pawns[k].GetComponent<LudoPawnController>().setPlayerIndex(i);
                    }
                    playerObjects[i].homeLockObjects = HomeLockObjects[index];
                    // END LUDO
                }
            }
            else
            {

                playerObjects[i].timer = PlayersTimers[index];
                playerObjects[i].ChatBubble = PlayersChatBubbles[index];
                playerObjects[i].ChatBubbleText = PlayersChatBubblesText[index];
                playerObjects[i].ChatbubbleImage = PlayersChatBubblesImage[index];

                // LUDO
                playerObjects[i].dice = PlayersDices[index];
                playerObjects[i].pawns = PlayersPawns[index].objectsArray;

                for (int k = 0; k < playerObjects[i].pawns.Length; k++)
                {
                    playerObjects[i].pawns[k].GetComponent<LudoPawnController>().setPlayerIndex(i);
                }
                playerObjects[i].homeLockObjects = HomeLockObjects[index];
                // END LUDO

                string id = playerObjects[i].id;
                if (index != 0)
                {
                    PlayersAvatarsButton[index].GetComponent<Button>().onClick.RemoveAllListeners();
                    PlayersAvatarsButton[index].GetComponent<Button>().onClick.AddListener(() => ButtonClick(id));
                }

            }




            playerObjects[i].AvatarObject = ActivePlayers[index];
            ActivePlayers[index].GetComponent<PlayerAvatarController>().Name.GetComponent<Text>().text = playerObjects[i].name;
            if (playerObjects[i].avatar != null)
            {
                ActivePlayers[index].GetComponent<PlayerAvatarController>().Avatar.GetComponent<Image>().sprite = playerObjects[i].avatar;
            }

            index++;

            if (i < PlayersIDs.Count - 1)
            {
                i++;
            }
            else
            {
                i = 0;
            }

            addedMe = true;
        }

        currentPlayerIndex = GameManager.Instance.firstPlayerInGame;
        GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];






        GameManager.Instance.playerObjects = playerObjects;


        int payoutCommision = 100 - (int)PlayerPrefs.GetFloat("Comm");
        Debug.Log("Payout Commision is : " + payoutCommision);
        if (ActivePlayersInRoom == 2)
        {
            firstPlacePrize = 2 * (payoutCommision * GameManager.Instance.payoutCoins / 100);
            secondPlacePrize = 0;
        }
        else if (ActivePlayersInRoom == 3)
        {
            firstPlacePrize = 2 * (payoutCommision * GameManager.Instance.payoutCoins / 100);
            secondPlacePrize = GameManager.Instance.payoutCoins;
        }
        else if (ActivePlayersInRoom == 4)
        {
            firstPlacePrize = 3 * (payoutCommision * GameManager.Instance.payoutCoins / 100);
            secondPlacePrize = GameManager.Instance.payoutCoins;
        }
        else
        {
            firstPlacePrize = GameManager.Instance.payoutCoins;
        }

        firstPrizeText.GetComponent<Text>().text = firstPlacePrize + " INR";
        secondPrizeText.GetComponent<Text>().text = secondPlacePrize + " INR";

        if (secondPlacePrize == 0)
        {
            SecondPrizeObject.SetActive(false);
            //  firstPrizeObject.GetComponent<RectTransform>().anchoredPosition = SecondPrizeObject.GetComponent<RectTransform>().anchoredPosition;
        }


        // LUDO

        // Enable home locks

        if (GameManager.Instance.mode == MyGameMode.Quick || GameManager.Instance.mode == MyGameMode.Master)
        {
            for (int i = 0; i < GameManager.Instance.playerObjects.Count; i++)
            {
                GameManager.Instance.playerObjects[i].homeLockObjects.SetActive(true);
            }
            GameManager.Instance.needToKillOpponentToEnterHome = true;
        }
        else
        {
            GameManager.Instance.needToKillOpponentToEnterHome = false;
        }
        //GameManager.Instance.needToKillOpponentToEnterHome = false;

        // END LUDO

        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id.Contains("_BOT"))
            {
                playerObjects[i].pawns[0].GetComponent<LudoPawnController>().isBot = true;
                playerObjects[i].pawns[1].GetComponent<LudoPawnController>().isBot = true;

                playerObjects[i].pawns[2].GetComponent<LudoPawnController>().isBot = true;
                playerObjects[i].pawns[3].GetComponent<LudoPawnController>().isBot = true;

                GameManager.Instance.readyPlayersCount++;
            }
        }

        GameManager.Instance.playerObjects = playerObjects;
        if (!GameManager.Instance.isLocalPLay)
        {
            // Check if all players are still in room - if not deactivate
            for (int i = 0; i < playerObjects.Count; i++)
            {
                bool contains = false;
                if (!playerObjects[i].id.Contains("_BOT"))
                {
                    for (int j = 0; j < PhotonNetwork.playerList.Length; j++)
                    {
                        if (PhotonNetwork.playerList[j].NickName.Split('|')[1].Equals(playerObjects[i].id))
                        {
                            contains = true;
                            break;
                        }
                    }

                    if (!contains)
                    {
                        GameManager.Instance.readyPlayersCount++;
                        Debug.Log("Ready players: " + GameManager.Instance.readyPlayersCount);
                        //      setPlayerDisconnected(i);
                    }
                }
            }
        }
        TimerText.transform.parent.gameObject.SetActive(false);

        if (!GameManager.Instance.offlineMode && !GameManager.Instance.isLocalMultiplayer && !GameManager.Instance.isLocalPLay)

        {
            TimerText.transform.parent.gameObject.SetActive(true);

            Invoke("Clock", 1.0f);
        }
        else
        {
            Players[0].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);
            Players[1].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);
            Players[2].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);
            Players[3].GetComponent<PlayerAvatarController>().ScoreText.gameObject.SetActive(false);

        }
        CheckPlayersIfShouldFinishGame(true);

        StartCoroutine(waitForPlayersToStart());
    }
    void Clock()
    {
        if (GameManager.Instance.offlineMode || GameManager.Instance.isLocalMultiplayer || GameManager.Instance.isLocalPLay || FinishWindowActive)
        {

            return;
        }

        Timer--;
        string min = ((int)(Timer / 60)).ToString();
        string sec = ((int)(Timer % 60)).ToString();
        if (min.Length == 1)
            min = "0" + min;
        if (sec.Length == 1)
            sec = "0" + sec;

        TimerText.text = min + " : " + sec;
        if (Timer == 0)
        {
            StopTimers();
            GameOver();
        }
        if (Timer > 0)
            Invoke("Clock", 1.0f);

        if (PhotonNetwork.isMasterClient && Timer % 5 == 0)
        {
            photonView.RPC("SynClock", PhotonTargets.Others, Timer);
        }
    }



    [PunRPC]
    private void SynClock(int ttimer)
    {
        Timer = ttimer;
    }


    public void GameOver()
    {
        int[] scores = {
            0, 0, 0, 0
        };
        for (int i = 0; i < playerObjects.Count; i++)
        {

            scores[i] = playerObjects[i].pawns[0].GetComponent<LudoPawnController>().PAC.Score;
        }


        int maxValue = scores.Max();
        int maxIndex = scores.ToList().IndexOf(maxValue);
        if (PhotonNetwork.player.NickName.Split('|')[1] == playerObjects[maxIndex].id)
            SetFinishGame(playerObjects[maxIndex].id, true);
        else
            SetFinishGame(playerObjects[maxIndex].id, false);

        ShowGameFinishWindow();
    }

    private bool WasInBG = false;
    private bool AllowRejoin = false;
    private DateTime leavetime;

    public void OnApplicationPause(bool pause)
    {
        if (pause)
        {
            //   print("Left");
            WasInBG = true;
            // PhotonNetwork.BackgroundTimeout = 240;
            AllowRejoin = true;
            leavetime = DateTime.Now;
            //  PhotonNetwork.room.IsOpen = true;


        }
        else
        {

            //  if(!GameManager.Instance.isLocalPLay && !GameManager.Instance.isPlayingWithComputer)
            //     Invoke("CheckPlayers", 2.0f);

            if ((int)(DateTime.Now - leavetime).TotalSeconds >= 60 || (!PhotonNetwork.inRoom))
            {

                LostGame();

                return;
            }

            if (AllowRejoin)
            {
                //  print("Joinnn");
                Rejoin();


            }







        }
    }

    void CheckPlayers()
    {
        /*  if (GameManager.Instance.isLocalPLay || GameManager.Instance.isPlayingWithComputer)
              return;
  
          if (PhotonNetwork.room.PlayerCount == 1 && !GameManager.Instance.Online_Bot_Mode)
          {
              if (ILoss)
                  LostGame();
              else
                  WonGame();
  
  
          }
  
          Invoke("CheckPlayers", 2.0f);*/
    }

    private void Rejoin()
    {
        AllowRejoin = false;
        if (!GameManager.Instance.isLocalPLay && !GameManager.Instance.isPlayingWithComputer)
            Sy();
        //   if (PhotonNetwork.insideLobby)
        ////   {
        //       if (!PhotonNetwork.inRoom)
        //          PhotonNetwork.JoinRoom(roomNaMe);
        ////      else
        //        {
        // Sy();
        //     }
        //    }
        //   else
        //    {
        //  PhotonNetwork.JoinLobby();
        //    }

    }


    private void Sy()
    {
        if (GameManager.Instance.isLocalPLay || GameManager.Instance.isLocalMultiplayer)
            return;
        if (WasInBG)
            photonView.RPC("TellServerToSync", PhotonTargets.Others);
        WasInBG = false;

    }

    private void SYN()
    {
        if (GameManager.Instance.isLocalPLay || GameManager.Instance.isLocalMultiplayer)
            return;

        if (!WasInBG)
        {
            //SetTurn();
            //   print("Firing RPC");

            string pawnposes = "";
            for (int i = 0; i < 8; i++)
            {
                if (i == 0)
                    pawnposes = FindObjectOfType<Sync>().Pawns[i].GetComponent<LudoPawnController>().currentPosition.ToString();
                else
                    pawnposes += "|" + FindObjectOfType<Sync>().Pawns[i].GetComponent<LudoPawnController>().currentPosition.ToString();

            }
            string t = "";
            t = PlayersTimers[0].GetComponent<UpdatePlayerTimer>().timer.fillAmount + "|" + PlayersTimers[2].GetComponent<UpdatePlayerTimer>().timer.fillAmount;
            string one = "";

            if (GameManager.Instance.isMyTurn)
            {
                one = "1"; //setCurrentPlayerIndex(otherindex);
            }
            else
            {
                one = "2"; //setCurrentPlayerIndex(myIndex);
            }
            int y = Players[0].GetComponent<PlayerAvatarController>().skipsCOunt;
            int x = Players[2].GetComponent<PlayerAvatarController>().skipsCOunt;

            photonView.RPC("SyncPos", PhotonTargets.Others, t, one, y.ToString() + "|" + x.ToString());
        }
    }

    [PunRPC]
    void TellServerToSync()
    {
        if (!WasInBG)
        {
            SYN();
        }
    }

    [PunRPC]
    void SyncPos(string timers, string o, string sk)
    {
        //  print("RPC");
        FindObjectOfType<Sync>().PawnPos(timers, o, sk);
    }
    public override void OnPhotonJoinRoomFailed(object[] codeAndMsg)
    {
        //print(codeAndMsg.ToString()   +  "   " + codeAndMsg[1].ToString());
    }
    public void LostGame()
    {

        StopTimers();
        // SetFinishGame(PhotonNetwork.player.NickName.Split('|')[1], false);
        ShowGameFinishWindow();
        /*     if (PhotonNetwork.inRoom)
                 PhotonNetwork.LeaveRoom();*/
        // CheckPlayersIfShouldFinishGame();

    }

    public void WonGame()
    {
        iFinished = false;
        StopAndFinishGame(true);

    }

    IEnumerator updateUserGame(WWW www)
    {
        yield return www;
        /*
         // check for errors
         if (www.error == null)
         {
            Debug.Log("WWW Result!: " + www.text);// contains all the data sent from the server
         }
         else{
            Debug.Log("WWW Failed!: " + www.text);// contains all the data sent from the server
         }
        */
    }

    private IEnumerator JoinFees()
    {

        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID", ""));
        form.AddField("bidamount", PlayerPrefs.GetInt("EN", 0).ToString());
        Debug.Log("Bud amount" + PlayerPrefs.GetInt("EN", 0));
        string url = StaticStrings.baseURL + "api/join/game";
        Debug.Log(url);
        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();
            Debug.Log(handshake.downloadHandler.text); // there ?

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log(handshake.error.ToString());
            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);
                if (jsonNode["notice"] == "Coin Updated")
                {
                    Debug.Log("Entry Charged !");
                    PlayerPrefs.SetInt("Coins", int.Parse(jsonNode["totalcoin"].Value));

                }
            }
        }
    }

    private IEnumerator waitForPlayersToStart()
    {

        yield return new WaitForSeconds(0.1f);


        if (GameManager.Instance.readyPlayersCount < requiredToStart)
        {
            StartCoroutine(waitForPlayersToStart());
        }
        else
        {
            AllPlayersReady = true;
            SetTurn();

            // if (myIndex == 0)
            // {
            //     SetMyTurn();
            //     playerObjects[0].dice.GetComponent<GameDiceController>().DisableDiceShadow();
            // }
            // else
            // {
            //     SetOpponentTurn();
            //     playerObjects[currentPlayerIndex].dice.GetComponent<GameDiceController>().DisableDiceShadow();
            // }

        }


    }

    public int GetCurrentPlayerIndex()
    {
        return currentPlayerIndex;
    }

    public void TIPButton()
    {
        if (TIPObject.activeSelf)
        {
            TIPObject.SetActive(false);
        }
        else
        {
            TIPObject.SetActive(true);
        }
    }

    public void FacebookShare()
    {
        if (PlayerPrefs.GetString("LoggedType").Equals("Facebook"))
        {

            Uri myUri = new Uri("https://ludoone.com/ludo.apk");
#if UNITY_IPHONE
            myUri = new Uri("https://itunes.apple.com/us/app/apple-store/id" + StaticStrings.ITunesAppID);
#endif

            /*    FB.ShareLink(
                    myUri,
                    StaticStrings.facebookShareLinkTitle,
                    callback: ShareCallback
                );*/
        }
    }
    /*
    private void ShareCallback(IShareResult result)
    {
        if (result.Cancelled || !String.IsNullOrEmpty(result.Error))
        {
            Debug.Log("ShareLink Error: " + result.Error);
        }
        else if (!String.IsNullOrEmpty(result.PostId))
        {
            // Print post identifier of the shared content
            Debug.Log(result.PostId);
        }
        else
        {
            // Share succeeded without postID
            GameManager.Instance.playfabManager.addCoinsRequest(StaticStrings.rewardCoinsForShareViaFacebook);
            Debug.Log("ShareLink success!");
        }
    }
    */
    public void StopAndFinishGame(bool won)
    {
        StopTimers();
        if (won)
            SetFinishGame(PhotonNetwork.player.NickName.Split('|')[1], true);
        else
            SetFinishGame(PhotonNetwork.player.NickName.Split('|')[1], false);

        ShowGameFinishWindow();
    }

    public void ShareScreenShot()
    {

#if UNITY_ANDROID
        string text = StaticStrings.ShareScreenShotText;
        text = text + " " + StaticStrings.baseURL + StaticStrings.AndroidPackageName;
        ScreenShotController.GetComponent<NativeShare>().ShareScreenshotWithText(text);
#elif UNITY_IOS
        string text = StaticStrings.ShareScreenShotText;
        text = text + " " + "https://itunes.apple.com/us/app/apple-store/id" + StaticStrings.ITunesAppID;
        ScreenShotController.GetComponent<NativeShare>().ShareScreenshotWithText(text);
#endif


    }

    public void ShowGameFinishWindow()
    {

        if (!FinishWindowActive)
        {

            //AdsManager.Instance.adsScript.ShowAd(AdLocation.GameFinishWindow);
            FinishWindowActive = true;

            List<PlayerObject> otherPlayers = new List<PlayerObject>();

            for (int i = 0; i < playerObjects.Count; i++)
            {
                PlayerAvatarController controller = playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>();
                if (controller.Active && !controller.finished)
                {
                    otherPlayers.Add(playerObjects[i]);
                }
            }
            // GameManager.Instance.initMenuScript.PlayBackgroundMusic();

            GameFinishWindow.GetComponent<GameFinishWindowController>().showWindow(playersFinished, otherPlayers, firstPlacePrize, secondPlacePrize, playerObjects);
        }
    }

    private void ButtonClick(string id)
    {

        int index = 0;

        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id == id)
            {
                index = i;
                break;
            }
        }

        CurrentPlayerID = id;

        if (playerObjects[index].AvatarObject.GetComponent<PlayerAvatarController>().Active)
        {
            PlayerInfoWindow.GetComponent<PlayerInfoController>().ShowPlayerInfo(playerObjects[index].avatar, playerObjects[index].name, playerObjects[index].data);
        }

    }

    public void AddFriendButtonClick()
    {
        if (!CurrentPlayerID.Contains("_BOT"))
        {
            /*
            AddFriendRequest request = new AddFriendRequest()
            {
                FriendPlayFabId = CurrentPlayerID,
            };

            PlayFabClientAPI.AddFriend(request, (result) =>
            {
                PhotonNetwork.RaiseEvent((int)EnumPhoton.AddFriend, PhotonNetwork.playerName + ";" + GameManager.Instance.nameMy + ";" + CurrentPlayerID, true, null);
                addedFriendWindow.SetActive(true);
                Debug.Log("Added friend successfully");
            }, (error) =>
            {
                addedFriendWindow.SetActive(true);
                Debug.Log("Error adding friend: " + error.Error);
            }, null);
        }
        else
        {
            Debug.Log("Add Friend - It's bot!");
            addedFriendWindow.SetActive(true);
        }*/
        }
    }


    public void FinishedGame()
    {
        if (GameManager.Instance.currentPlayer.id == PhotonNetwork.player.NickName.Split('|')[1])
        {
            SetFinishGame(GameManager.Instance.currentPlayer.id, true);
        }
        else
        {
            SetFinishGame(GameManager.Instance.currentPlayer.id, false);
        }

        // SetFinishGame(PhotonNetwork.player.NickName, true);
    }
    private string Wintype = "twoplayerwin";
    private bool FinishedGamee = false;
    private void SetFinishGame(string id, bool me)
    {
        if (FinishedGamee)
            return;

        FinishedGamee = true;
        Debug.Log("id====" + id + "me=====" + me);

        if (!me || !iFinished)
        {
            Debug.Log("SET FINISH" + me);
            ActivePlayersInRoom--;

            int index = GetPlayerPosition(id);


            if (index == -1)
                index = 0;
            playersFinished.Add(playerObjects[index]);


            PlayerAvatarController controller = playerObjects[index].AvatarObject.GetComponent<PlayerAvatarController>();
            controller.Name.GetComponent<Text>().text = "";
            controller.Active = false;
            controller.finished = true;

            playerObjects[index].dice.SetActive(false);

            int position = playersFinished.Count;
            if (position == 1)
            {
                controller.Crown.SetActive(true);
            }

            if (me)
            {
                PhotonNetwork.BackgroundTimeout = StaticStrings.photonDisconnectTimeoutLong;
                iFinished = true;
                if (ActivePlayersInRoom >= 0)
                {
                    PhotonNetwork.RaiseEvent((int)EnumPhoton.FinishedGame, PhotonNetwork.player.NickName.Split('|')[1], true, null);
                    Debug.Log("set finish call finish turn");
                    SendFinishTurn();
                }


                Debug.Log("--pos->" + position);

                if (position == 1)
                {
                    WinSound.Play();
                    Debug.Log("-type-->" + GameManager.Instance.type);
                    if (GameManager.Instance.type == MyGameType.TwoPlayer)
                    {
                        //    data.Add(MyPlayerData.TwoPlayerWinsKey, (GameManager.Instance.myPlayerData.GetTwoPlayerWins() + 1).ToString());
                        //    url = StaticStrings.baseURL+"update-games-win.php?playfab_id="+GameManager.Instance.playfabManager.PlayFabId+"&avl_coins="+data[MyPlayerData.CoinsKey]+"&total_earning="+data[MyPlayerData.TotalEarningsKey]+"&two_player_wins="+data[MyPlayerData.TwoPlayerWinsKey]+"&four_player_wins="+"&win_amount="+firstPlacePrize.ToString();
                        Wintype = "twoplayerwin";
                        StartCoroutine(WinAmount(firstPlacePrize, true));

                    }
                    else if (GameManager.Instance.type == MyGameType.FourPlayer)
                    {
                        //         data.Add(MyPlayerData.FourPlayerWinsKey, (GameManager.Instance.myPlayerData.GetFourPlayerWins() + 1).ToString());
                        //     url = StaticStrings.baseURL+"update-games-win.php?playfab_id="+GameManager.Instance.playfabManager.PlayFabId+"&avl_coins="+data[MyPlayerData.CoinsKey]+"&total_earning="+data[MyPlayerData.TotalEarningsKey]+"&two_player_wins=&four_player_wins="+data[MyPlayerData.FourPlayerWinsKey]+"&win_amount="+firstPlacePrize.ToString();
                        Wintype = "fourplayerwin";
                        StartCoroutine(WinAmount(firstPlacePrize, true));
                    }
                    else if (GameManager.Instance.type == MyGameType.Private)
                    {
                        Wintype = "Private";
                        StartCoroutine(WinAmount(firstPlacePrize, true));
                    }
                    //       GameManager.Instance.myPlayerData.UpdateUserData(data);

                    //call api to update game played
                    // string url = "https://ludowire.com/admin/update-games-win.php?playfab_id="+GameManager.Instance.playfabManager.PlayFabId+"&avl_coins="+data[MyPlayerData.CoinsKey]+"&total_earning="+data[MyPlayerData.TotalEarningsKey]+"&two_player_wins="+data[myPlayerData.TwoPlayerWinsKey]+"&four_player_wins="+data[MyPlayerData.FourPlayerWinsKey];

                }
                else if (position == 2 && GameManager.Instance.type == MyGameType.FourPlayer)
                {


                    StartCoroutine(WinAmount(secondPlacePrize, true));
                    //call api to update game played

                }
            }
            else if (GameManager.Instance.currentPlayer.isBot)
            {
                SendFinishTurn();
            }
            controller.setPositionSprite(position);
            CheckPlayersIfShouldFinishGame(false);
        }
    }
    private IEnumerator WinAmount(int win, bool status)
    {
        WonApicalled = false;
        string entrycoin = GameManager.Instance.payoutCoins.ToString();
        string wincoin = Mathf.Abs(win - GameManager.Instance.payoutCoins).ToString();
        Debug.Log("total win--->" + win);
        Debug.Log("winamount-->" + (Mathf.Abs(win - GameManager.Instance.payoutCoins)).ToString());
        Debug.Log("entrycoin-->" + GameManager.Instance.payoutCoins.ToString());
        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID", ""));
        form.AddField("entrycoin", entrycoin);
        form.AddField("winamount", wincoin);
        form.AddField("status", "win");
        form.AddField("wintype", Wintype);

        string url = StaticStrings.baseURL + "api/gameplay/status";

        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();
            Debug.Log(handshake.downloadHandler.text);

            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                print("Error");

            }
            else
            {
                JSONNode jsonNode = JSON.Parse(handshake.downloadHandler.text);
                if (jsonNode["notice"] == "User Win Status Update")
                {
                    Debug.Log("Won Amount added !");
                    PlayerPrefs.SetInt("Coins", int.Parse(jsonNode["totalcoin"].Value));
                    WonApicalled = true;
                }
            }
        }
    }

    public bool WonApicalled = false;

    public int GetPlayerPosition(string id)
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id.Equals(id))
            {
                return i;
            }
        }
        return -1;
    }

    public void SendFinishTurn()
    {
        if (!FinishWindowActive && ActivePlayersInRoom > 1)
        {
            if (GameManager.Instance.currentPlayer.isBot)
            {
                BotDelay();
            }
            else
            {
                PhotonNetwork.RaiseEvent((int)EnumPhoton.NextPlayerTurn, myIndex, true, null);

                //currentPlayerIndex = (myIndex + 1) % playerObjects.Count;

                Debug.Log("PLAYER BEFORE: " + currentPlayerIndex);

                setCurrentPlayerIndex(myIndex);

                Debug.Log("PLAYER AFTER: " + currentPlayerIndex + " isbot: " + GameManager.Instance.currentPlayer.isBot);

                SetTurn();
                //SetOpponentTurn();

                GameManager.Instance.miniGame.setOpponentTurn();
            }
        }
    }


    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    void Awake()
    {
        PhotonNetwork.OnEventCall += this.OnEvent;
    }


    void OnDestroy()
    {
        PhotonNetwork.OnEventCall -= this.OnEvent;
    }

    private void OnEvent(byte eventcode, object content, int senderid)
    {
        Debug.Log("received event:========> " + eventcode);
        if (eventcode == (int)EnumPhoton.NextPlayerTurn)
        {
            if (playerObjects[(int)content].AvatarObject.GetComponent<PlayerAvatarController>().Active &&
                currentPlayerIndex == (int)content)
            {
                if (!FinishWindowActive)
                {
                    setCurrentPlayerIndex((int)content);

                    SetTurn();
                }
            }
        }
        else if (eventcode == (int)EnumPhoton.SendChatMessage)
        {
            string[] message = ((string)content).Split(';');



            string str = message[1];
            string[] name = str.Split('|');

            Debug.Log("======playerObjects======" + playerObjects.Count + "===========" + name[0] + "==========" + name[1]);
            for (int i = 0; i < playerObjects.Count; i++)
            {
                if (playerObjects[i].id.Equals(name[1]))
                {
                    Debug.Log("check ==" + playerObjects[i].ChatbubbleImage.gameObject.name);
                    playerObjects[i].ChatBubbleText.SetActive(true);
                    playerObjects[i].ChatbubbleImage.SetActive(false);
                    playerObjects[i].ChatBubbleText.GetComponent<Text>().text = message[0];
                    playerObjects[i].ChatBubble.GetComponent<Animator>().Play("MessageBubbleAnimation");
                }
            }
        }
        else if (eventcode == (int)EnumPhoton.SendChatEmojiMessage)
        {
            string[] message = ((string)content).Split(';');
            Debug.Log("Received message " + message[0] + " from " + message[1]);
            for (int i = 0; i < playerObjects.Count; i++)
            {
                if (playerObjects[i].id.Equals(message[1]))
                {
                    playerObjects[i].ChatBubbleText.SetActive(false);
                    playerObjects[i].ChatbubbleImage.SetActive(true);
                    int index = int.Parse(message[0]);

                    if (index > emojiSprites.Length - 1)
                    {
                        index = emojiSprites.Length;
                    }
                    playerObjects[i].ChatbubbleImage.GetComponent<Image>().sprite = emojiSprites[index];
                    playerObjects[i].ChatBubble.GetComponent<Animator>().Play("MessageBubbleAnimation");
                }
            }
        }
        else if (eventcode == (int)EnumPhoton.AddFriend)
        {
            if (PlayerPrefs.GetInt(StaticStrings.FriendsRequestesKey, 0) == 0)
            {
                string[] data = ((string)content).Split(';');
                if (PhotonNetwork.playerName.Equals(data[2]))
                    invitiationDialog.GetComponent<PhotonChatListener2>().showInvitationDialog(data[0], data[1], null);
            }
            else
            {
                Debug.Log("Invitations OFF");
            }

        }
        else if (eventcode == (int)EnumPhoton.FinishedGame)
        {
            string message = (string)content;
            SetFinishGame(message, false);

        }
    }



    private void SetMyTurn()
    {
        GameManager.Instance.isMyTurn = true;

        if (GameManager.Instance.miniGame != null)
            GameManager.Instance.miniGame.setMyTurn();


        StartTimer();
    }

    private void BotTurn()
    {
        oppoTurnSource.Play();
        //GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];
        GameManager.Instance.isMyTurn = false;
        Debug.Log("Bot Turn");
        StartTimer();

        GameManager.Instance.miniGame.BotTurn(true);

        //Invoke("BotDelay", 2.0f);

    }

    private void SetTurn()
    {
        Debug.Log("SET TURN CALLED");

        for (int i = 0; i < playerObjects.Count; i++)
        {
            playerObjects[i].dice.GetComponent<GameDiceController>().EnableDiceShadow();
        }

        playerObjects[currentPlayerIndex].dice.GetComponent<GameDiceController>().DisableDiceShadow();

        GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];

        if (playerObjects[currentPlayerIndex].id == myId)
        {
            SetMyTurn();
        }
        else if (playerObjects[currentPlayerIndex].isBot)
        {
            FindObjectOfType<BotIntel>().GetSteps();
            BotTurn();
        }
        else
        {
            SetOpponentTurn();
        }
    }

    private void BotDelay()
    {
        if (!FinishWindowActive)
        {
            setCurrentPlayerIndex(currentPlayerIndex);
            SetTurn();
        }

    }


    public void setCurrentPlayerIndex(int current)
    {

        while (true)
        {
            current = current + 1;
            currentPlayerIndex = (current) % playerObjects.Count;
            GameManager.Instance.currentPlayer = playerObjects[currentPlayerIndex];
            if (playerObjects[currentPlayerIndex].AvatarObject.GetComponent<PlayerAvatarController>().Active) break;
        }

    }

    private void SetOpponentTurn()
    {
        Debug.Log("Opponent turn");
        oppoTurnSource.Play();
        GameManager.Instance.isMyTurn = false;
        /*if (playerObjects[currentPlayerIndex].id.Contains("_BOT"))
        {
            BotTurn();
        }*/

        StartTimer();
    }

    private void StartTimer()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (i == currentPlayerIndex)
            {
                playerObjects[currentPlayerIndex].timer.SetActive(true);
            }
            else
            {
                playerObjects[i].timer.SetActive(false);
            }
        }
    }

    public void StopTimers()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            playerObjects[i].timer.SetActive(false);
        }
    }

    public void PauseTimers()
    {
        playerObjects[currentPlayerIndex].timer.GetComponent<UpdatePlayerTimer>().Pause();
    }

    public void restartTimer()
    {
        playerObjects[currentPlayerIndex].timer.GetComponent<UpdatePlayerTimer>().restartTimer();
    }

    public override void OnPhotonPlayerDisconnected(PhotonPlayer otherPlayer)
    {
        Debug.Log("Player disconnected: " + otherPlayer.NickName);

        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id.Equals(otherPlayer.NickName.Split('|')[1].ToString()))
            {
                Debug.Log(" Yes Gone !");
                setPlayerDisconnected(i);
                break;
            }
        }

        //  CheckPlayersIfShouldFinishGame();
    }

    // public void CheckPlayersIfShouldFinishGame()
    // {
    //     if (!FinishWindowActive)
    //     {
    //         if ((ActivePlayersInRoom == 1 && !iFinished) || ActivePlayersInRoom == 1)
    //         {

    //             StopAndFinishGame();
    //         }

    //         if (iFinished && ActivePlayersInRoom == 1 && CheckIfOtherPlayerIsBot())
    //         {
    //             AddBotToListOfWinners();
    //             StopAndFinishGame();
    //         }
    //     }
    // }


    public void CheckPlayersIfShouldFinishGame(bool won)
    {
        if (!FinishWindowActive)
        {
            if ((ActivePlayersInRoom == 1 && !iFinished))
            {
                StopAndFinishGame(won);
                return;
            }

            if (ActivePlayersInRoom == 0)
            {
                StopAndFinishGame(won);
                return;
            }

            if (iFinished && ActivePlayersInRoom == 1 && CheckIfOtherPlayerIsBot())
            {
                AddBotToListOfWinners();
                StopAndFinishGame(won);
                return;
            }

            if (ActivePlayersInRoom > 1 && iFinished)
            {
                TIPButtonObject.SetActive(true);
            }



        }
    }
    public void AddBotToListOfWinners()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id.Contains("_BOT") && playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().Active)
            {
                playersFinished.Add(playerObjects[i]);
            }
        }
    }

    public bool CheckIfOtherPlayerIsBot()
    {
        for (int i = 0; i < playerObjects.Count; i++)
        {
            if (playerObjects[i].id.Contains("_BOT") && playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().Active)
            {
                playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().finished = true;
                return true;
            }
        }
        return false;
    }

    public void setPlayerDisconnected(int i)
    {

        //   requiredToStart--;
        if (!FinishWindowActive)
        {
            //   if (!playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().finished)
            //      ActivePlayersInRoom--;

            Debug.Log("Active players: " + ActivePlayersInRoom);
            if (currentPlayerIndex == i && ActivePlayersInRoom > 1)
            {

                setCurrentPlayerIndex(currentPlayerIndex);
                if (AllPlayersReady)
                    SetTurn();
            }

            playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().PlayerLeftRoom(true);

            // LUDO
            playerObjects[i].dice.SetActive(false);
            if (!playerObjects[i].AvatarObject.GetComponent<PlayerAvatarController>().finished)
            {
                for (int j = 0; j < playerObjects[i].pawns.Length; j++)
                {
                    // playerObjects[i].pawns[j].SetActive(false);
                    playerObjects[i].pawns[j].GetComponent<LudoPawnController>().AddInstantly(0);
                }
            }
            // END LUDO
        }
    }

    public void LeaveGame(bool finishWindow)
    {
        if (GameManager.Instance.isLocalMultiplayer && !GameManager.Instance.isPlayingWithComputer)
        {
            //Game Leave Logic
            Debug.Log("Game leave logic is called");
            GameManager.Instance.playfabManager.roomOwner = false;
            GameManager.Instance.roomOwner = false;
            // GameManager.Instance.type = MyGameType.TwoPlayer;
            GameManager.Instance.resetAllData();
            // on game leave logic
            SceneManager.LoadScene("LoginSplash");
            // SavingWindow.SetActive(true);
        }
        else
        {
            if (!iFinished || finishWindow)
            {
                PlayerPrefs.SetInt("GamesPlayed", PlayerPrefs.GetInt("GamesPlayed", 1) + 1);
                SceneManager.LoadScene("LoginSplash");
                PhotonNetwork.BackgroundTimeout = StaticStrings.photonDisconnectTimeoutLong;

                //GameManager.Instance.cueController.removeOnEventCall();
                PhotonNetwork.LeaveRoom();
                PhotonNetwork.Disconnect();

                GameManager.Instance.playfabManager.roomOwner = false;
                GameManager.Instance.roomOwner = false;
                Debug.Log("Not finished leave game called");
                GameManager.Instance.resetAllData();

            }
            else
            {
                ShowGameFinishWindow();
                GameManager.Instance.resetAllData();
                Debug.Log("Leave Game Super else");
            }
        }
        if (!GameManager.Instance.Historycalled)
            StartCoroutine(LeaveHistory());

    }

    private IEnumerator LeaveHistory()
    {
        //leave history pe toh problem nhi hai
        Debug.Log("######## leave histpry api &&&&&");
        GameManager.Instance.Historycalled = true;
        PlayerPrefs.SetInt("WINAMT", 0);
        string status = "loss";
        string seat = "";
        if (GameManager.Instance.type == MyGameType.TwoPlayer)
            seat = "2";
        if (GameManager.Instance.type == MyGameType.FourPlayer)
            seat = "4";
        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID", ""));
        form.AddField("status", status);
        form.AddField("bid_amount", PlayerPrefs.GetInt("EN"));
        form.AddField("Win_amount", PlayerPrefs.GetInt("WINAMT"));
        form.AddField("loss_amount", PlayerPrefs.GetInt("EN"));
        form.AddField("seat_limit", seat);
        form.AddField("oppo1", GameManager.Instance.Name1.ToString());
        form.AddField("oppo2", GameManager.Instance.Name2.ToString());
        form.AddField("oppo3", GameManager.Instance.Name3.ToString());


        string url = StaticStrings.baseURL + "api/player/playerhistory"; // ye api hai

        using (UnityWebRequest handshake = UnityWebRequest.Post(url, form))
        {
            yield return handshake.SendWebRequest();


            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log(handshake.error.ToString());
            }

            else
            {

            }
        }
    }


    public void ShowHideChatWindow()
    {
        if (!ChatWindow.activeSelf)
        {
            ChatWindow.SetActive(true);
            ChatButton.GetComponent<Text>().text = "X";
        }
        else
        {
            ChatWindow.SetActive(false);
            ChatButton.GetComponent<Text>().text = "CHAT";
        }
    }

    public void ShowHideDropdown()
    {
        if (!dropdownBtn.activeSelf)
        {
            dropdownBtn.SetActive(true);
            // ChatButton.GetComponent<Text>().text = "X";
        }
        else
        {
            dropdownBtn.SetActive(false);
            // ChatButton.GetComponent<Text>().text = "CHAT";
        }
    }


}
