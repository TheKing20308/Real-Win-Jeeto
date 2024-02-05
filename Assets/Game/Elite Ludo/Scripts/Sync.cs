using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Sync : MonoBehaviour
{

    public GameObject[] Pawns;
    public Image[] Timer;
    public GameDiceController[] diceController;
    // Start is called before the first frame update

    public int[] PawnPoses = new int[8];


    
    public void PawnPos(string t,string one,string skips)
    {

       
        Timer[0].fillAmount = float.Parse(t.Split('|')[1]);
        Timer[1].fillAmount = float.Parse(t.Split('|')[0]);
      /*  if (one == "1")
        {
            diceController[1].EnableShot();
            diceController[0].DisableShot();
            FindObjectOfType<GameGUIController>().setCurrentPlayerIndex(FindObjectOfType<GameGUIController>().otherindex);

        }
        else
        {
            diceController[0].EnableShot();
            diceController[1].DisableShot();
            FindObjectOfType<GameGUIController>().setCurrentPlayerIndex(FindObjectOfType<GameGUIController>().myIndex);

        }*/
        int u = int.Parse(skips.Split('|')[1]);
        int r = int.Parse(skips.Split('|')[0]);
        if (FindObjectOfType<GameGUIController>().Players[0].GetComponent<PlayerAvatarController>().skipsCOunt != u)
        {
            FindObjectOfType<GameGUIController>().Players[0].GetComponent<PlayerAvatarController>().skipsCOunt = u;
            FindObjectOfType<GameGUIController>().Players[0].GetComponent<PlayerAvatarController>().ShowSkips(true);

        }
        if (FindObjectOfType<GameGUIController>().Players[2].GetComponent<PlayerAvatarController>().skipsCOunt != r)
        {
            FindObjectOfType<GameGUIController>().Players[2].GetComponent<PlayerAvatarController>().skipsCOunt = r;

            FindObjectOfType<GameGUIController>().Players[2].GetComponent<PlayerAvatarController>().ShowSkips(false);
        }
/*
        for (int p = 0; p < poses.Length; p++)
        {
            PawnPoses[p] = int.Parse(poses.Split('|')[p]);
        }*/

     //   SyncValues();

    }


    public void SyncValues()
    {
      /*  for (int i = 0; i < 4; i++)
        {

            Pawns[i].GetComponent<LudoPawnController>().MakeSyncMove(PawnPoses[i+4] - Pawns[i+4].GetComponent<LudoPawnController>().currentPosition);
         
        }


        for (int y = 4; y < 8; y++)
        {

            Pawns[y].GetComponent<LudoPawnController>().MakeSyncMove(PawnPoses[y - 4] - Pawns[y - 4].GetComponent<LudoPawnController>().currentPosition);

        }*/

    }

}
