using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BotIntel : MonoBehaviour
{


    public GameObject[] Pawns;
    #region BotIntel










    public void GetSteps()
    {
        GameManager.Instance.BotMoves1 = 100;

        GameManager.Instance.BotMoves2 = 100;

        GameManager.Instance.BotMoves3 = 100;
        for (int r = 0; r < 8; r++)
        {
            Pawns[r].GetComponent<LudoPawnController>().IntelBotmove = false;
        }
        bool Yes = false;

        for (int r = 4; r < 16; r++)
        {
            print(Yes + " " + "yes    ");

            if (Pawns[r].activeInHierarchy && Pawns[r].GetComponent<LudoPawnController>().isBot)
            {
                Yes = Pawns[r].GetComponent<LudoPawnController>().CheckHomePossibilty();
                print(Yes);
                if (Yes)
                    break;
            }
        }

        if (!Yes)
        {
            for (int r = 0; r < 16; r++)
            {
                Pawns[r].GetComponent<LudoPawnController>().IntelBotmove = false;
            }

            for (int i = 0; i < 4; i++)
            {
                if (Pawns[i].GetComponent<LudoPawnController>().isOnBoard)
                {
                    int reqStepsTokill = 0;

                    for (int y = 4; y < 16; y++)
                    {
                        if (Pawns[i].activeInHierarchy)
                        {
                            if (!Pawns[i].GetComponent<LudoPawnController>().path[Pawns[i].GetComponent<LudoPawnController>().currentPosition].GetComponent<LudoPathObjectController>().isProtectedPlace)
                                reqStepsTokill = (Pawns[i].GetComponent<LudoPawnController>().BoardPos) - Pawns[y].GetComponent<LudoPawnController>().BoardPos;
                            print(reqStepsTokill);
                            if (reqStepsTokill > 0)
                            {

                                if (reqStepsTokill <= 6 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                {
                                    GameManager.Instance.BotMoves1 = reqStepsTokill;
                                    Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                    GameManager.Instance.BotMoves2 = 100;
                                    GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                    GameManager.Instance.BotMoves3 = 100;

                                    break;
                                }
                                else
                                    if (reqStepsTokill < 6 && Pawns[y].GetComponent<LudoPawnController>().currentPosition == -1)
                                {
                                    GameManager.Instance.BotMoves1 = 6;

                                    GameManager.Instance.BotMoves2 = reqStepsTokill;
                                    Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                    GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                    GameManager.Instance.BotMoves3 = 100;

                                    break;
                                }
                                else
                                     if (reqStepsTokill > 6 && reqStepsTokill <= 12 && Pawns[y].GetComponent<LudoPawnController>().currentPosition == -1)
                                {
                                    GameManager.Instance.BotMoves1 = 6;

                                    GameManager.Instance.BotMoves2 = 6;
                                    GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                    Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                    GameManager.Instance.BotMoves3 = reqStepsTokill - 6;

                                    break;
                                }



                                else
                                 if (reqStepsTokill > 6 && reqStepsTokill <= 12 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                {
                                    GameManager.Instance.BotMoves1 = 6;

                                    GameManager.Instance.BotMoves2 = reqStepsTokill - 6;
                                    Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                    GameManager.Instance.BotMoves3 = 100;
                                    GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();


                                    break;
                                }

                                else
                                                             if (reqStepsTokill > 12 && reqStepsTokill < 18 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                {
                                    GameManager.Instance.BotMoves1 = 6;

                                    GameManager.Instance.BotMoves2 = 6;
                                    Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                    GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                    GameManager.Instance.BotMoves3 = reqStepsTokill - 12;

                                    break;
                                }
                                else
                                {

                                    GameManager.Instance.BotMoves1 = 100;

                                    GameManager.Instance.BotMoves2 = 100;

                                    GameManager.Instance.BotMoves3 = 100;

                                }
                            }
                        }
                        if (GameManager.Instance.BotMoves1 != 100)
                            break;


                    }
                }



            }

            if (GameManager.Instance.BotMoves1 == 100 && GameManager.Instance.BotMoves2 == 100 && GameManager.Instance.BotMoves3 == 100)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (Pawns[i].GetComponent<LudoPawnController>().isOnBoard)
                    {
                        int reqStepsTokill = 0;

                        for (int y = 4; y < 16; y++)
                        {
                            if (Pawns[y].activeInHierarchy)
                            {
                                if (!Pawns[i].GetComponent<LudoPawnController>().path[Pawns[i].GetComponent<LudoPawnController>().currentPosition].GetComponent<LudoPathObjectController>().isProtectedPlace)

                                    reqStepsTokill = (Pawns[i].GetComponent<LudoPawnController>().BoardPos) - Pawns[y].GetComponent<LudoPawnController>().BoardPos;
                                //  print(reqStepsTokill);

                                if (reqStepsTokill > 0)
                                {
                                    print("getting steps  " + reqStepsTokill);
                                    if (reqStepsTokill <= 6 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                    {
                                        GameManager.Instance.BotMoves1 = reqStepsTokill;
                                        Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                        GameManager.Instance.BotMoves2 = 100;
                                        GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                        GameManager.Instance.BotMoves3 = 100;

                                        break;
                                    }
                                    else
                                    if (reqStepsTokill < 6 && Pawns[y].GetComponent<LudoPawnController>().currentPosition == -1)
                                    {
                                        GameManager.Instance.BotMoves1 = 6;

                                        GameManager.Instance.BotMoves2 = reqStepsTokill;
                                        Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                        GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                        GameManager.Instance.BotMoves3 = 100;

                                        break;
                                    }
                                    else
                                        if (reqStepsTokill > 6 && reqStepsTokill <= 12 && Pawns[y].GetComponent<LudoPawnController>().currentPosition == -1)
                                    {
                                        GameManager.Instance.BotMoves1 = 6;

                                        GameManager.Instance.BotMoves2 = 6;
                                        Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                        GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                        GameManager.Instance.BotMoves3 = reqStepsTokill - 6;

                                        break;
                                    }




                                    else
                                 if (reqStepsTokill > 6 && reqStepsTokill <= 12 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                    {
                                        GameManager.Instance.BotMoves1 = 6;

                                        GameManager.Instance.BotMoves2 = reqStepsTokill - 6;
                                        Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                        GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();
                                        GameManager.Instance.BotMoves3 = 100;

                                        break;
                                    }

                                    else
                                        if (reqStepsTokill > 12 && reqStepsTokill < 18 && Pawns[y].GetComponent<LudoPawnController>().currentPosition != -1)
                                    {
                                        GameManager.Instance.BotMoves1 = 6;

                                        GameManager.Instance.BotMoves2 = 6;
                                        Pawns[y].GetComponent<LudoPawnController>().IntelBotmove = true;
                                        GameManager.Instance.IntelPlayerBot = Pawns[y].GetComponent<LudoPawnController>().GetPlayerIndex();

                                        GameManager.Instance.BotMoves3 = reqStepsTokill - 12;

                                        break;
                                    }
                                    else
                                    {

                                        GameManager.Instance.BotMoves1 = 100;

                                        GameManager.Instance.BotMoves2 = 100;

                                        GameManager.Instance.BotMoves3 = 100;

                                    }
                                }
                            }
                            if (GameManager.Instance.BotMoves1 != 100)
                                break;


                        }

                    }
                }


            }

        }
        if (GameManager.Instance.type == MyGameType.FourPlayer)
        {
            if (GameManager.Instance.BotMoves1 == 100 && GameManager.Instance.BotMoves2 == 100 && GameManager.Instance.BotMoves3 == 100)
            {
                for (int r = 0; r < 16; r++)
                {
                    Pawns[r].GetComponent<LudoPawnController>().IntelBotmove = false;
                }

                for (int r = 4; r < 16; r++)
                {
                    if (Pawns[r].activeInHierarchy && Pawns[r].GetComponent<LudoPawnController>().isBot)
                    {
                        Yes = Pawns[r].GetComponent<LudoPawnController>().CheckHomePossibilty();
                        if (Yes)
                            break;
                    }
                }
            }
        }
        print(GameManager.Instance.BotMoves1 + "    " + GameManager.Instance.BotMoves2 + "   " + GameManager.Instance.BotMoves3);
    }

    #endregion




    #region

    public void NotAllowedSteps()
    {
        for (int p = 0; p < 4; p++)
        {
            if (Pawns[p].GetComponent<LudoPawnController>().isMinePawn)
            {

                int homesteps = Pawns[p].GetComponent<LudoPawnController>().path.Length - Pawns[p].GetComponent<LudoPawnController>().currentPosition;
                /*     if (homesteps <= 6 && p == 0)
                     {
                         GameManager.Instance.NotAllowedsteps1 = homesteps;
                     }
                     if (homesteps <= 6 && p == 1)
                     {
                         GameManager.Instance.NotAllowedsteps2 = homesteps;
                     }*/
                if (homesteps <= 6 && p == 2)
                {
                    GameManager.Instance.NotAllowedsteps3 = homesteps;
                }
                if (homesteps <= 6 && p == 3)
                {
                    GameManager.Instance.NotAllowedsteps4 = homesteps;
                }
            }
        }
    }

    #endregion 

}
