using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Roulette : MonoBehaviour
{
    private float RotatePower;
    private float StopPower = 400;

    [SerializeField] private Rigidbody2D rbody;
    [SerializeField] private UnityEngine.UI.Button spinButton;

    [SerializeField] private int inRotate;
    float t;

    private int score;
    [SerializeField] private NumberSelectDown nsd;
    [SerializeField] private GameObject popUp_spin;
    public string gameEnd;

    private void OnValidate()
    {
        if (rbody == null)
        {
            rbody = GetComponent<Rigidbody2D>();   
        }
    }
    

    private void Update()
    {
        
        

        if (rbody.angularVelocity > 0)
        {
            rbody.angularVelocity -= StopPower * Time.deltaTime;

            rbody.angularVelocity = Mathf.Clamp(rbody.angularVelocity, 0, 1440);
        }

        if (rbody.angularVelocity == 0 && inRotate == 1)
        {
            t += 1 * Time.deltaTime;
            if (t >= 0.5f)
            {
                GetReward();
                winCondition();
                popUp_spin.SetActive(true);

                inRotate = 0;
                t = 0;
            }
        }

       
    }

    private void winCondition()
    {
        if (score != 1)
        {
            if (score == nsd.numSelect)
            {
                Debug.Log("You Win");
                gameEnd = "You Win";
            }
            else
            {
                Debug.Log("You Lost");
                gameEnd = "You Lost";
            }
            
        }
        else
        {
            Debug.Log("Jackpot");
            gameEnd = "Jackpot";
        }
    }

    private void OnEnable()
    {
        spinButton.onClick.AddListener(Rotete);
    }

    private void OnDisable()
    {
        spinButton.onClick.RemoveListener(Rotete);
    }


    public void Rotete()
    {
        score = 0;
        Debug.Log("Button Clicked");
        RotatePower = Random.Range(1000, 4000);
        
        StopPower = Random.Range(300, 500);
        
        if (inRotate == 0)
        {
            rbody.AddTorque(RotatePower);
            inRotate = 1;
        }
    }



    public void GetReward()
    {
        float rot = transform.eulerAngles.z;

        if (rot > 11.5f && rot <= 35)
        {
            //1 23.5
            Win(30.ToString());
            score = 30;
        }
        else if (rot > 35 && rot <= 56.5f)
        {
            //2 21.5
            Win(90.ToString());
            score = 90;
        }
        else if (rot > 56.5f && rot <= 80)
        {
            //3 23.5
            Win(150.ToString());
            score = 150;
        }
        else if (rot > 80 && rot <= 101.5f)
        {
            //4 21.5
            Win("Jackpot");
            score = 1;
        }
        else if (rot > 101.5f && rot <= 125f)
        {
            //5 23.5
            Win(500.ToString());
            score = 500;
        }
        else if (rot > 125f && rot <= 146.5f)
        { 
            //6 21.5
            Win(20.ToString());
            score = 20;
        }
        else if (rot > 146.5f && rot <= 170f)
        {
            //7
            Win(60.ToString());
            score = 60;
        }
        else if (rot > 170f && rot <= 191.5f)
        {
            //8
            Win(400.ToString());
            score = 400;
        }
        else if (rot > 191.5f && rot <= 215f)
        {
            //9
            Win(30.ToString());
            score = 30;
        }
        else if (rot > 215f && rot <= 236.5f)
        {
            //10
            Win(90.ToString());
            score = 90;
        }
        else if (rot > 236.5f && rot <= 260f)
        {
            //11
            Win(150.ToString());
            score = 150;
        }
        else if (rot > 260f && rot <= 281.5f)
        {
            //12
            Win("Jackpot");
            score = 1;
        }
        else if (rot > 281.5f && rot <= 305f)
        {
            //13
            Win(10.ToString());
            score = 10;
        }
        else if (rot > 305f && rot <= 305 + 21.5f)
        {
            //14
            Win(70.ToString());
            score = 70;
        }
        else if (rot > 305 + 21.5f && rot <= 326.5f + 23.5f)
        {
            //15
            Win(200.ToString());
            score = 200;
        }
        else if (rot > 326.5f + 23.5f && rot <= 11.5f)
        {
            //16
            Win(400.ToString());
            score = 400;
        }
        

    }


    public void Win(string Score)
    {
        print(Score);
    }


} 