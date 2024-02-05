using System;
using UnityEngine;
using ExitGames.Client.Photon.Chat;

using System.Collections.Generic;


public class GameManager
{
    public int readyPlayersCount = 1;
    public int menuLoadCount = 0;
    public List<int> botDiceValues = new List<int>();
    public List<float> botDelays = new List<float>();
    public bool needToKillOpponentToEnterHome = false;
    public List<PlayerObject> playerObjects;
    public PlayerObject currentPlayer;
    public int NotAllowedsteps1 = 100, NotAllowedsteps2 = 100, NotAllowedsteps3 = 100, NotAllowedsteps4 = 100;
    public Sprite facebookAvatar = null;
    public MyPlayerData myPlayerData = new MyPlayerData();
    public string privateRoomID;
    public string Name1 = "", Name2 ="", Name3 = "";
    public string[] scenes = new string[] { "GameScene", "CheckersScene", "TheMillScene", "SoccerScene" };
    public string[] gamesNames = new string[] { "GOMOKU", "CHECKERS", "THE MILL", "SOCCER" };
    public string[] botsName = new string[] { "Haider", "Shaun", "Vijay Murli", "Prasanth V", "Mohan Kumar", "Sujoy Das", "RocketGames", "IamTheWinner","Susanth K", "Mohit Agarwal", "TheGuy","Pro Gamer", "Fantastic Four", "Shashank", "Sahil", "Md Irfan", "Zubair", "A Khan" ,"arthav","krishav","viraj","Sathvik","Yuvaan","Daksh","Aarush","Hridhaan","Ivaan","Rihaan","Nirved","Reyansh","Anwit","Aadvik","Saumit","Rudransh","Divyansh","Nivaan","Prayan","Pranith","Jiyaan"};
    public string GameScene = "SoccerScene";
    private static GameManager instance;
    public List<Sprite> opponentsAvatars = new List<Sprite>() { null, null, null };
    public List<string> opponentsNames = new List<string>() { null, null, null};
    public List<string> opponentsIDs = new List<string>() { null, null, null };
    public List<int> opponentsAvatarsIndex = new List<int>() { 5,5 ,5  };
    public GameObject myAvatarGameObject;
    public bool Historycalled = false;
    public GameObject myNameGameObject;
    public int requiredPlayers = 2; // for now! then add logic for 4
    public int firstPlayerInGame = 0;
    public int readyPlayers = 0;
    public int currentPlayersCount = 0;
    public bool offlineMode = false;
    public int myPlayerIndex = 0;
    public float playerTime = 20.0f; // player time in seconds
    public bool readyToAnimateCoins = false;
    public bool showTargetLines = false;
    public bool callPocketBlack = false;
    public bool callPocketAll = false;
    public bool LinkFbAccount = false;
    public bool inviteFriendActivated = false;
    public InitMenuScript initMenuScript;
    public ListCreator listCreator;
    public string challengedFriendID;
    public GameObject tablesCanvas;
    public bool stopTimer = false;
    public int IntelPlayerBot = 0;
    public bool ownSolids = false;
    public bool playersHaveTypes = false;
    public bool firstBallTouched = false;
    public bool wasFault = false;
    public bool validPot = false;
    public int validPotsCount = 0;
    public int BotMoves1 = 100;
    public int BotMoves2 = 100;
    public int BotMoves3 = 100;
    public string faultMessage = "";
   public FacebookFriendsMenu facebookFriendsMenu;
    public GameObject matchPlayerObject;
    public GameObject backButtonMatchPlayers;
    public GameObject MatchPlayersCanvas;
    public GameObject reconnectingWindow;
    public GameObject dropdownButton;
    public GameControllerScript gameControllerScript;
   public FacebookManager facebookManager;
    public GameObject whiteBall;
    public bool testValue;
    public bool hasCueInHand = false;
    public GameObject FacebookLinkButton;
    public int shotPower;
    public bool ballsStriked = false;
    public List<String> ballTouchBeforeStrike = new List<String>();
    public GameObject ballHand;
    public bool iWon = false;
    public bool iLost = false;
    public bool iDraw = false;
    public bool calledPocket = false;
    public int solidPoted = 0;
    public int stripedPoted = 0;
    public bool noTypesPotedStriped = false;
    public bool noTypesPotedSolid = false;
    public GameObject usingCueText;
    public int ballTouchedBand = 0;
    public bool receivedInitPositions = false;
    public Vector3[] initPositions;
    public GameObject[] balls;
    public bool logged = false;
    public List<string> friendsIDForStatus = new List<string>();

