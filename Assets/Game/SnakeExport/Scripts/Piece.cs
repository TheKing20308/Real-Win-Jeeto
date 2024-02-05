using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piece : MonoBehaviour
{

    [SerializeField]
    List<Color> colors;

    bool canMove;
    int moveIndex;
    List<int> movePos;
    float speed = 10f;
    public int playerIndex;

    public int onPos;

    private Vector3 targetPosRightTop;
    private Vector3 targetPosLeftTop;
    private Vector3 targetPosRightBottom;
    private Vector3 targetPosLeftBottom;



    // Start is called before the first frame update
    void Start()
    {
        canMove = false;
        moveIndex = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (!canMove) return;
        
        Vector3 initTargetPos = SnakeGame.GameManager.instance.positions[movePos[moveIndex]];

        if (playerIndex == 0)
        {
            targetPosRightTop = new Vector3(initTargetPos.x - 0.12f, initTargetPos.y + 0.12f);
            Move(targetPosRightTop);
        }
        
        if (playerIndex == 1)
        {
            targetPosLeftTop = new Vector3(initTargetPos.x + 0.12f, initTargetPos.y + 0.12f);
            Move(targetPosLeftTop);
        }
        
        if (playerIndex == 2)
        {
            targetPosRightBottom = new Vector3(initTargetPos.x - 0.12f, initTargetPos.y - 0.12f);
            Move(targetPosRightBottom);
        }
        
        if (playerIndex == 3)
        {
            targetPosLeftBottom = new Vector3(initTargetPos.x + 0.12f, initTargetPos.y - 0.12f);
            Move(targetPosLeftBottom);
        }
       
    }

    private void Move(Vector3 targetPos)
    {
        float step = speed * Time.deltaTime;
        transform.position = Vector3.MoveTowards(transform.position, targetPos, step);
        if(Vector3.Distance(transform.position,targetPos) < 0.001f)
        {
            moveIndex++;
            if(moveIndex == movePos.Count)
            {
                moveIndex = 0;
                canMove = false;
            }
        }
        
        onPos = movePos[(movePos.Count) - 1];
    }

    public void SetColors(Player player)
    {
        SpriteRenderer renderer = GetComponent<SpriteRenderer>();
        renderer.color = colors[(int)player];
    }

    public void SetMovement(List<int> result)
    {
        movePos = result;
        canMove = true;
        //SizeManager.CheckerTwo(playerIndex);
    }
    
}
