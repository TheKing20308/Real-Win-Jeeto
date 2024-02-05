using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LudoNewGameManager : MonoBehaviour
{
    public static int playerIndex;
    [SerializeField] private GameObject[] players;

    public static int currentTurn;

    private void Start()
    {
        playerIndex = 0;
        AddTag();
        currentTurn = 0;
    }

    void AddTag()
    {
        if (playerIndex == 0)
        {
            players[0].gameObject.tag = "Player";
            players[1].gameObject.tag = "Bot";
            players[2].gameObject.tag = "Bot";
            players[3].gameObject.tag = "Bot";
        }
        
        if (playerIndex == 1)
        {
            players[1].gameObject.tag = "Player";
            players[0].gameObject.tag = "Bot";
            players[2].gameObject.tag = "Bot";
            players[3].gameObject.tag = "Bot";
        }
        
        if (playerIndex == 2)
        {
            players[2].gameObject.tag = "Player";
            players[0].gameObject.tag = "Bot";
            players[1].gameObject.tag = "Bot";
            players[3].gameObject.tag = "Bot";
        }
        
        if (playerIndex == 3)
        {
            players[3].gameObject.tag = "Player";
            players[0].gameObject.tag = "Bot";
            players[1].gameObject.tag = "Bot";
            players[2].gameObject.tag = "Bot";
        }
    }
}
