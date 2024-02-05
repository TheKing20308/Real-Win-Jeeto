using System;
using System.Collections;
using System.Collections.Generic;
using Snake2;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class LudoNewPlayer : MonoBehaviour
{
    [SerializeField] private int playerIndex;

    [Header("-----PlayerChildren")] 
    [SerializeField] private GameObject interactable;
    [SerializeField] private GameObject diceRoll;

    private LudoNewDice diceScript;
    private Button diceBtt;

    private void OnEnable()
    {
        diceBtt = diceRoll.GetComponent<Button>();
        //diceBtt.onClick.AddListener(Turn);
    }

    private void OnDisable()
    {
        //diceBtt.onClick.RemoveListener(Turn);
    }

    private void Start()
    {
        diceScript = diceRoll.GetComponent<LudoNewDice>();
    }

    void Update()
    {
        if (LudoNewGameManager.currentTurn == playerIndex)
        {
            if (gameObject.CompareTag("Player"))
            {
                interactable.SetActive(false);
                diceBtt.interactable = true;
            }
        }
        else
        {
            if (gameObject.CompareTag("Player"))
            {
                diceBtt.interactable = false;
                interactable.SetActive(true);
            }
            
        }
        
       
    }

    IEnumerator BotTurn()
    {
        if (gameObject.CompareTag("Bot"))
        {
            if (LudoNewGameManager.currentTurn == playerIndex)
            {
                StartCoroutine(Turn());
                yield return new WaitForSeconds(2);
            }
        }
        StopCoroutine(BotTurn());
    }

    IEnumerator Turn()
    {
        int roll = Random.Range(1, 7);
        diceScript.StartRolling(roll);

        yield return new WaitForSeconds(2);
        
        if (roll != 6)
        {
            if (LudoNewGameManager.currentTurn != 3)
            {
                Debug.Log("index + 1");
                LudoNewGameManager.currentTurn += 1;
            }
            else
            {
                Debug.Log("index = 1");
                LudoNewGameManager.currentTurn = 1;
            }
        }
        StopCoroutine(Turn());
    }
}
