using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerAvatarController : MonoBehaviour
{

    public GameObject Name;
    public GameObject Avatar;
    public GameObject Timer;
    public GameObject leftRoomObject;
    public GameObject MainObject;
    public GameObject Crown;
    public GameObject Position;
    public Sprite[] PositionSprites;
    public int Score = 0;
    public Text ScoreText;
    public GameObject Skips;
    [HideInInspector]
    public bool Active = true;
    [HideInInspector]
    public bool finished = false;
    public int skipsCOunt = 0;
    public AudioSource PlayerLeftRoomAudio;
    // Use this for initialization
    void Start()
    {
        Skips.SetActive(true);
        skipsCOunt = 0;
        Skips.transform.GetChild(0).GetComponent<Image>().color = Color.green;
        Skips.transform.GetChild(1).GetComponent<Image>().color = Color.green;
        Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
        //   Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
        //   Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
        Skips.transform.GetChild(1).gameObject.SetActive(true);
        Skips.transform.GetChild(2).gameObject.SetActive(true);
        //   Skips.transform.GetChild(3).gameObject.SetActive(true);
        //   Skips.transform.GetChild(4).gameObject.SetActive(true);

        Skips.transform.GetChild(0).gameObject.SetActive(true);
        if (GameManager.Instance.isLocalPLay || GameManager.Instance.isLocalMultiplayer)
      
        Skips.SetActive(false);
        //  Skips.SetActive(false);
    }



    #region Skips

    public void ShowSkips(bool mySkip)
    {
        if (GameManager.Instance.isLocalPLay || GameManager.Instance.isPlayingWithComputer)
            return;

        Skips.SetActive(true);
        GameManager.Instance.CountedSkip = true;
        if (skipsCOunt == 0)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            //   Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //   Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //    Skips.transform.GetChild(3).gameObject.SetActive(true);
            //    Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 1)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            // Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //  Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //   Skips.transform.GetChild(3).gameObject.SetActive(true);
            //   Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 2)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            //  Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //  Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //  Skips.transform.GetChild(3).gameObject.SetActive(true);
            //  Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 3)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
            //  Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //  Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //  Skips.transform.GetChild(3).gameObject.SetActive(true);
            //   Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
            if (mySkip)
            {
                finished = false;
                FindObjectOfType<GameGUIController>().LostGame();
            }
            else
            {

                GameManager.Instance.WonBySkip = true;

                FindObjectOfType<GameGUIController>().WonGame();
            }
        }
        /*   if (skipsCOunt == 4)
           {
               Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(3).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
               Skips.transform.GetChild(1).gameObject.SetActive(true);
               Skips.transform.GetChild(2).gameObject.SetActive(true);
               Skips.transform.GetChild(3).gameObject.SetActive(true);
               Skips.transform.GetChild(4).gameObject.SetActive(true);

               Skips.transform.GetChild(0).gameObject.SetActive(true);
           }
           if (skipsCOunt == 5)
           {
               Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(3).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(4).GetComponent<Image>().color = Color.red;
               Skips.transform.GetChild(1).gameObject.SetActive(true);
               Skips.transform.GetChild(2).gameObject.SetActive(true);
               Skips.transform.GetChild(3).gameObject.SetActive(true);
               Skips.transform.GetChild(4).gameObject.SetActive(true);

               Skips.transform.GetChild(0).gameObject.SetActive(true);
        */




        //    CancelInvoke("Hide");
        //  Invoke("Hide", 3.0f);
    }


   
    public void CountSkips(bool mySkip)
    {
        print(skipsCOunt + " " + "Yes Counting");
        if (GameManager.Instance.isLocalPLay  || GameManager.Instance.isLocalMultiplayer)
            return;
        Skips.SetActive(true);
        skipsCOunt++; GameManager.Instance.CountedSkip = true;
        print(skipsCOunt  +  " " + "Yes Counting");
        if (skipsCOunt == 0)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //   Skips.transform.GetChild(3).gameObject.SetActive(true);
            //   Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 1)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //   Skips.transform.GetChild(3).gameObject.SetActive(true);
            //   Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 2)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.green;
            //   Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //   Skips.transform.GetChild(3).gameObject.SetActive(true);
            //   Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 3)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
            //    Skips.transform.GetChild(3).GetComponent<Image>().color = Color.green;
            //    Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            //   Skips.transform.GetChild(3).gameObject.SetActive(true);
            //  Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
            if (mySkip)
            {
                finished = false;
                print("lostgame by skip");
                //    FindObjectOfType<GameGUIController>().LostGame();
                PlayerLeftRoom(false); 
            }
            else
            {

                GameManager.Instance.WonBySkip = true;
                print("won by skip");
               PlayerLeftRoom(true);
            
                //    FindObjectOfType<GameGUIController>().GameOver();
            }
        }
        /*
        if (skipsCOunt == 4)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(3).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(4).GetComponent<Image>().color = Color.green;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            Skips.transform.GetChild(3).gameObject.SetActive(true);
            Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (skipsCOunt == 5)
        {
            Skips.transform.GetChild(0).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(2).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(3).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(4).GetComponent<Image>().color = Color.red;
            Skips.transform.GetChild(1).gameObject.SetActive(true);
            Skips.transform.GetChild(2).gameObject.SetActive(true);
            Skips.transform.GetChild(3).gameObject.SetActive(true);
            Skips.transform.GetChild(4).gameObject.SetActive(true);

            Skips.transform.GetChild(0).gameObject.SetActive(true);
        */




        // CancelInvoke("Hide");
        //  Invoke("Hide", 3.0f);
    }

    void Hide()
    {
        Skips.SetActive(false);
    }
    #endregion

    public void PlayerLeftRoom(bool won)
    {
        if (!finished)
        {
            PlayerLeftRoomAudio.Play();
          //  Active = false;
            Debug.Log("Left the room");
         //   Name.GetComponent<Text>().text = "";
            MainObject.transform.localScale = new Vector2(0.8f, 0.8f);
            leftRoomObject.SetActive(true);
        }
        FindObjectOfType<GameGUIController>().requiredToStart-- ;
        FindObjectOfType<GameGUIController>().ActivePlayersInRoom-- ;
        FindObjectOfType<GameGUIController>().CheckPlayersIfShouldFinishGame(won);
    }

    public void PlayerFinishedGame()
    {

    }

    public void setPositionSprite(int index)
    {
        Position.SetActive(true);
        Position.GetComponent<Image>().sprite = PositionSprites[index - 1];
    }
}
