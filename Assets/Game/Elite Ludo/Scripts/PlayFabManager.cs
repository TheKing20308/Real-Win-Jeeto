using AssemblyCSharp;
using ExitGames.Client.Photon;
using ExitGames.Client.Photon.Chat;
using Photon;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using ZxLog;
using Hashtable = ExitGames.Client.Photon.Hashtable;
using Random = UnityEngine.Random;
//using Facebook.Unity;

[Serializable]
public class ReferralDetails
{
    public string referral_code;
    public string referral_earnings;
    public string otp_code;
    public string status;
    // public string date_created;
}

[Serializable]
public class ReferralDetail
{
    // public List<ReferralDetails> value;
    public List<ReferralDetails> data;
    // public List<ReferralDetails> message;
}

[Serializable]
public class ServerDetails
{
    public string status;
    public string api_key;
    public string app_version;
    // public string date_created;
}

[Serializable]
public class ServerDetail
{
    // public List<ReferralDetails> value;
    public List<ServerDetails> data;
    // public List<ReferralDetails> message;
}

public class PlayFabManager : PunBehaviour, IChatClientListener
{
#region Variables

    public string PlayFabId;
    public string authToken;
    public string POSTAddUserURL = "#";
    public bool multiGame = true;
    public bool roomOwner;
    public GameObject fbButton;
    public GameObject menuCanvas;
    public GameObject MatchPlayersCanvas;
    public GameObject splashCanvas;
    public bool opponentReady;
    public bool imReady;
    public GameObject playerAvatar;
    public GameObject playerName;
    public InputField InputField;
    public InputField InputField2;
    public GameObject backButtonMatchPlayers;


    public GameObject loginEmail;
    public GameObject loginPassword;
    public GameObject loginInvalidEmailorPassword;
    public GameObject loginCanvas;
    public InputField otpInputField;


    public GameObject regiterEmail;
    public GameObject registerPassword;
    public GameObject registerNickname;
    public GameObject registerInviteCode;
    public GameObject registerWhatsappNumber;
    public GameObject registerUsername;
    public GameObject registerInvalidInput;
    public GameObject registerCanvas;

    public GameObject resetPasswordEmail;
    public GameObject resetPasswordInformationText;
    public GameObject serverStatusInformationText;
    public GameObject otpSubmitInformationText;

    public bool isInLobby;
    public bool isInMaster;
    public GameObject hideobject;

    public string coinsBuyUrl, closeUrl;
    public GameObject botNotice;
    private bool alreadyGotFriends = false;

    private Sprite[] avatarSprites;
    public ChatClient chatClient;
    private int[] dexe = {
        100, 100, 100, 100, 100, 100
    };
    private int[] dexes = {
        100, 100, 100, 100, 100, 100
    };
    private int e;
    private FacebookFriendsMenu facebookFriendsMenu;
    private FacebookManager fbManager;

    private string results, status, coin;

    private string roomname;

    private int y;

    #endregion
    private void Awake()
    {
        PhotonNetwork.PhotonServerSettings.HostType = ServerSettings.HostingOption.PhotonCloud;
        PhotonNetwork.PhotonServerSettings.PreferredRegion = CloudRegionCode.usw;
        PhotonNetwork.PhotonServerSettings.AppID = StaticStrings.PhotonAppID;
        PhotonNetwork.PhotonServerSettings.Protocol = ConnectionProtocol.Udp;
        PhotonNetwork.OnEventCall += OnEvent;
        DontDestroyOnLoad(transform.gameObject);
    }

    private void Start()
    {
        Application.runInBackground = true;
        PhotonNetwork.BackgroundTimeout = StaticStrings.photonDisconnectTimeoutLong;
        ;
        GameManager.Instance.playfabManager = this;
        // fbManager = GameObject.Find("FB").GetComponent<FacebookManager>();
        if (!PhotonNetwork.connected)
        {
            //     isConnected = false;
            PhotonNetwork.automaticallySyncScene = true;

            PhotonNetwork.ConnectUsingSettings("1.4");
        }
        facebookFriendsMenu = GameManager.Instance.facebookFriendsMenu;
        // PlayerPrefs.SetInt(StaticStrings.VibrationsKey, 0);
        avatarSprites = GameObject.Find("StaticGameVariablesContainer").GetComponent<StaticGameVariablesController>().avatars;
    }

