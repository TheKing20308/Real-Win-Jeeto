using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AssemblyCSharp;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class LocalMultiplayer : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        MyOwn1.text = GameManager.Instance.nameMy;
        LocalPlayerName1.text = "Player 1";
        LocalPlayerName2.text = "Player 2";
        LocalPlayerName3.text = "Player 3";
    }

    

    public void SelectPlayers(int dex)
    {
        LocalT1isOn = false; LocalT2isOn = false; LocalT3isOn = false;
        switch (dex)
        {
            case 1:
                LocalT1isOn = true; NumberofLocalPlayer = 2;
                LocalPlayerName2.gameObject.SetActive(false); LocalPlayerName3.gameObject.SetActive(false);
                break;
    
            case 2:
                LocalPlayerName2.gameObject.SetActive(true); LocalPlayerName3.gameObject.SetActive(false);
                LocalT2isOn = true; NumberofLocalPlayer = 3;
                break;
            case 3:
                LocalPlayerName3.gameObject.SetActive(true); LocalPlayerName2.gameObject.SetActive(true);
                LocalT3isOn = true; NumberofLocalPlayer = 4;
                break;
        }
    }

    #region LocalMultiplayer

    public int NumberofLocalPlayer = 0;
    private string Opponet1, Opponet2, Opponet3;
    public bool LocalT1isOn, LocalT2isOn, LocalT3isOn;
    public InputField MyOwn1, LocalPlayerName1, LocalPlayerName2, LocalPlayerName3;
    public void LocalMultiplayer4()
    {
        if (!LocalT1isOn && !LocalT2isOn && !LocalT3isOn)
        {
            return;
        }

        List<string> oppoNames = new List<string>() { null, null, null };

        if (LocalT1isOn)
        {
            NumberofLocalPlayer = 2;
            if (LocalPlayerName1.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName1.text))
            {
              
                return;
            }
            GameManager.Instance.nameMy = MyOwn1.text;

            Opponet1 = LocalPlayerName1.text;
            oppoNames[0] = Opponet1;
            StaticStrings.PawnIndex = 0;
        }
        if (LocalT2isOn)
        {
            NumberofLocalPlayer = 3;
            if (LocalPlayerName1.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName1.text) || LocalPlayerName2.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName2.text))
            {
              

                return;
            }
            GameManager.Instance.nameMy = MyOwn1.text;
            StaticStrings.PawnIndex = 0;
            Opponet2 = LocalPlayerName2.text;
            Opponet1 = LocalPlayerName3.text;
            oppoNames[0] = Opponet1;
            oppoNames[1] = Opponet2;

        }
        if (LocalT3isOn)
        {
            NumberofLocalPlayer = 4;

            if (LocalPlayerName1.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName1.text) || LocalPlayerName2.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName2.text) || LocalPlayerName3.text.Length <= 4 || string.IsNullOrEmpty(LocalPlayerName3.text))
            {
             
                return;
            }
            GameManager.Instance.nameMy = MyOwn1.text;

            Opponet3 = LocalPlayerName1.text;
            Opponet2 = LocalPlayerName2.text;
            Opponet1 = LocalPlayerName3.text;
            oppoNames[0] = Opponet1;
            oppoNames[1] = Opponet2;
            oppoNames[2] = Opponet3;
        }


        switch (NumberofLocalPlayer)
        {
            case 2:
                GameManager.Instance.requiredPlayers = NumberofLocalPlayer;
                GameManager.Instance.opponentsNames = oppoNames;
                GameManager.Instance.opponentsIDs[0] = "555_BOT";
                GameManager.Instance.avatarMy = LocalPlayer;
                StaticStrings.PawnIndex = 0;
                GameManager.Instance.opponentsAvatars[0] = LocalPlayer;
                break;
            case 3:
                GameManager.Instance.requiredPlayers = NumberofLocalPlayer;
                GameManager.Instance.opponentsNames = oppoNames;
                GameManager.Instance.opponentsIDs[0] = "555_BOT";
                GameManager.Instance.opponentsIDs[1] = "556_BOT";
                GameManager.Instance.avatarMy = LocalPlayer;

                GameManager.Instance.opponentsAvatars[0] = LocalPlayer;
                GameManager.Instance.opponentsAvatars[1] = LocalPlayer;
                break;
            case 4:
                GameManager.Instance.requiredPlayers = NumberofLocalPlayer;
                GameManager.Instance.opponentsNames = oppoNames;
                GameManager.Instance.opponentsIDs[0] = "555_BOT";
                GameManager.Instance.opponentsIDs[1] = "556_BOT";
                GameManager.Instance.opponentsIDs[2] = "557_BOT";
                GameManager.Instance.avatarMy = LocalPlayer;
                StaticStrings.PawnIndex = 3;
                GameManager.Instance.opponentsAvatars[0] = LocalPlayer;
                GameManager.Instance.opponentsAvatars[1] = LocalPlayer;
                GameManager.Instance.opponentsAvatars[2] = LocalPlayer;
                break;
        }
        PlayLocal();
    }
    public void PlayLocal()
    {
        GameManager.Instance.isLocalMultiplayer = true;
        GameManager.Instance.isLocalPLay = true;
        GameManager.Instance.payoutCoins = 0;
        GameManager.Instance.GameScene = "GameScene";
        GameManager.Instance.isPlayingWithComputer = true;
        if (!GameManager.Instance.gameSceneStarted)
        {
            SceneManager.LoadScene(GameManager.Instance.GameScene);
            GameManager.Instance.gameSceneStarted = true;
        }
    }

    public Sprite LocalPlayer;

    #endregion 
}
