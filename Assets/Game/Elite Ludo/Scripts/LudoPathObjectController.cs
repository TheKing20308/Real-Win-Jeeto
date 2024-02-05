using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LudoPathObjectController : MonoBehaviour
{

    public List<GameObject> pawns = new List<GameObject>();
    public bool isProtectedPlace;
    public int BoardPos = 150;
    // Use this for initialization
    void Start()
    {
        GetComponent<Image>().enabled = false;
    }


    public void SetBoardPos(int u)
    {
        BoardPos = u;
    }

    public void AddPawn(GameObject pawn)
    {
        pawns.Add(pawn);
        pawn.GetComponent<LudoPawnController>().setBoardPos(BoardPos);
    }


    public void RemovePawn(GameObject pawn)
    {
        pawns.Remove(pawn);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public int SiblingIndex
    {
        get
        {
            return transform.GetSiblingIndex();
        }
    }
}