    private void Update()
    {
        // Debug.Log("Total count of active player : " +PhotonNetwork.countOfPlayers);
        if (chatClient != null) { chatClient.Service(); }
    }

    private void OnDestroy()
    {
        PhotonNetwork.OnEventCall -= OnEvent;
    }


    public void OnConnected()
    {
        Debug.Log("Photon Chat connected!!!");
        chatClient.Subscribe(new[] {
            "invitationsChannel"
        });
    }

    public void OnSubscribed(string[] channels, bool[] results)
    {
        Debug.Log("Subscribed to CHAT - set online status!");
        chatClient.SetOnlineStatus(ChatUserStatus.Online);
    }
    public void OnPrivateMessage(string sender, object message, string channelName)
    {
        if (!sender.Equals(PlayFabId))
        {
            if (message.ToString().Contains("INVITE_TO_PLAY_PRIVATE"))
            {
                GameManager.Instance.invitationID = sender;

                string[] messageSplit = message.ToString().Split(';');
                string whoInvite = messageSplit[1];
                string payout = messageSplit[2];
                string roomID = messageSplit[3];
                GameManager.Instance.payoutCoins = int.Parse(payout);
                GameManager.Instance.invitationDialog.GetComponent<PhotonChatListener>().showInvitationDialog(0, whoInvite, payout, roomID, 0);
            }
        }

        if (GameManager.Instance.invitationID.Length == 0 || !GameManager.Instance.invitationID.Equals(sender))
        {

        }
        else
        {
            GameManager.Instance.invitationID = "";
        }
    }

    public void DebugReturn(DebugLevel level, string message) { }

    public void OnChatStateChange(ChatState state) { }

    public void OnDisconnected()
    {
        Debug.Log("Chat disconnected - Reconnect");
        connectToChat();
    }

    public void OnGetMessages(string channelName, string[] senders, object[] messages) { }

    public void OnUnsubscribed(string[] channels) { }

    public void OnStatusUpdate(string user, int status, bool gotMessage, object message)
    {
        Debug.Log("STATUS UPDATE CHAT!");
        Debug.Log("Status change for: " + user + " to: " + status);

        bool foundFriend = false;
        for (int i = 0; i < GameManager.Instance.friendsStatuses.Count; i++)
        {
            string[] friend = GameManager.Instance.friendsStatuses[i];
            if (friend[0].Equals(user))
            {
                GameManager.Instance.friendsStatuses[i][1] = "" + status;
                foundFriend = true;
                break;
            }
        }

        if (!foundFriend)
        {
            GameManager.Instance.friendsStatuses.Add(new[] {
                user, "" + status
            });
        }

        if (GameManager.Instance.facebookFriendsMenu != null)
            GameManager.Instance.facebookFriendsMenu.updateFriendStatus(status, user);
    }

    public void destroy()
    {
        if (gameObject != null)
            DestroyImmediate(gameObject);
    }

    // handle events:
    private void OnEvent(byte eventcode, object content, int senderid)
    {


        if (eventcode == (int)EnumPhoton.BeginPrivateGame)
        {
            //StartGame();
            LoadGameScene();
        }
        else if (eventcode == (int)EnumPhoton.StartWithBots && senderid != PhotonNetwork.player.ID)
        {
            LoadBots();
        }
        else if (eventcode == (int)EnumPhoton.StartGame)
        {
            //Invoke("LoadGameWithDelay", UnityEngine.Random.Range(1.0f, 5.0f));
            //PhotonNetwork.LeaveRoom();
            LoadGameScene();
        }
        else if (eventcode == (int)EnumPhoton.ReadyToPlay)
        {
            GameManager.Instance.readyPlayersCount++;
            //LoadGameScene();
        }

    }

    public override void OnMasterClientSwitched(PhotonPlayer newMasterClient)
    {
        if (GameManager.Instance.controlAvatars != null && GameManager.Instance.type == MyGameType.Private)
        {
            PhotonNetwork.LeaveRoom();
            GameManager.Instance.controlAvatars.ShowJoinFailed("Room closed");
        }
        else
        {
            if (newMasterClient.NickName == PhotonNetwork.player.NickName)
            {

                WaitForNewPlayer();
            }
        }

    }

