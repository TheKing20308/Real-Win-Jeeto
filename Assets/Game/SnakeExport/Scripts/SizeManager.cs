using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SizeManager : MonoBehaviour
{
    [SerializeField] private static GameObject[] players;
    [SerializeField] private Piece[] pieceScript;
    [SerializeField] private int[] index;
    [SerializeField] private int[] pos;

    public static int posOne;
    public static int posTwo;
    public static int posThree;
    public static int posFour;
    
    void Update()
    {
        int time = 0;
        if (time < 1)
        {
            NotStart();
            time = 3;
        }
        
        for (int i = 0; i < 4; i++)
        {
            pos[i] = pieceScript[i].onPos;
        }

        posOne = pos[0];
        posTwo = pos[1];
        posThree = pos[2];
        posFour = pos[3];
        
    }

    void Checker()
    {
        if (pos[0] == pos[1] || pos[0] == pos[2] || pos[0] == pos[3] || pos[1] == pos[2] || pos[1] == pos[3] || pos[2] == pos[3])
        {

            if (pos[0] == pos[1] && pos[0] == pos[2] || pos[0] == pos[1] && pos[0] == pos[3] ||
                pos[0] == pos[3] && pos[0] == pos[2])
            {
                if (pos[0] == pos[1] && pos[0] == pos[2] && pos[0] == pos[3])
                {
                    for (int i = 0; i < 4; i++)
                    {
                        players[i].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                }
                else
                {
                    if (pos[0] == pos[1] && pos[0] == pos[2])
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (pos[0] == pos[1] && pos[0] == pos[3])
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (pos[0] == pos[3] && pos[0] == pos[2])
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    Debug.Log("3 on one");
                }
            }
            else
            {
                if (pos[0] == pos[1])
                {
                    players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                }
                else if (pos[0] == pos[2])
                {
                    players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                }
                else if (pos[0] == pos[3])
                {
                    players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                }
                Debug.Log("2 on one");
            }
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                players[i].transform.localScale = new Vector3(1, 1, 1);
            }
        }
        
        if (pos[1] == pos[2] || pos[1] == pos[3])
        {

            if (pos[1] == pos[2] && pos[1] == pos[3])
            {
                if (pos[0] == pos[1] && pos[0] == pos[2] && pos[0] == pos[3])
                {
                    
                }
                else
                {
                    players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    
                    Debug.Log("3 on one");
                }
            }
            else
            {
                if (pos[1] == pos[2] )
                {
                    players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                }
                else if (pos[1] == pos[3])
                {
                    players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                }
                Debug.Log("2 on one");
            }
        }
        else
        {
            players[3].transform.localScale = new Vector3(1, 1, 1);
            players[1].transform.localScale = new Vector3(1, 1, 1);
            players[2].transform.localScale = new Vector3(1, 1, 1);
        }

        if (pos[2] == pos[3])
        {
            players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
            players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);

            Debug.Log("2 on one");
        }
        else
        {
            players[2].transform.localScale = new Vector3(1, 1, 1);
            players[3].transform.localScale = new Vector3(1, 1, 1);
        }
    }

    public static void CheckerTwo(int playerIndex)
    {
        if(playerIndex == 1)
        {
            if (posOne == posTwo || posOne == posThree || posOne == posFour)
            {
                if (posOne == posTwo && posOne == posThree || posOne == posTwo && posOne == posFour || posOne == posThree && posOne == posFour)
                {
                    if (posOne == posTwo && posOne == posThree && posOne == posFour)
                    {
                        for (int i = 0; i < 4; i++)
                        {
                            players[i].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                    }
                    else
                    {
                        if (posOne == posTwo && posOne == posThree)
                        {
                            players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        else if (posOne == posTwo && posOne == posFour)
                        {
                            players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        else if (posOne == posThree && posOne == posFour)
                        {
                            players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        Debug.Log("3 on one - 1");
                    }
                }
                else
                {
                    if (posOne == posTwo)
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (posOne == posThree)
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (posOne == posFour)
                    {
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    Debug.Log("2 on one - 1");
                }
            }
            else
            {
                players[1].transform.localScale = new Vector3(1, 1, 1);
            }
        }
        

        if (playerIndex == 2)
        {
            if (posTwo == posOne || posTwo == posThree || posTwo == posFour)
            {
                if (posTwo == posOne && posTwo == posThree || posTwo == posOne && posTwo == posFour || posTwo == posThree && posTwo == posFour)
                {
                    if (posTwo == posOne && posTwo == posThree && posTwo == posFour)
                    {
                        for (int i = 0; i < 4; i++)
                        {
                            players[i].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                    }
                    else
                    {
                        if (posTwo == posOne && posTwo == posThree)
                        {
                            players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        else if (posTwo == posOne && posTwo == posFour)
                        {
                            players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        else if (posTwo == posThree && posTwo == posFour)
                        {
                            players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                            players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        }
                        Debug.Log("3 on one - 2");
                    }
                }
                else
                {
                    if (posTwo == posOne)
                    {
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[0].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (posTwo == posThree)
                    {
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[2].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    else if (posTwo == posFour)
                    {
                        players[1].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                        players[3].transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
                    }
                    Debug.Log("2 on one - 2");
                }
            }
            else
            {
                players[2].transform.localScale = new Vector3(1, 1, 1);
            }

        }
        
    }


    
    void NotStart()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        
        for (int i = 0; i < 4; i++)
        {
            pieceScript[i] = players[i].GetComponent<Piece>();
        }
        
        for (int i = 0; i < 4; i++)
        {
            index[i] = pieceScript[i].playerIndex;
        }
    }
}
