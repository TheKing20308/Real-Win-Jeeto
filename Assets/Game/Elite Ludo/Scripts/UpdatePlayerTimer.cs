using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdatePlayerTimer : MonoBehaviour
{
    private float playerTime;
    public GameObject timerObject;
    public Image timer;
    private bool timeSoundsStarted;
    public AudioSource[] audioSources;
    public GameObject GUIController;
    public bool myTimer;
    public bool paused = false;

    // Use this for initialization
    void Start()
    {
        timer = gameObject.GetComponent<Image>();
    }

    /// <summary>
    /// This function is called when the object becomes enabled and active.
    /// </summary>
    void OnEnable()
    {
        timer = gameObject.GetComponent<Image>(); changed = false;
    }

    public void Pause()
    {
        paused = true;
        audioSources[0].Stop();
    }

    // Update is called once per frame
    void Update()
    {
        if (!paused)
            updateClock();
    }

    public void restartTimer()
    {
        paused = false;
        timer = gameObject.GetComponent<Image>();
        if (timer != null)
        timer.fillAmount = 1.0f;
        changed = false;
        GameManager.Instance.CountedSkip = false;
    }

    private bool changed = false;
    void OnDisable()
    {
        if (timer != null)
        {
            timer.fillAmount = 1.0f;
            paused = false;
            GameManager.Instance.CountedSkip = false;
            audioSources[0].Stop();
        }
    }

    private void updateClock()
    {
        float minus;

        playerTime = GameManager.Instance.playerTime;
        if (GameManager.Instance.offlineMode)
            playerTime = GameManager.Instance.playerTime + GameManager.Instance.cueTime;
        minus = 1.0f / playerTime * Time.deltaTime;

        timer.fillAmount -= minus;

        if (timer.fillAmount < 0.25f && !timeSoundsStarted)
        {
            audioSources[0].Play();
            timeSoundsStarted = true;
        }

        if (timer.fillAmount == 0)
        {

            Debug.Log("TIME 0");
            if (GameManager.Instance.isLocalPLay && !changed)
            {
                print(changed + " Heree");
                FindObjectOfType<LudoGameController>().NextPersonTurn();
                changed = true;

            }
            audioSources[0].Stop();
            GameManager.Instance.stopTimer = true;
            //      if (!GameManager.Instance.offlineMode)
            //
            //{
            if (!GameManager.Instance.CountedSkip && !GameManager.Instance.isLocalPLay)
            {
                print("Yess counting skiiops");
                transform.parent.parent.parent.parent.GetComponent<PlayerAvatarController>().CountSkips(myTimer);
        }
            if (myTimer && !GameManager.Instance.isLocalPLay)
                {
                    Debug.Log("Timer call finish turn");
                    GUIController.GetComponent<GameGUIController>().SendFinishTurn();
                }
                //PhotonNetwork.RaiseEvent(9, null, true, null);
       //     }
    //        else
   //         {
                GameManager.Instance.wasFault = true;
            //    GameManager.Instance.cueController.setTurnOffline(true);
  //          }




            //showMessage("You " + StaticStrings.runOutOfTime);

            /*if (!GameManager.Instance.offlineMode)
            {
                GameManager.Instance.cueController.setOpponentTurn();
            }*/

        }


    }
}