    public void StartGame()
    {
        PhotonNetwork.room.IsOpen = false;
        PhotonNetwork.room.IsVisible = false;

        CancelInvoke("StartGameWithBots");
        Invoke("startGameScene", 3.0f);
    }

    public void startGameScene()
    {
        if (GameManager.Instance.currentPlayersCount >= GameManager.Instance.requiredPlayers || GameManager.Instance.type == MyGameType.Private)
        {

            LoadGameScene();

            if (GameManager.Instance.type == MyGameType.Private)
            {
                PhotonNetwork.RaiseEvent((int)EnumPhoton.BeginPrivateGame, null, true, null);
            }
            else
            {
                PhotonNetwork.RaiseEvent((int)EnumPhoton.StartGame, null, true, null);
            }

        }
        else
        {
            // GameManager.Instance.dialogPlayer.SetActive(true);

            if (PhotonNetwork.isMasterClient)
                WaitForNewPlayer();
        }
    }

    public void LoadGameScene()
    {
        GameManager.Instance.GameScene = "GameScene";

        if (!GameManager.Instance.gameSceneStarted)
        {
            SceneManager.LoadScene(GameManager.Instance.GameScene);
            GameManager.Instance.gameSceneStarted = true;
        }

    }

    public void WaitForNewPlayer()
    {
        if (PhotonNetwork.isMasterClient && GameManager.Instance.type != MyGameType.Private)
        {

            CancelInvoke("StartGameWithBots");

            Invoke("StartGameWithBots", StaticStrings.WaitTimeUntilStartWithBots);
            // Invoke("FailedToFindPlayers", StaticStrings.WaitTimeUntilStartWithBots);


            //Invoke("FailedToFindPlayers", StaticStrings.WaitTimeUntilStartWithBots);
        }
    }

    public void StartGameWithBots()
    {

        if (PhotonNetwork.isMasterClient)
        {
            if (PhotonNetwork.room.PlayerCount < GameManager.Instance.requiredPlayers)
            {

                // PhotonNetwork.RaiseEvent((int)EnumPhoton.StartWithBots, null, true, null);
                LoadBots();
            }
        }
        else
        {
            Debug.Log("Not Master client");
        }
    }

    public void LoadBots()
    {
        y = 0;
        dexes = new[] {
            100, 100, 100, 100, 100, 100
        };
        e = 0;
        dexe = new[] {
            100, 100, 100, 100, 100, 100
        };

        Debug.Log("Close room - add bots");
        PhotonNetwork.room.IsOpen = false;
        PhotonNetwork.room.IsVisible = false;

        if (PhotonNetwork.isMasterClient)
        {
            Debug.Log("hellllll=======>" + InitMenuScript.inst.botEnebal);
            if (InitMenuScript.inst.botEnebal == 1)
            {
                Invoke("AddBots", 3.0f);
            }

            // InitMenuScript.inst.botNotice.SetActive(true);
        }

        // AddBots();
    }

    public void PlayofflineMode()
    {
        GameManager.Instance.isLocalMultiplayer = true;
        // GameManager.Instance.isPlayingWithComputer = true;
        string BotMoves = generateBotMoves();
        extractBotMoves(BotMoves);
        if (GameManager.Instance.type == MyGameType.TwoPlayer)
        {
            GameManager.Instance.requiredPlayers = 2;
        }
        else
            GameManager.Instance.requiredPlayers = 4;

        Debug.Log("Required Player    " + GameManager.Instance.requiredPlayers);
        for (int i = 0; i < GameManager.Instance.requiredPlayers - 1; i++)
        {
            if (GameManager.Instance.opponentsIDs[i] == null)
            {
                // StartCoroutine(AddBot(i));
                GameManager.Instance.opponentsAvatars[i] = avatarSprites[Random.Range(0, avatarSprites.Length - 1)];
                GameManager.Instance.opponentsIDs[i] = "_BOT" + i;


                GameManager.Instance.opponentsNames[i] = "Computer " + (i + 1);
            }
        }
        LoadGameScene();
    }

