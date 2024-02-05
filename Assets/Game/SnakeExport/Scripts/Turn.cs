using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Turn : MonoBehaviour
{
    Text mytext;
    // Start is called before the first frame update
    void Start()
    {
        mytext= GetComponent<Text>();
        mytext.text = "Game Start";
        SnakeGame.GameManager.instance.message += UpdateMessage;
    }

    void UpdateMessage(Player player)
    {
        mytext.text = SnakeGame.GameManager.instance.hasGameFinished ? "GAME OVER" :player.ToString() + "'S TURN";
    }

    public void GameEndMessage(string x)
    {
        mytext.text = "You ended at" + x.ToString() + "Place";
    }
}
