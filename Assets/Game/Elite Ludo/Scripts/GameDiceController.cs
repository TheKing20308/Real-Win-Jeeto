using System.Collections;
using System.Collections.Generic;
using AssemblyCSharp;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
public class GameDiceController : MonoBehaviour
{

    public Sprite[] diceValueSprites;
    public GameObject arrowObject;
    public GameObject diceValueObject;
    public GameObject diceAnim;

    // Use this for initialization
    public bool isMyDice = false;
    public GameObject LudoController;
    public LudoGameController controller;
    public int player = 1;
    private Button button;

    public GameObject notInteractable;

    int diceIndex = 0;
    int nextSixAppearnce = 0;

    List<int> PriorityCheck;
    List<int> UpPriority = new List<int> { 0, 1, 2, 3, 4, 5, 11, 12, 13, 19, 20, 21, 22, 23, 24 };
    List<int> DownPriority = new List<int> { 26, 27, 28, 29, 30, 31, 37, 38, 39, 45, 46, 47, 48, 49, 50 };

    public int steps = 0;
    void Start()
    {
        nextSixAppearnce = Random.Range(3, 8);
        // button = GetComponent<Button>();
        // controller = LudoController.GetComponent<LudoGameController>();

        // button.interactable = false;
    }

    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    void Awake()
    {
        PriorityCheck = new List<int> { 0, 1, 2, 3, 4, 5, 19, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 31, 45, 46, 47, 48, 49, 50 };
        button = GetComponent<Button>();
        controller = LudoController.GetComponent<LudoGameController>();

        button.interactable = false;

        // if (GameManager.Instance.isLocalMultiplayer)
        // {
        //     if (!GameManager.Instance.isPlayingWithComputer)
        //         isMyDice = true;
        // }

    }

    public void SetDiceValue()
    {
        // Debug.Log("Set dice value called");
        // Debug.Log(" Bot " + steps);
        diceValueObject.GetComponent<Image>().sprite = diceValueSprites[steps - 1];
        diceValueObject.SetActive(true);
        diceAnim.SetActive(false);
        controller.gUIController.restartTimer();
        button.interactable = false;

        if (isMyDice)
            controller.HighlightPawnsToMove(player, steps);
        if (GameManager.Instance.currentPlayer.isBot)
        {
            controller.HighlightPawnsToMove(player, steps);
        }

    }



    public void EnableShot()
    {
        if (GameManager.Instance.currentPlayer.isBot)
        {
            GameManager.Instance.miniGame.BotTurn(false);
            if (GameManager.Instance.isLocalPLay)

            {
                button.interactable = true;
                GameManager.Instance.MadeLocalMove = false;
            }
            notInteractable.SetActive(false);
        }
        else
        {
            if (PlayerPrefs.GetInt("VIB", 0) == 0)
            {
                //   Debug.Log("Vibrate");
#if UNITY_ANDROID || UNITY_IOS

                Handheld.Vibrate();
#endif
            }
            else
            {
                //      Debug.Log("Vibrations OFF");
            }

            controller.gUIController.myTurnSource.Play();
            notInteractable.SetActive(false);
            button.interactable = true;
            arrowObject.SetActive(true);

        }
    }

    public void DisableShot()
    {
        notInteractable.SetActive(true);
        button.interactable = false;
        if (GameManager.Instance.isLocalPLay)

        {
            GameManager.Instance.MadeLocalMove = false;
        }
        arrowObject.SetActive(false);
    }

    public void EnableDiceShadow()
    {
        arrowObject.SetActive(false);
        notInteractable.SetActive(true);

        button.interactable = false;
        // AdjustPriority();
    }

    public void DisableDiceShadow()
    {

        notInteractable.SetActive(false);
        if (GameManager.Instance.isLocalPLay)

        {
            button.interactable = true;
            GameManager.Instance.MadeLocalMove = false;
        }
    }