    public void AddBots()
    {
        // Add Bots here

        Debug.Log("Add Bots with delay");

        if (PhotonNetwork.room.PlayerCount < GameManager.Instance.requiredPlayers)
        {

            if (PhotonNetwork.isMasterClient)
            {
                PhotonNetwork.RaiseEvent((int)EnumPhoton.StartWithBots, null, true, null);
            }

            for (int i = 0; i < GameManager.Instance.requiredPlayers - 1; i++)
            {
                Debug.Log(GameManager.Instance.opponentsIDs[i]);
                if (GameManager.Instance.opponentsIDs[i] == null)
                {
                    StartCoroutine(AddBot(i));
                }
            }
        }
    }

    public static event Action<string> OnBotJoined;

    public IEnumerator AddBot(int i)
    {
        yield return new WaitForSeconds(i + Random.Range(0.0f, 0.9f));
        {
        newIndex:
            int MyIndex = Random.Range(0, avatarSprites.Length);
            for (int h = 0; h < dexes.Length; h++)
            {
                if (dexes[h] == MyIndex)
                    goto newIndex;
            }
            if (dexes[y] == 100)
            {
                dexes[y] = MyIndex;
                y++;
            }

            GameManager.Instance.opponentsAvatars[i] = avatarSprites[MyIndex];
            GameManager.Instance.opponentsAvatarsIndex[i] = MyIndex;
            GameManager.Instance.opponentsIDs[i] = "_BOT" + i;
        }
        {
        newInd:
            int MyIndex = Random.Range(0, GameManager.Instance.botsName.Length);
            for (int h = 0; h < dexe.Length; h++)
            {
                if (dexe[h] == MyIndex)
                    goto newInd;
            }
            if (dexe[e] == 100)
            {
                dexe[e] = MyIndex;
                e++;
            }

            GameManager.Instance.opponentsNames[i] = GameManager.Instance.botsName[MyIndex];
            if (i == 0)
            {
                GameManager.Instance.Name1 = GameManager.Instance.botsName[MyIndex];
            }
            if (i == 1)
            {
                GameManager.Instance.Name2 = GameManager.Instance.botsName[MyIndex];
            }
            if (i == 2)
            {
                GameManager.Instance.Name3 = GameManager.Instance.botsName[MyIndex];
            }
            Debug.Log("Name: " + GameManager.Instance.opponentsNames[i]);
            OnBotJoined?.Invoke(GameManager.Instance.opponentsNames[i]);
            PlayerJoined(i, "_BOT" + i);
        }
    }

    public void PlayerJoined(int index, string id)
    {

        GameManager.Instance.currentPlayersCount++;

        if (GameManager.Instance.opponentsIDs.Contains(id))
        {
            //playerJoin.Play();

            //InviteToJoinButtons[index].SetActive(false);
            //OppoAvatar[index].SetActive(true);
            if (GameManager.Instance.opponentsAvatars[index] != null)
            {
                //OppoAvatarImage[index].GetComponent<Image>().sprite = GameManager.Instance.opponentsAvatars[index];
            }


            if (GameManager.Instance.currentPlayersCount >= GameManager.Instance.requiredPlayers)
            {
                if (PhotonNetwork.isMasterClient)
                    GameManager.Instance.playfabManager.StartGame();
            }
            else
            {
                if (PhotonNetwork.isMasterClient)
                {
                    GameManager.Instance.playfabManager.WaitForNewPlayer();

                }
            }
        }

    }

    public void UpdateBoughtEmojis(int index)
    {
        Dictionary<string, string> data = new Dictionary<string, string>();
        data.Add(MyPlayerData.EmojiKey, GameManager.Instance.myPlayerData.GetEmoji() + ";'" + index + "'");


        GameManager.Instance.myPlayerData.UpdateUserData(data);
    }

    public void addCoinsRequest(int count) { }

    public void minusCoinsRequest(int count) { }

    public void Login()
    {
        string customId = "";
        if (PlayerPrefs.HasKey("unique_identifier"))
        {
            customId = PlayerPrefs.GetString("unique_identifier");
        }
        else
        {
            customId = Guid.NewGuid().ToString();
            PlayerPrefs.SetString("unique_identifier", customId);
        }
        Debug.Log("UNIQUE IDENTIFIER: " + customId);
    }

    // #######################  PHOTON  ##########################