    public string nameMy;
    public Sprite avatarMy;

    public string avatarMyUrl;
    public GameObject dialog;
    public DialogCtrl dialogNew;
    public DialogFailedToFindPlayers dialogFailed;
    public GameObject dialogFails;
    public DialogNoPlayersCtrl dialogNoPlayers;
    public EasyPlayLogin easyLogin;
    public GameObject objectGame;
    public GameObject dialogPlayer;

    public string nameOpponent;
    public Sprite avatarOpponent;
    public int TotalCoins;
    public string opponentPlayFabID;
    public int offlinePlayerTurn = 1;
    public bool offlinePlayer1OwnSolid = true;
    public string facebookIDMy;
    public bool playerDisconnected = false;
    public bool easyplayLogin = false;

    public GameObject invitationDialog;
    public ChatClient chatClient;

    public int coinsCount;
    public bool roomOwner = false;
    public float linesLength = 5.0f;
    public int avatarMoveSpeed = 15;
    public bool opponentDisconnected = false;

    public CueController cueController;
    public GameObject friendButtonMenu;
    public GameObject smallMenu;
   public PlayFabManager playfabManager;
    public float messageTime = 0;
     //public GameObject easyLogin;
    public GameObject easyLoginDialog;
    public GameObject easyWalletDialog;
    public string easyWalletBalance = "";

    public int tableNumber = 0;
    public GameObject saveButton;
    public AudioSource[] audioSources;
    public int calledPocketID = 0;
    public GameObject coinsTextMenu;
    public GameObject coinsTextShop;
    public int cueIndex = 0;
    public int cuePower = 0;
    public int cueAim = 0;
    public int cueTime = 0;
    public BuyItemControl BuyItemControl;
    public GameObject cueObject;
    public List<string[]> friendsStatuses = new List<string[]>();
    public int opponentCueIndex = 0;
    public int opponentCueTime = 0;
    public ControlAvatars controlAvatars;
    //public AdMobObjectController adsScript;
    public ConnectionLostController connectionLost;
    public bool opponentActive = true;
    public IMiniGame miniGame;
    public bool WonBySkip = false;
    public bool myTurnDone = false;
    public bool CountedSkip = false;
    public string invitationID = "";
    public MyGameMode mode;
    public MyGameType type;
    public MyGameSubType Subtype;
    public bool isMyTurn = false;
    public bool diceShot = false;
    public string[] PlayersIDs;
    public bool gameSceneStarted = false;

    public bool Links = false;

    public bool isLocalMultiplayer = false;
    public bool isLocalPLay = false;
    public bool MadeLocalMove = false;
    public bool isPlayingWithComputer = false;
    public string avatarIndex = "0";
    // Game settings

    // 50, 100, 500, 2500, 10 000, 50 000, 100 000, 250 000, 500 000, 2 500 000, 5 000 000, 10 000 000, 15 000 000
    public int payoutCoins = 15000000;
    public bool JoinedByID = false;

    public void resetAllData()
    {
        avatarIndex = "0";
        readyPlayersCount = 1;
        gameSceneStarted = false;
        opponentsIDs = new List<string>() { null, null, null };
        opponentsAvatars = new List<Sprite>() { null, null, null };
        opponentsNames = new List<string>() { null, null, null };
        currentPlayersCount = 0;
        myTurnDone = false;
        opponentActive = true;
        readyToAnimateCoins = false;
        opponentDisconnected = false;
        offlinePlayerTurn = 1;
        offlinePlayer1OwnSolid = true;
        easyplayLogin = false;
        offlineMode = false;
        solidPoted = 0;
        stripedPoted = 0;
        messageTime = 0.0f;
        stopTimer = false;
        ownSolids = false;
        playersHaveTypes = false;
        firstBallTouched = false;
        wasFault = false;
        validPot = false;
        validPotsCount = 0;
        faultMessage = "";
        hasCueInHand = false;
        ballsStriked = false;
        ballTouchBeforeStrike = new List<String>();
        PlayersIDs = null;



        ballTouchedBand = 0;
        receivedInitPositions = false;
        isLocalMultiplayer = false;
        isPlayingWithComputer = false;
    }




    private GameManager() { }

    public static GameManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = new GameManager();
            }
            return instance;
        }
    }

    public void resetTurnVariables()
    {
        stopTimer = false;
    }

}