    void AdjustPriority()
    {
        List<LudoPawnController> sortingUpPawn = new List<LudoPawnController>();
        List<LudoPawnController> sortingDownPawn = new List<LudoPawnController>();
        foreach (PlayerObject obj in controller.gUIController.playerObjects)
        {
            GameObject[] pawns = obj.pawns;
            foreach (GameObject objs in pawns)
            {
                // int SiblingIndex = objs.GetComponent<LudoPawnController>().SiblingIndex;
                // sortingUpPawn.Add(objs.GetComponent<LudoPawnController>());
                if (objs.GetComponent<LudoPawnController>().currentPosition != -1)
                {
                    int SiblingIndex = objs.GetComponent<LudoPawnController>().SiblingIndex;

                    if (SiblingIndex != -1 && UpPriority.Any(x => x == SiblingIndex))
                    {
                        sortingUpPawn.Add(objs.GetComponent<LudoPawnController>());
                    }
                    if (SiblingIndex != -1 && DownPriority.Any(x => x == SiblingIndex))
                    {
                        sortingDownPawn.Add(objs.GetComponent<LudoPawnController>());
                    }
                }

                // obj.GetComponent<LudoPawnController>().MoveBySteps(0);
            }
        }

        sortingUpPawn = sortingUpPawn.OrderBy(x => x.SiblingIndex).ToList();
        sortingDownPawn = sortingDownPawn.OrderBy(x => x.SiblingIndex).ToList();
        foreach (LudoPawnController obj in sortingUpPawn)
        {
            obj.transform.SetAsLastSibling();
            //    Debug.Log("sortingUpPawn pawn  " + obj.currentPosition);
        }
        foreach (LudoPawnController obj in sortingDownPawn)
        {
            obj.transform.SetAsFirstSibling();
            //      Debug.Log(" sortingDownPawn  pawn  " + obj.currentPosition);
        }
    }

    int aa = 0;
    int bb = 0;
    public void RollDice()
    {
        // if (isMyDice)
        // {

        //     controller.nextShotPossible = false;
        //     controller.gUIController.PauseTimers();
        //     button.interactable = false;
        //     Debug.Log("Roll Dice");
        //     arrowObject.SetActive(false);
        //     if(!GameManager.Instance.dropdownButton.activeSelf)
        //     {
        //         steps = Random.Range(1, 7);
        //         Debug.Log("Random Dice Rolling working");
        //     }
        //     else
        //     {
        //         if(PlayerPrefs.GetInt("Steps") == 0){
        //             steps = Random.Range(1, 7);
        //         }
        //         else{
        //             steps = PlayerPrefs.GetInt("Steps");
        //             Debug.Log("DropDown Roll Dice working");
        //         }

        //     }

        //     // steps = PlayerPrefs.GetInt("Steps");
        //     //  if (aa % 2 == 0) steps = 6;
        //     //  else steps = 2;
        //     //  aa++;
        //     //  Debug.Log(steps + "Roll Dice");
        //     //steps = Random.Range(1, 7);

        //     RollDiceStart(steps);
        //     string data = steps + ";" + controller.gUIController.GetCurrentPlayerIndex();
        //     PhotonNetwork.RaiseEvent((int)EnumGame.DiceRoll, data, true, null);

        //     Debug.Log("Value: " + steps);
        // }

        if (GameManager.Instance.isLocalPLay && !isMyDice)

            return;

        if (isMyDice)
        {
            steps = Random.Range(1, 7);

            if (steps == 6)
            {
                ResetPredictOutcome();
            }
            else if (diceIndex == nextSixAppearnce)
            {
                ResetPredictOutcome();
            }

            controller.nextShotPossible = false;
            controller.gUIController.PauseTimers();
            button.interactable = false;
            //    Debug.Log("Roll Dice");
            arrowObject.SetActive(false);



            if (steps == 6)
            {

                aa++;
                if (aa == 2)
                {
                    steps = Random.Range(1, 6);
                    aa = 0;
                }
            }
            else
            {
                aa = 0;
            }
            //     Debug.Log("aaa   " + aa);

            // if (aa % 2 == 0) steps = 6;
            // else steps = 2;
            // aa++;
            // steps = Random.Range(1, 7);

            RollDiceStart(steps);
            string data = steps + ";" + controller.gUIController.GetCurrentPlayerIndex();

            PhotonNetwork.RaiseEvent((int)EnumGame.DiceRoll, data, true, null);
            diceIndex++;
            // Debug.Log("Value: " + steps);
        }
    }

    void ResetPredictOutcome()
    {
        nextSixAppearnce = Random.Range(4, 8);
        steps = 6;
        diceIndex = 0;
    }

    public void RollDiceLocal()
    {
        if (!GameManager.Instance.isLocalPLay)
            return;
        GameManager.Instance.MadeLocalMove = false;
        RollDiceBot(Random.Range(1, 7));
    }

    public void RollDiceBotTTy()
    {

        RollDiceBot(Random.Range(1, 7));
    }

    public void RollDiceBot(int value)
    {

        controller.nextShotPossible = false;
        controller.gUIController.PauseTimers();

        //  Debug.Log("Roll Dice bot");

        // if (bb % 2 == 0) steps = 6;
        // else steps = 2;
        // bb++;

        steps = value;
        RollDiceStart(steps);


    }
  
    public void RollDiceStart(int steps)
    {

        GetComponent<AudioSource>().Play();
        this.steps = steps;
        diceValueObject.SetActive(false);
        diceAnim.SetActive(true);
        diceAnim.GetComponent<Animator>().Play("RollDiceAnimation");
    }
}
