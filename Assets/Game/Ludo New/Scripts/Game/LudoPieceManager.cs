using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LudoPieceManager : MonoBehaviour
{

    [Header("---------Pieces")]
    [SerializeField] private GameObject[] YPieces;
    [SerializeField] private GameObject[] GPieces;
    [SerializeField] private GameObject[] RPieces;
    [SerializeField] private GameObject[] BPieces;
    
    [Header("---------Position")]
    [SerializeField] private GameObject[] YSPosition;
    [SerializeField] private GameObject[] GSPosition;
    [SerializeField] private GameObject[] RSPosition;
    [SerializeField] private GameObject[] BSPosition;
    
    void Start()
    {
        for (int i = 0; i < 4; i++)
        {
            YPieces[i].transform.position = YSPosition[i].transform.position;
            GPieces[i].transform.position = GSPosition[i].transform.position;
            RPieces[i].transform.position = RSPosition[i].transform.position;
            BPieces[i].transform.position = BSPosition[i].transform.position;
        }
    }
    
}
