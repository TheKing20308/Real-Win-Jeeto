using System.Collections;
using System.Collections.Generic;
using Photon;
using ExitGames.Client.Photon;
using ExitGames.Client.Photon.Chat;
using UnityEngine;

public class LudoGameController : PunBehaviour, IMiniGame
{

    public GameObject[] dice;
    public GameObject GameGui;
    public GameGUIController gUIController;
    public GameObject[] Pawns1;
    public GameObject[] Pawns2;
    public GameObject[] Pawns3;
    public GameObject[] Pawns4;

    public GameObject gameBoard;
    public GameObject gameBoardScaler;

    [HideInInspector]
    public int steps = 5;

    public bool nextShotPossible;
    private int SixStepsCount = 0;
    public int finishedPawns = 0;
    private int botCounter = 0;
    private List<GameObject> botPawns;
    public void HighlightPawnsToMove(int player, int steps)
    {

        botPawns = new List<GameObject>();

        gUIController.restartTimer();


        GameObject[] pawns = GameManager.Instance.currentPlayer.pawns;

        this.steps = steps;

        if (steps == 6)
        {
            nextShotPossible = true;
            SixStepsCount++;
            if (SixStepsCount == 3)
            {
                nextShotPossible = false;
                Unhighlight();
                if (GameGui != null)
                {
                    //gUIController.SendFinishTurn();
                    Invoke("sendFinishTurnWithDelay", 0.5f);
                }

                return;
            }
        }
        else
        {
            SixStepsCount = 0;
            nextShotPossible = false;
        }

        bool movePossible = false;

        int possiblePawns = 0;
        GameObject lastPawn = null;


        for (int i = 0; i < pawns.Length; i++)
        {
            bool possible = pawns[i].GetComponent<LudoPawnController>().CheckIfCanMove(steps);
            if (possible)
            {
                lastPawn = pawns[i];

                movePossible = true;
                possiblePawns++;
                botPawns.Add(pawns[i]);
            }
        }



        if (possiblePawns == 1)
        {
            if (GameManager.Instance.currentPlayer.isBot)
            {
                // if (!GameManager.Instance.isLocalPLay)
                StartCoroutine(movePawn(lastPawn, false));
            }
            else
            {
                lastPawn.GetComponent<LudoPawnController>().MakeMove();
                //StartCoroutine(MovePawnWithDelay(lastPawn));
            }

        }
        else
        {
            if (possiblePawns == 2 && lastPawn.GetComponent<LudoPawnController>().pawnInJoint != null)
            {
                if (GameManager.Instance.currentPlayer.isBot)
                {
                    if (!lastPawn.GetComponent<LudoPawnController>().mainInJoint)
                    {
                        if (!GameManager.Instance.isLocalMultiplayer)
                            StartCoroutine(movePawn(lastPawn, false));
                        // Debug.Log("AAA");
                    }
                    else
                    {
                        StartCoroutine(movePawn(lastPawn.GetComponent<LudoPawnController>().pawnInJoint, false));
                        //    Debug.Log("BBB");
                    }

                }
                else
                {
                    if (!lastPawn.GetComponent<LudoPawnController>().mainInJoint)
                    {
                        lastPawn.GetComponent<LudoPawnController>().MakeMove();
                    }
                    else
                    {
                        lastPawn.GetComponent<LudoPawnController>().pawnInJoint.GetComponent<LudoPawnController>().MakeMove();
                    }
                    //

                }



            }
            else
            {
                if (possiblePawns > 0 && GameManager.Instance.currentPlayer.isBot)
                {
                    GameObject intel = null;
                    if (!GameManager.Instance.isPlayingWithComputer && !GameManager.Instance.offlineMode)
                    {
                        for (int u = 0; u < botPawns.Count; u++)
                        {
                            if (botPawns[u].GetComponent<LudoPawnController>().IntelBotmove)
                            {
                                intel = botPawns[u];
                              break;
                            }
                        }
                    }
                    int bestScoreIndex = 0;
                    int bestScore = int.MinValue;
                    // Make bot move
                    for (int i = 0; i < botPawns.Count; i++)
                    {
                        int score = botPawns[i].GetComponent<LudoPawnController>().GetMoveScore(steps);
                        if (score > bestScore)
                        {
                            bestScore = score;
                            bestScoreIndex = i;
                        }
                    }
                    if ( intel == null)
                        StartCoroutine(movePawn(botPawns[bestScoreIndex], true));
                    else if (!GameManager.Instance.isLocalMultiplayer)
                    {
                        StartCoroutine(movePawn(intel, true));

                    }
                }

            }
        }




        if (!movePossible)
        {
            if (GameGui != null)
            {

                gUIController.PauseTimers();

                Invoke("sendFinishTurnWithDelay", 0.5f);
            }
        }
    }
    private IEnumerator MovePawnWithDelay(GameObject lastPawn)
    {
        yield return new WaitForSeconds(1.0f);

        lastPawn.GetComponent<LudoPawnController>().MakeMove();
    }

    public void sendFinishTurnWithDelay()
    {
        gUIController.SendFinishTurn();
    }

    public void Unhighlight()
    {
        for (int i = 0; i < Pawns1.Length; i++)
        {
            Pawns1[i].GetComponent<LudoPawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns2.Length; i++)
        {
            Pawns2[i].GetComponent<LudoPawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns3.Length; i++)
        {
            Pawns3[i].GetComponent<LudoPawnController>().Highlight(false);
        }

        for (int i = 0; i < Pawns4.Length; i++)
        {
            Pawns4[i].GetComponent<LudoPawnController>().Highlight(false);
        }

    }

