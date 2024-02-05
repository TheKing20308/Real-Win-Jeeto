using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetRealBoardPos : MonoBehaviour
{
    // Start is called before the first frame update
    // Start is called before the first frame update
    void Start()
    {
        for (int p = 0; p < transform.childCount; p++)
        {
            transform.GetChild(p).GetComponent<LudoPathObjectController>().SetBoardPos(p + 1);
        }
    }
}
