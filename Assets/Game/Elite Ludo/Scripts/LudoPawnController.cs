using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LudoPawnController : MonoBehaviour
{
    public AudioSource killedPawnSound;
    public AudioSource inHomeSound;
    public GameObject pawnTop;
    public GameObject pawnTopMultiple;

    public GameObject dice;
    private GameDiceController diceController;
    public GameObject pawnInJoint = null;
    public bool mainInJoint = false;
    public GameObject highlight;
    public bool isOnBoard = false;
    public bool isBot = false;

    private LudoGameController ludoController;

    public RectTransform[] path;
    public int currentPosition = -1;

    private float singlePathSpeed = 0.13f;
    private float MoveToStartPositionSpeed = 0.25f;
    private RectTransform rect;
    private Vector3 initScale;
    public bool IntelBotmove = false;

    public bool isMinePawn = false;

    public int index;
    public bool myTurn;

    [HideInInspector]
    private int playerIndex;
    public AudioSource[] sound;
    public Vector2 initPosition;
    private bool canMakeJoint = false;

    public PlayerAvatarController PAC;
    private int currentAudioSource = 0;
    void Start()
    {


        //Debug.Log("Game mode: " + GameManager.Instance.mode.ToString());
        diceController = dice.GetComponent<GameDiceController>();
       PAC = diceController.gameObject.transform.parent.GetComponent<PlayerAvatarController>();
        ludoController = GameObject.Find("GameSpecific").GetComponent<LudoGameController>();
        rect = GetComponent<RectTransform>();
        initScale = rect.localScale;
        initPosition = rect.anchoredPosition;

        GetComponent<Button>().interactable = false;

        if (GameManager.Instance.mode == MyGameMode.Master)
        {
            canMakeJoint = false;
        }
        if (!GameManager.Instance.offlineMode && !GameManager.Instance.isLocalMultiplayer && !GameManager.Instance.isLocalPLay)
            AddInstantly(0);
    }

    public void setPlayerIndex(int index)
    {
        this.playerIndex = index;
        if (GameManager.Instance.type == MyGameType.FourPlayer)
        {
            if (playerIndex == 0)
                BoardPos = 41;


            if (playerIndex == 1)
                BoardPos = 2;


            if (playerIndex == 2)
                BoardPos = 15;
            if (playerIndex == 3)
                BoardPos = 28;

        }
        if (GameManager.Instance.type == MyGameType.TwoPlayer)
        {
            if (playerIndex == 0)
                BoardPos = 2;


            if (playerIndex == 1)
                BoardPos = 28;



        }
    }
    public int GetPlayerIndex()
    {
        return this.playerIndex;
    }

    public int BoardPos = 0;

    public void setBoardPos(int e)
    {

        BoardPos = e;
        print(BoardPos + " Board {os");
    }

    private bool YesHome = false;
    public bool CheckHomePossibilty()
    {
        YesHome = false;
        if (isBot)
        {
            int steps = (path.Length - 1) - CurrentPosition;
            if (steps > 0 && steps < 18)
            {
                YesHome = true;
                IntelBotmove = true;
                // print("Home 0 0 yes");
                if (steps <= 6)
                {
                    GameManager.Instance.BotMoves1 = steps;
                    GameManager.Instance.BotMoves2 = 100;

                    GameManager.Instance.BotMoves3 = 100;

                }
                if (steps > 6 && steps < 12)
                {
                    GameManager.Instance.BotMoves1 = 6;
                    GameManager.Instance.BotMoves2 = steps - 6;

                    GameManager.Instance.BotMoves3 = 100;

                }

                if (steps >= 12 && steps < 18)
                {
                    GameManager.Instance.BotMoves1 = 6;
                    GameManager.Instance.BotMoves2 = 6;

                    GameManager.Instance.BotMoves3 = steps - 12;

                }
            }
        }
        else
        {
            GameManager.Instance.BotMoves1 = 100;
            GameManager.Instance.BotMoves2 = 100;
            YesHome = false;
            GameManager.Instance.BotMoves3 = 100;

        }

        return YesHome;
    }

    public void Highlight(bool active)
    {
        //
        if (GameManager.Instance.currentPlayer.isBot)
        {
            if (active)
            {


                GetComponent<Button>().interactable = false;
                GetComponent<Button>().enabled = false;

                if (GameManager.Instance.isLocalPLay)
                {
                    GetComponent<Button>().interactable = true;
                    GetComponent<Button>().enabled = true;
                }
                //gameObject.transform.SetAsLastSibling();
                highlight.SetActive(true);
                rect.localScale = new Vector3(initScale.x, initScale.y, initScale.z);
            }
            else
            {
                GetComponent<Button>().interactable = false;
                GetComponent<Button>().enabled = false;
                highlight.SetActive(false);
                if (currentPosition >= 0)
                {
                    CheckIfPawnInJoint();
                }
            }

            // gameObject.transform.SetAsFirstSibling();
        }
        else
        {
            if (active)
            {

                GetComponent<Button>().interactable = true;
                GetComponent<Button>().enabled = true;
                //gameObject.transform.SetAsLastSibling();
                highlight.SetActive(true);
                rect.localScale = new Vector3(initScale.x, initScale.y, initScale.z);

            }
            else
            {
                GetComponent<Button>().interactable = false;
                GetComponent<Button>().enabled = false;
                highlight.SetActive(false);
                if (currentPosition >= 0)
                {
                    CheckIfPawnInJoint();
                }

                //gameObject.transform.SetAsFirstSibling();

            }
        }

    }

    public int GetMoveScore(int steps)
    {
        if (steps == 6 && !isOnBoard)
        {
            return 300;
        }
        else
        {
            if (isOnBoard)
            {
                if (GameManager.Instance.mode == MyGameMode.Quick && GameManager.Instance.currentPlayer.canEnterHome)
                {
                    return 500;
                }

                if (pawnInJoint != null)
                {
                    steps = steps / 2;
                }

                // finish
                if (currentPosition + steps == path.Length - 1)
                {
                    return 1000;
                }

                // safe place
                if (!path[currentPosition].GetComponent<LudoPathObjectController>().isProtectedPlace && path[currentPosition + steps].GetComponent<LudoPathObjectController>().isProtectedPlace)
                {
                    return 400;
                }

                // joint
                LudoPathObjectController pathControl = path[currentPosition + steps].GetComponent<LudoPathObjectController>();
                if (pathControl.pawns.Count > 0)
                {
                    for (int i = 0; i < pathControl.pawns.Count; i++)
                    {
                        if (pathControl.pawns[i].GetComponent<LudoPawnController>().playerIndex == playerIndex)
                        {
                            return 700;
                        }
                    }
                }

                if (pathControl.pawns.Count > 0)
                {
                    for (int i = 0; i < pathControl.pawns.Count; i++)
                    {
                        if (pathControl.pawns[i].GetComponent<LudoPawnController>().playerIndex != playerIndex)
                        {
                            return 500;
                        }
                    }
                }

                if (path[currentPosition].GetComponent<LudoPathObjectController>().isProtectedPlace)
                {
                    return -100;
                }

            }
        }
        return 0;
    }

    public bool CheckIfCanMove(int steps)
    {
        if (steps == 6 && !isOnBoard)
        {
            Highlight(true);
            return true;
        }
        else
        {
            if (isOnBoard)
            {

                if (pawnInJoint != null)
                {
                    if (steps % 2 != 0)
                        return false;
                    else
                    {
                        steps = steps / 2;
                    }
                }

                if (currentPosition + steps < path.Length)
                {
                    LudoPathObjectController pathControl = path[currentPosition + steps].GetComponent<LudoPathObjectController>();

//                    Debug.Log("pawns count on destination: " + pathControl.pawns.Count);
                    if (pathControl.pawns.Count == 2 && pathControl.pawns[0].GetComponent<LudoPawnController>().pawnInJoint != null)
                    {
                        Debug.Log("im inside");
                        if (pawnInJoint != null)
                        {
                            Debug.Log("return true");
                            if (pathControl.pawns[0].GetComponent<LudoPawnController>().playerIndex != playerIndex)
                            {
                                Highlight(true);
                                return true;
                            }
                            else return false;
                        }
                        else
                        {
                            return false;
                        }
                    }
                }


                for (int i = 1; i < steps + 1; i++)
                {
                    if (currentPosition + i < path.Length)
                    {
//                        Debug.Log("check count: " + path[currentPosition + i].GetComponent<LudoPathObjectController>().pawns.Count);
                        if (path[currentPosition + i].GetComponent<LudoPathObjectController>().pawns.Count > 1)
                        {
                            Debug.Log("more than 1");
                            if (path[currentPosition + i].GetComponent<LudoPathObjectController>().pawns[0].GetComponent<LudoPawnController>().pawnInJoint != null)
                            {
                                Debug.Log("blockade");
                                return false;
                            }
                        }
                    }
                }


                if (currentPosition == path.Length - 1 || currentPosition + steps > path.Length - 1)
                {
                    return false;
                }

                if ((currentPosition + steps > path.Length - 1 - 6) &&
                    GameManager.Instance.needToKillOpponentToEnterHome &&
                !GameManager.Instance.playerObjects[playerIndex].canEnterHome)
                {
                    return false;
                }


                Highlight(true);
                return true;
            }
        }
        return false;
    }

    public void GoToStartPosition()
    {
        rect.SetAsLastSibling();
        currentPosition = 0;
        isOnBoard = true;
        StartCoroutine(MoveDelayed(0, initPosition, path[currentPosition].anchoredPosition, MoveToStartPositionSpeed, true, true));

        if (pawnInJoint != null)
        {
            pawnInJoint.GetComponent<LudoPawnController>().pawnInJoint = null;
            pawnInJoint.GetComponent<LudoPawnController>().GoToStartPosition();
            pawnInJoint = null;
        }
    }

    public void GoToInitPosition(bool callEnd)
    {
        killedPawnSound.Play();
        rect.SetAsLastSibling();
        isOnBoard = false;
        currentPosition = -1;
        pawnTop.SetActive(true);
        pawnTopMultiple.SetActive(false);
        StartCoroutine(MoveDelayed(0, rect.anchoredPosition, initPosition, MoveToStartPositionSpeed, true, false));
        if (pawnInJoint != null)
        {
            pawnInJoint.GetComponent<LudoPawnController>().pawnInJoint = null;
            pawnInJoint.GetComponent<LudoPawnController>().GoToInitPosition(true);
            pawnInJoint = null;
        }
        //path[currentPosition].GetComponent<LudoPathObjectController>().RemovePawn(this.gameObject);
    }

    public void MoveBySteps(int steps)
    {
        LudoPathObjectController controller = path[currentPosition].GetComponent<LudoPathObjectController>();

        controller.RemovePawn(this.gameObject);

        RepositionPawns(controller.pawns.Count, currentPosition);

        rect.SetAsLastSibling();
        PAC.Score +=steps;



        for (int i = 0; i < steps; i++)
        {
            bool last = false;
            if (i == steps - 1) last = true;

            currentPosition++;
            StartCoroutine(MoveDelayed(i, path[currentPosition - 1].anchoredPosition, path[currentPosition].anchoredPosition, singlePathSpeed, last, true));
        }
    }

    void CheckIfPawnInJoint()
    {
        LudoPathObjectController pathController = path[currentPosition].GetComponent<LudoPathObjectController>();

        if (pathController.pawns.Count > 1)
        {
            RepositionPawns(pathController.pawns.Count, currentPosition);
        }
    }

    public int CurrentPosition
    {
        get
        {
            return currentPosition;
        }
    }

    public void MakeMove()
    {
        Debug.Log("Make move button");
        if (!isMinePawn && GameManager.Instance.isLocalPLay)
            return;
        string data = index + ";" + ludoController.gUIController.GetCurrentPlayerIndex() + ";" + ludoController.steps;

        PhotonNetwork.RaiseEvent((int)EnumGame.PawnMove, data, true, null);

        if (pawnInJoint != null) ludoController.steps /= 2;
        GameManager.Instance.diceShot = true;
        myTurn = true;
        ludoController.gUIController.PauseTimers();
        ludoController.Unhighlight();



        if (!isOnBoard)
        {
            GoToStartPosition();
        }
        else
        {
            if (pawnInJoint != null)
            {
                pawnInJoint.GetComponent<LudoPawnController>().MoveBySteps(ludoController.steps);
            }
            MoveBySteps(ludoController.steps);
        }

        isOnBoard = true;
    }

    public void MakeMovePC()
    {
        if (GameManager.Instance.isLocalPLay)
        { MakeLocalMove();        return; }

            if (pawnInJoint != null) ludoController.steps /= 2;

        myTurn = false;
        ludoController.gUIController.PauseTimers();

        if (!isOnBoard)
        {
            GoToStartPosition();
        }
        else
        {
            if (pawnInJoint != null)
            {
                pawnInJoint.GetComponent<LudoPawnController>().MoveBySteps(ludoController.steps);
            }
            MoveBySteps(ludoController.steps);
        }

        isOnBoard = true;
    }
    public void MakeLocalMove()
    {
        if (GameManager.Instance.isLocalPLay)
        {
            if (GameManager.Instance.MadeLocalMove)
                return;
            else
                GameManager.Instance.MadeLocalMove = true;

            ludoController.Unhighlight();
        }
        if (pawnInJoint != null) ludoController.steps /= 2;

        myTurn = false;
        ludoController.gUIController.PauseTimers();

        if (!isOnBoard)
        {
            GoToStartPosition();
        }
        else
        {
            if (pawnInJoint != null)
            {
                pawnInJoint.GetComponent<LudoPawnController>().MoveBySteps(ludoController.steps);
            }
            MoveBySteps(ludoController.steps);
        }

        isOnBoard = true;
    }


    private IEnumerator MoveDelayed(int delay, Vector2 from, Vector2 to, float time, bool last, bool playSound)
    {

        rect.localScale = new Vector3(initScale.x * 1.2f, initScale.y * 1.2f, initScale.z);




        yield return new WaitForSeconds(delay * singlePathSpeed);

        if (playSound)
        {
            sound[currentAudioSource % sound.Length].Play();
            currentAudioSource++;
        }

        if (last)
        {
            iTween.ValueTo(gameObject, iTween.Hash("from", from, "to", to, "time", time, "easetype", iTween.EaseType.easeOutExpo, "onupdate", "UpdatePosition", "oncomplete", "MoveFinished"));
        }
        else
        {
            iTween.ValueTo(gameObject, iTween.Hash("from", from, "to", to, "time", time, "easetype", iTween.EaseType.easeOutExpo, "onupdate", "UpdatePosition"));
        }

    }

    private void resetScale()
    {
        rect.localScale = initScale;
    }

    private void MoveFinished()
    {
        resetScale();

        if (currentPosition >= 0)
        {
            bool canSendFinishTurn = true;

            LudoPathObjectController pathController = path[currentPosition].GetComponent<LudoPathObjectController>();


            pathController.AddPawn(this.gameObject);


            if (pawnInJoint == null || (pawnInJoint != null && mainInJoint))
            {



                Debug.Log("Main in joint");
                int otherCount = pathController.pawns.Count;

                Debug.Log("Pawns count: " + otherCount);



                if (!pathController.isProtectedPlace)
                {
                    if (otherCount > 1) // Check and remove opponent pawns to home
                    {
                        for (int i = otherCount - 2; i >= 0; i--)
                        {
                            if (pathController.pawns[i].GetComponent<LudoPawnController>().playerIndex != playerIndex)
                            {
                                int color = pathController.pawns[i].GetComponent<LudoPawnController>().playerIndex;
                                // Coutn pawns in this color
                                int pawnsInColor = 0;
                                for (int k = 0; k < otherCount; k++)
                                {
                                    if (pathController.pawns[k].GetComponent<LudoPawnController>().playerIndex == color)
                                    {
                                        pawnsInColor++;
                                    }
                                }

                                if (pawnsInColor == 1 || canMakeJoint)
                                {
                                    // Killed opponent pawn, Additional turn
                                    ludoController.nextShotPossible = true;
                                    GameManager.Instance.playerObjects[playerIndex].canEnterHome = true;
                                    GameManager.Instance.playerObjects[playerIndex].homeLockObjects.SetActive(false);
                                    // Move killed pawn to start position and remove from list
                                  PlayerAvatarController OtherPAC =     pathController.pawns[i].GetComponent<LudoPawnController>().PAC;
                                    LudoPawnController OtherLPC = pathController.pawns[i].GetComponent<LudoPawnController>();
                                    killedPawnSound.Play();
                                    if (isBot)
                                    {
                                        FindObjectOfType<BotIntel>().GetSteps();
                                    }
                                    OtherPAC.Score -= OtherLPC.currentPosition;
                                    OtherPAC.ScoreText.text = OtherPAC.Score.ToString();
                                    OtherLPC.AddInstantly(0); 

                                    pathController.RemovePawn(pathController.pawns[i]);
                                }
                            }
                            else
                            {
                                if (canMakeJoint && pawnInJoint == null)
                                {
                                    Debug.Log("Joint");
                                    pawnInJoint = pathController.pawns[i];
                                    mainInJoint = true;
                                    pathController.pawns[i].GetComponent<LudoPawnController>().mainInJoint = false;
                                    pathController.pawns[i].GetComponent<LudoPawnController>().pawnInJoint = this.gameObject;
                                    pawnTop.SetActive(false);
                                    pawnTopMultiple.SetActive(true);
                                    pathController.pawns[i].GetComponent<LudoPawnController>().pawnTop.SetActive(false);
                                    pathController.pawns[i].GetComponent<LudoPawnController>().pawnTopMultiple.SetActive(true);
                                }
                            }
                        }

                    }
                }
                else
                {
                    if (pawnInJoint != null)
                    {
                        canSendFinishTurn = false;
                        pawnTop.SetActive(true);
                        pawnTopMultiple.SetActive(false);
                        pawnInJoint.GetComponent<LudoPawnController>().pawnTop.SetActive(true);
                        pawnInJoint.GetComponent<LudoPawnController>().pawnTopMultiple.SetActive(false);

                        pawnInJoint.GetComponent<LudoPawnController>().pawnInJoint = null;
                        pawnInJoint = null;
                    }
                }

                otherCount = pathController.pawns.Count;

                if (pawnInJoint == null)
                    RepositionPawns(otherCount, currentPosition);

                if (currentPosition == path.Length - 1)
                {
                    inHomeSound.Play();
                    PAC.Score += 50;
                }

                if ((myTurn || GameManager.Instance.currentPlayer.isBot) && currentPosition == path.Length - 1)
                {
                    Debug.Log("FINISHSSSS");

                    GameManager.Instance.currentPlayer.finishedPawns++;
                    //ludoController.finishedPawns++;
                    if (GameManager.Instance.mode == MyGameMode.Quick)
                    {
                        if (GameManager.Instance.currentPlayer.finishedPawns == 1)
                        {
                            ludoController.gUIController.FinishedGame();
                            return;
                        }
                    }
                    else
                    {
                        if (GameManager.Instance.currentPlayer.finishedPawns == 4)
                        {
                            ludoController.gUIController.FinishedGame();
                            return;
                        }
                    }
                    ludoController.nextShotPossible = true;
                }

                if (  ((myTurn && GameManager.Instance.diceShot) || GameManager.Instance.currentPlayer.isBot) && canSendFinishTurn)
                {
                    if (ludoController.nextShotPossible)
                    {
                        GameManager.Instance.currentPlayer.dice.GetComponent<GameDiceController>().EnableShot();
                        ludoController.gUIController.restartTimer();
                    }
                    else
                    {
                        Debug.Log("move finished call finish turn");
                        StartCoroutine(CheckTurnDelay());
                    }
                }
                else
                {
                    ludoController.gUIController.restartTimer();
                }
            }
        }


      
        PAC.ScoreText.text = PAC.Score.ToString();

    }


    private IEnumerator CheckTurnDelay()
    {
        Debug.Log("   isBot               " + GameManager.Instance.currentPlayer.isBot);
        if (GameManager.Instance.currentPlayer.isBot)
        {
            ludoController.Unhighlight();
        }
        yield return new WaitForSeconds(1.0f);
        ludoController.gUIController.SendFinishTurn();

    }

    private void RepositionPawns(int otherCount, int currentPosition)
    {

        LudoPathObjectController pathController = path[currentPosition].GetComponent<LudoPathObjectController>();

        float scale = 0.8f;
        float offset = 20f / otherCount;
        float startPos = 0;

        startPos = (-offset / 2) * otherCount + offset / 2;
        scale = 1 - 0.05f * otherCount + 0.05f;

        /*if (otherCount == 1)
        {
            startPos = 0;
            scale = 1;
        }
        else if (otherCount == 2)
        {
            startPos = -offset / 2;
            scale = 0.95f;
        }
        else if (otherCount == 3)
        {
            startPos = -offset;
            scale = 0.85f;
        }
        else if (otherCount == 4)
        {
            startPos = -offset * 1.5f;
            scale = 0.75f;
        }*/


        // Get my pawns, push on top of stack
        List<int> orderPawns = new List<int>();

        for (int i = 0; i < otherCount; i++)
        {
            if (pathController.pawns[i].GetComponent<LudoPawnController>().playerIndex == GameManager.Instance.myPlayerIndex)
            {
                orderPawns.Add(i);
            }
            else
            {
                orderPawns.Insert(0, i);
            }
        }
        // Reposition pawns if more than 1 on spot
        for (int i = 0; i < otherCount; i++)
        {
            RectTransform rT = pathController.pawns[orderPawns[i]].GetComponent<RectTransform>();
            pathController.pawns[orderPawns[i]].GetComponent<RectTransform>().anchoredPosition = new Vector2(
                path[currentPosition].GetComponent<RectTransform>().anchoredPosition.x + startPos + i * offset,
                path[currentPosition].GetComponent<RectTransform>().anchoredPosition.y);
            pathController.pawns[orderPawns[i]].GetComponent<RectTransform>().localScale = new Vector2(initScale.x * scale, initScale.y * scale);

            pathController.pawns[orderPawns[i]].GetComponent<RectTransform>().SetAsLastSibling();

        }


        // }
    }

    private void UpdatePosition(Vector2 pos)
    {
        rect.anchoredPosition = pos;
    }


    // Update is called once per frame
    void Update()
    {

    }

    public int SiblingIndex
    {
        get
        {
            return path[CurrentPosition].GetComponent<LudoPathObjectController>().SiblingIndex;
        }
    }

    public void AddInstantly(int currentPos)
    {
        currentPosition = currentPos;
        if (currentPosition != -1)
        {
            isOnBoard = true;
            rect.anchoredPosition = path[CurrentPosition].anchoredPosition;
        
        }
        LudoPathObjectController pathController = path[currentPosition].GetComponent<LudoPathObjectController>();


        pathController.AddPawn(this.gameObject);
      int   otherCount = pathController.pawns.Count;

        
            RepositionPawns(otherCount, currentPosition);
    }
}