    void IMiniGame.BotTurn(bool first)
    {
        if (first)
        {
            SixStepsCount = 0;
        }
        Invoke("RollDiceWithDelay", Random.Range(1.0f,5.0f));
        botCounter++;
        //throw new System.NotImplementedException();
    }


    public IEnumerator movePawn(GameObject pawn, bool delay)
    {
        if (delay)
        {
            yield return new WaitForSeconds(Random.Range(1.0f, 4.0f));
            botCounter++;
        }
        pawn.GetComponent<LudoPawnController>().MakeMovePC();
    }

    public void RollDiceWithDelay()
    {
        if (!GameManager.Instance.isLocalMultiplayer && !GameManager.Instance.offlineMode)
        {    // GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().RollDiceBot(GameManager.Instance.botDiceValues[(botCounter + 1) % GameManager.Instance.botDelays.Count]);
            if (GameManager.Instance.BotMoves1 == 100 || GameManager.Instance.BotMoves1 == 0)
            {
                GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().RollDiceBot(UnityEngine.Random.Range(1, 7));
            }
            else if (GameManager.Instance.IntelPlayerBot == GameManager.Instance.currentPlayer.pawns[0].GetComponent<LudoPawnController>().GetPlayerIndex())
            {

                GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().RollDiceBot(GameManager.Instance.BotMoves1);
                if (GameManager.Instance.BotMoves1 != 100 && GameManager.Instance.BotMoves2 != 100)
                {
                    GameManager.Instance.BotMoves1 = GameManager.Instance.BotMoves2;
                    GameManager.Instance.BotMoves2 = 100;
                    return;
                }
                else
                if (GameManager.Instance.BotMoves1 != 100 && GameManager.Instance.BotMoves3 != 100)
                {
                    GameManager.Instance.BotMoves1 = GameManager.Instance.BotMoves3;
                    GameManager.Instance.BotMoves3 = 100;
                    return;
                }
                else
                {
                    GameManager.Instance.BotMoves1 = 100;
                    GameManager.Instance.BotMoves2 = 100;
                    GameManager.Instance.BotMoves3 = 100;
                }

            }
            else
            {
                GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().RollDiceBot(UnityEngine.Random.Range(1, 7));
            }
        }
        else
        if (GameManager.Instance.isPlayingWithComputer && GameManager.Instance.offlineMode)
        {
            int u = Random.Range(1, 7); print("Rolloing Computer vs");
            GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().RollDiceBot(u);
        }
    }


    void IMiniGame.CheckShot()
    {
        throw new System.NotImplementedException();
    }

    void IMiniGame.setMyTurn()
    {
        SixStepsCount = 0;
        GameManager.Instance.diceShot = false;
        dice[0].GetComponent<GameDiceController>().EnableShot();
    }

    void IMiniGame.setOpponentTurn()
    {
        SixStepsCount = 0;
        GameManager.Instance.diceShot = false;
        dice[0].GetComponent<GameDiceController>().DisableShot();
        Unhighlight();
    }



    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    void Awake()
    {
        GameManager.Instance.miniGame = this;
        PhotonNetwork.OnEventCall += this.OnEvent;
    }

    // Use this for initialization
    void Start()
    {
        // Scale gameboard


        float scalerWidth = gameBoardScaler.GetComponent<RectTransform>().rect.size.x;
        float boardWidth = gameBoard.GetComponent<RectTransform>().rect.size.x;

        gameBoard.GetComponent<RectTransform>().localScale = new Vector2(scalerWidth / boardWidth, scalerWidth / boardWidth);

        gUIController = GameGui.GetComponent<GameGUIController>();


    }

    public void NextPersonTurn()
    {
        if (GameManager.Instance.isLocalPLay)
        {
            Invoke("sendFinishTurnWithDelay", 1.5f);

        }
    }

    void OnDestroy()
    {
        PhotonNetwork.OnEventCall -= this.OnEvent;
    }

    private void OnEvent(byte eventcode, object content, int senderid)
    {
        Debug.Log("Received event Ludo: " + eventcode);

        if (eventcode == (int)EnumGame.DiceRoll)
        {

            gUIController.PauseTimers();
            string[] data = ((string)content).Split(';');
            steps = int.Parse(data[0]);
            int pl = int.Parse(data[1]);

            GameManager.Instance.playerObjects[pl].dice.GetComponent<GameDiceController>().RollDiceStart(steps);
        }
        else if (eventcode == (int)EnumGame.PawnMove)
        {
            string[] data = ((string)content).Split(';');
            int index = int.Parse(data[0]);
            int pl = int.Parse(data[1]);
            steps = int.Parse(data[2]);
            GameManager.Instance.playerObjects[pl].pawns[index].GetComponent<LudoPawnController>().MakeMovePC();
        }
        else if (eventcode == (int)EnumGame.PawnRemove)
        {
            string data = (string)content;
            string[] messages = data.Split(';');
            int index = int.Parse(messages[1]);
            int playerIndex = int.Parse(messages[0]);

            GameManager.Instance.playerObjects[playerIndex].pawns[index].GetComponent<LudoPawnController>().GoToInitPosition(false);
        }

    }
}