    public void connectToChat()
    {
        chatClient = new ChatClient(this);
        GameManager.Instance.chatClient = chatClient;
        ExitGames.Client.Photon.Chat.AuthenticationValues authValues = new ExitGames.Client.Photon.Chat.AuthenticationValues();
        authValues.UserId = PlayFabId;
        authValues.AuthType = ExitGames.Client.Photon.Chat.CustomAuthenticationType.Custom;
        authValues.AddAuthParameter("username", PlayFabId);
        authValues.AddAuthParameter("Token", authToken);
        chatClient.Connect(StaticStrings.PhotonChatID, "1.0", authValues);
    }


    public override void OnPhotonCustomRoomPropertiesChanged(Hashtable propertiesThatChanged)
    {
        Debug.Log("Custom properties changed: " + DateTime.Now);
    }

    public override void OnPhotonPlayerDisconnected(PhotonPlayer player)
    {
        GameManager.Instance.opponentDisconnected = true;

        GameManager.Instance.invitationID = "";

        if (GameManager.Instance.controlAvatars != null)
        {
            Debug.Log("PLAYER DISCONNECTED " + player.NickName);
            if (PhotonNetwork.room.PlayerCount > 1)
            {
                GameManager.Instance.controlAvatars.startButtonPrivate.GetComponent<Button>().interactable = true;
            }
            else
            {
                GameManager.Instance.controlAvatars.startButtonPrivate.GetComponent<Button>().interactable = false;
            }


            int index = GameManager.Instance.opponentsIDs.IndexOf(player.NickName);
            //PhotonNetwork.room.IsOpen = true;
            GameManager.Instance.controlAvatars.PlayerDisconnected(index);
        }
    }

    public void challengeFriend(string id, string message)
    {
        //if (GameManager.Instance.invitationID.Length == 0 || !GameManager.Instance.invitationID.Equals(id))
        //{
        chatClient.SendPrivateMessage(id, "INVITE_TO_PLAY_PRIVATE;" + /*id + this.PlayFabId + ";" +*/ GameManager.Instance.nameMy + ";" + message);
        GameManager.Instance.invitationID = id;
        Debug.Log("Send invitation to: " + id);
        // }
    }

    public override void OnDisconnectedFromPhoton()
    {
        Debug.Log("Disconnected from photon");
        //on disconnected from photon connect again
        PhotonNetwork.ConnectUsingSettings("1.4");
    }

    public void switchUser()
    {
        GameManager.Instance.playfabManager.destroy();
        GameManager.Instance.facebookManager.destroy();
        GameManager.Instance.connectionLost.destroy();
        //GameManager.Instance.adsScript.destroy();
        GameManager.Instance.avatarMy = null;
        GameManager.Instance.logged = false;
        GameManager.Instance.resetAllData();
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene("LoginSplash");
    }

    public override void OnConnectedToMaster()
    {
        isInMaster = true;
        Debug.Log("===============================CONNECTED TO MASTER SERVER===============================");

        PhotonNetwork.playerName = PlayerPrefs.GetString("N", "JhonnyTest") + "|" + PlayerPrefs.GetString("PID");

        PhotonNetwork.JoinLobby();

    }

    public override void OnJoinedLobby()
    {
        Debug.Log("Joined Lobby");
        isInLobby = true;
    }

    public void JoinRoomAndStartGame()
    {
        Hashtable expectedCustomRoomProperties = new Hashtable {
            {
                "m", GameManager.Instance.mode + GameManager.Instance.type.ToString() + GameManager.Instance.payoutCoins
            }
        };

        StartCoroutine(TryToJoinRandomRoom(expectedCustomRoomProperties));

        //PhotonNetwork.JoinRandomRoom(expectedCustomRoomProperties, 0);
    }

    public IEnumerator TryToJoinRandomRoom(Hashtable roomOptions)
    {
        while (true)
        {

            if (isInLobby && isInMaster)
            {
                Debug.Log("Joinging Random");
                PhotonNetwork.JoinRandomRoom(roomOptions, 0);
                break;
            }
            yield return new WaitForSeconds(0.2f);
        }
    }

