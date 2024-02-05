using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class hide : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("hideobject", 0.5f);
    }

    void hideobject()
    {
        gameObject.SetActive(false);
    }
}
