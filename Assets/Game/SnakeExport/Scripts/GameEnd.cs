using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEnd : MonoBehaviour
{
    private Piece _piece;
    private Turn turn;
    [SerializeField] private int position = 0;
    private void Start()
    {
        turn = GameObject.FindGameObjectWithTag("Msg").GetComponent<Turn>();
    }

    private void Update()
    {
        Ray ray = new Ray(transform.position, Vector3.right * 1);
        Debug.DrawRay(transform.position, Vector3.right * 1, Color.black);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            if (hit.transform.tag == "Player")
            {
                position++;
                _piece = hit.transform.GetComponent<Piece>();

                if (_piece.playerIndex == 0)
                {
                    Time.timeScale = 0f;
                    turn.GameEndMessage(position.ToString());
                }

                if (position == 3)
                {
                    Time.timeScale = 0f;
                    turn.GameEndMessage("4th");
                }
            }
        }
    }

    
}