    public string generateBotMoves()
    {
        GameManager.Instance.isPlayingWithComputer = true;
        if (GameManager.Instance.isLocalMultiplayer)
        {
            GameManager.Instance.payoutCoins = 0;
        }
        // Generate BOT moves
        string BotMoves = "";
        int BotCount = 100;
        int count = 0;
        int step = 0;
        // Generate dice values
        for (int i = 0; i < BotCount; i++)
        {
            if (i == 3 || i == 6 || i == 14 || i == 21 || i == 25 || i == 26 || i == 30 || i == 36 || i == 37 || i == 40 || i == 44 || i == 45 || i == 49 || i == 55 || i == 56)
            {
                step = 6;
            }
            else
            {
                step = Random.Range(1, 7);
                if (step == 6)
                {
                    if (count == 2)
                    {
                        step = Random.Range(1, 6);
                        count = 0;
                    }
                    count++;
                }
                else
                {
                    count = 0;
                }
            }
            BotMoves += step.ToString();
            if (i < BotCount - 1)
            {
                BotMoves += ",";
            }
        }

        BotMoves += ";";

        // Generate delays
        float minValue = GameManager.Instance.playerTime / 10;
        if (minValue < 1.5f) minValue = 1.5f;
        for (int i = 0; i < BotCount; i++)
        {
            BotMoves += Random.Range(minValue, GameManager.Instance.playerTime / 8).ToString();
            if (i < BotCount - 1)
            {
                BotMoves += ",";
            }
        }
        Debug.Log("BotMoves   " + BotMoves);
        return BotMoves;
    }

    public void extractBotMoves(string data)
    {
        GameManager.Instance.botDiceValues = new List<int>();
        GameManager.Instance.botDelays = new List<float>();
        string[] d1 = data.Split(';');


        string[] diceValues = d1[0].Split(',');
        for (int i = 0; i < diceValues.Length; i++)
        {
            GameManager.Instance.botDiceValues.Add(int.Parse(diceValues[i]));
        }

        string[] delays = d1[1].Split(',');
        for (int i = 0; i < delays.Length; i++)
        {
            GameManager.Instance.botDelays.Add(float.Parse(delays[i]));
        }
    }

    public override void OnJoinedRoom()
    {

        Debug.Log("OnJoinedRoom");


        if (PhotonNetwork.room.CustomProperties.ContainsKey("bt"))
        {
            extractBotMoves(PhotonNetwork.room.CustomProperties["bt"].ToString());
        }

        if (PhotonNetwork.room.CustomProperties.ContainsKey("fp"))
        {
            GameManager.Instance.firstPlayerInGame = int.Parse(PhotonNetwork.room.CustomProperties["fp"].ToString());
        }
        else
        {
            GameManager.Instance.firstPlayerInGame = 0;
        }

        GameManager.Instance.avatarOpponent = null;

        Debug.Log("Players in room = " + PhotonNetwork.room.PlayerCount);

        GameManager.Instance.currentPlayersCount = 1;

        //GameManager.Instance.controlAvatars.setCancelButton();
        if (PhotonNetwork.room.PlayerCount == 1)
        {
            GameManager.Instance.roomOwner = true;
            WaitForNewPlayer();
        }
        else if (PhotonNetwork.room.PlayerCount >= GameManager.Instance.requiredPlayers)
        {
            PhotonNetwork.room.IsOpen = false;
            PhotonNetwork.room.IsVisible = false;
        }

        Print.CustomLog("Room Owner" + roomOwner,20, LogColor.Blue);

        if (!roomOwner)
        {
            //GameManager.Instance.backButtonMatchPlayers.SetActive(false);

            for (int i = 0; i < PhotonNetwork.otherPlayers.Length; i++)
            {
                int ii = i;
                int index = GetFirstFreeSlot();
                string otherID = PhotonNetwork.otherPlayers[ii].NickName;
                string name = otherID.Split('|')[0];
                string otherId = otherID.Split('|')[1];
                getOpponentData(name, otherId, index);

            }
        }
    }

    public void CreatePrivateRoom()
    {
        GameManager.Instance.JoinedByID = false;
        RoomOptions roomOptions = new RoomOptions();
        if (GameManager.Instance.Subtype == MyGameSubType.PrivateTwoPlayer)
            roomOptions.MaxPlayers = 2;
        if (GameManager.Instance.Subtype == MyGameSubType.PrivateFourPlayer)
            roomOptions.MaxPlayers = 4;


        string roomName = "";
        for (int i = 0; i < 8; i++)
        {
            roomName = roomName + Random.Range(0, 10);
        }

        roomOptions.CustomRoomPropertiesForLobby = new[] {
            "pc"
        };
        roomOptions.CustomRoomProperties = new Hashtable {
            {
                "pc", GameManager.Instance.payoutCoins
            }
        };
        Debug.Log("Private room name: " + roomName);
        PhotonNetwork.CreateRoom(roomName, roomOptions, TypedLobby.Default);
    }

    public override void OnCreatedRoom()
    {
        Debug.Log("OnCreatedRoom");
        roomOwner = true;
        GameManager.Instance.roomOwner = true;
        GameManager.Instance.currentPlayersCount = 1;
        //GameManager.Instance.controlAvatars.updateRoomID(PhotonNetwork.room.Name);
    }

    public override void OnLeftRoom()
    {
        Debug.Log("OnLeftRoom called");
        roomOwner = false;
        GameManager.Instance.roomOwner = false;
        GameManager.Instance.resetAllData();
    }

    public int GetFirstFreeSlot()
    {
        int index = 0;
        for (int i = 0; i < GameManager.Instance.opponentsIDs.Count; i++)
        {
            if (GameManager.Instance.opponentsIDs[i] == null)
            {
                index = i;
                break;
            }
        }
        return index;
    }

    public override void OnPhotonCreateRoomFailed(object[] codeAndMsg)
    {
        Debug.Log("Failed to create room");
        CreatePrivateRoom();
    }

    public override void OnPhotonJoinRoomFailed(object[] codeAndMsg)
    {
        Debug.Log("Failed to join room");

        if (GameManager.Instance.type == MyGameType.Private)
        {
            if (GameManager.Instance.controlAvatars != null)
            {
                GameManager.Instance.controlAvatars.ShowJoinFailed(codeAndMsg[1].ToString());
            }
        }
        else
        {
            GameManager.Instance.facebookManager.startRandomGame();
        }
    }

    public override void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {
        CancelInvoke("StartGameWithBots");

        Debug.Log("  New Player  " + newPlayer.NickName);
        Debug.Log(PhotonNetwork.room.PlayerCount);
        if (PhotonNetwork.room.PlayerCount >= GameManager.Instance.requiredPlayers)
        {
            PhotonNetwork.room.IsOpen = false;
            PhotonNetwork.room.IsVisible = false;
        }

        if (PhotonNetwork.room.PlayerCount > 1)
        {
            //GameManager.Instance.controlAvatars.startButtonPrivate.GetComponent<Button>().interactable = true;
        }

        //GameManager.Instance.controlAvatars.startButtonPrivate.GetComponent<Button>().interactable = true;
        int index = GetFirstFreeSlot();

        getOpponentData(newPlayer.NickName.Split('|')[0], newPlayer.NickName.Split('|')[1], index);

    }

    private void getOpponentData(string playername, string id, int index)
    {
        if (GameManager.Instance.Name1.Length < 2)
        {
            GameManager.Instance.Name1 = playername;
        }

        if (GameManager.Instance.Name2.Length < 2)
        {
            GameManager.Instance.Name2 = playername;
        }
        if (GameManager.Instance.Name3.Length < 2)
        {
            GameManager.Instance.Name3 = playername;
        }
        GameManager.Instance.opponentsNames[index] = playername;

        GameManager.Instance.opponentsIDs[index] = id;

        string picurl = StaticStrings.baseURL + "storage/Profile/pp" + id + ".jpg";
        if (picurl.Length > 10)
            StartCoroutine(loadImageOpponent(picurl, index, id));

    }

    public IEnumerator loadImageOpponent(string url, int index, string id)
    {
        Debug.Log(url);
        using (UnityWebRequest www = UnityWebRequestTexture.GetTexture(url))
        {
            yield return www.SendWebRequest();

            if (www.isHttpError || www.isNetworkError || www.isNetworkError)
            {
                Debug.Log(www.error);
                string backupUrl = "https://images.unsplash.com/photo-1682687981715-fa2ff72bd87d?q=80&w=2071&auto=format&fit=crop&ixlib=rb-4.0.3&ixid=M3wxMjA3fDF8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D";
                StartCoroutine(loadImageOpponent(backupUrl, index, id));
            }
            else
            {
                Texture2D tex = ((DownloadHandlerTexture)www.downloadHandler).texture;
                Sprite Pic = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);

                GameManager.Instance.opponentsAvatars[index] = Pic;
                PlayerJoined(index, id);
            }
        }
    }
}
