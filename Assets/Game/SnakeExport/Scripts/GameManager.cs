using System;
using System.Collections;
using Snake2;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

namespace SnakeGame
{
    public class GameManager : MonoBehaviour
    {
        public delegate void UpdateMessage(Player player);

        public static GameManager instance;
        public bool hasGameFinished, canClick;

        [SerializeField]
        private GameObject gamePiece;

        [SerializeField]
        private Vector3 startPos;

        public Vector3[] positions;
        [SerializeField] private int currentPlayer;

        private Dictionary<int, int> joints;

        public Board myboard;

        private Dictionary<Player, GameObject> pieces;
        private List<Player> players;

        private int roll;

        private Die die;

        [SerializeField] private GameObject game;

        [SerializeField] private int[] playerCurrentPos;
        [SerializeField] private GameObject[] playerCurrent;

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }
            else
            {
                Destroy(gameObject);
            }

            die = FindObjectOfType<Die>();
            canClick = true;
            hasGameFinished = false;
            currentPlayer = 0;

            SetUpPositions();
            SetUpLaddersAndSnakes();

            myboard = new Board(joints);
            players = new List<Player>();
            pieces = new Dictionary<Player, GameObject>();

            for (int i = 0; i < 4; i++)
            {
                players.Add((Player)i);
                GameObject temp = Instantiate(gamePiece);
                Piece piece = temp.GetComponent<Piece>();
                piece.playerIndex = i;
                pieces[(Player)i] = temp;
                if (piece.playerIndex == 0)
                {
                    temp.transform.position = new Vector3(startPos.x - 0.12f, startPos.y + 0.12f);
                }
                
                if (piece.playerIndex == 1)
                {
                    temp.transform.position = new Vector3(startPos.x + 0.12f, startPos.y + 0.12f);
                }
        
                if (piece.playerIndex == 2)
                {
                    temp.transform.position = new Vector3(startPos.x - 0.12f, startPos.y - 0.12f);
                }
        
                if (piece.playerIndex == 3)
                {
                    temp.transform.position = new Vector3(startPos.x + 0.12f, startPos.y - 0.12f);
                }
                
                temp.GetComponent<Piece>().SetColors((Player)i);
            }
        }

        private void OnEnable()
        {
            StartCoroutine(Bot());
        }
        
         

        private IEnumerator Bot()
        {
            yield return new WaitForSeconds(2);
            
            if (currentPlayer > 0)
            {
                roll = 1 + Random.Range(0, 6);
                die.StartRolling(roll);
                canClick = false;
            }

            
            StartCoroutine(Bot());
        }

        void Checker()
        {
            
            if (playerCurrentPos[1] == playerCurrentPos[2] || playerCurrentPos[1] == playerCurrentPos[3] ||
                playerCurrentPos[1] == playerCurrentPos[4])
            {
                playerCurrent[1].GetComponent<Transform>().localScale = new Vector3(0.5f, 0.5f, 0.5f);
                
                playerCurrent[1].GetComponent<Transform>().position = new Vector3(playerCurrent[1].GetComponent<Transform>().position.x - 0.094f, playerCurrent[1].GetComponent<Transform>().position.y + 0.106f, playerCurrent[1].GetComponent<Transform>().position.z);
                
            }
        }

        private void Update()
        {
            playerCurrent = GameObject.FindGameObjectsWithTag("Player");
            for (int i = 0; i < 4; i++)
            {
                playerCurrentPos[i] = playerCurrent[i].GetComponent<Piece>().onPos;
            }
            
            if (hasGameFinished || !canClick) return;

            if (currentPlayer < 1)
            {
                if (Input.GetMouseButtonDown(0))
                {
                    Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                    Vector2 mousePos2D = new Vector2(mousePos.x, mousePos.y);
                    RaycastHit2D hit = Physics2D.Raycast(mousePos2D, Vector2.zero);

                    if (!hit.collider) return;

                    if (hit.collider.CompareTag("Die"))
                    {
                        roll = 1 + Random.Range(0, 6);
                        hit.collider.gameObject.GetComponent<Die>().StartRolling(roll);
                        canClick = false;
                    }
                }
            }
            
        }
        public event UpdateMessage message;

        public void GameRestart()
        {
            SceneManager.LoadScene(2);
        }

        public void GameQuit()
        {
            SnakeAnimationManager.loopRandomSnakeAnimator = false;
            SceneManager.LoadScene(0);
        }

        private void SetUpPositions()
        {
            positions = new Vector3[100];
            float diff = 0.45f;
            positions[0] = startPos;
            int index = 1;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                    positions[index] = new Vector3(positions[index - 1].x + diff, positions[index - 1].y, positions[index - 1].z);
                    index++;
                }

                positions[index] = new Vector3(positions[index - 1].x, positions[index - 1].y + diff, positions[index - 1].z);
                index++;

                for (int j = 0; j < 9; j++)
                {
                    positions[index] = new Vector3(positions[index - 1].x - diff, positions[index - 1].y, positions[index - 1].z);
                    index++;
                }

                if (index == 100) return;
                positions[index] = new Vector3(positions[index - 1].x, positions[index - 1].y + diff, positions[index - 1].z);
                index++;
            }
        }

        private void SetUpLaddersAndSnakes()
        {
            joints = new Dictionary<int, int> {
                {
                    4, 25
                }, {
                    10, 47
                }, {
                    21, 0
                }, {
                    33, 6
                }, {
                    55, 63
                }, {
                    58, 39
                }, {
                    59, 78
                }, {
                    73, 92
                }, {
                    74, 50
                }, {
                    79, 81
                }, {
                    87, 70
                }, {
                    97, 16
                }
            };
        }
        public void MovePiece()
        {
            List<int> result = myboard.UpdateBoard(players[currentPlayer], roll);

            if (result.Count == 0)
            {
                canClick = true;
                currentPlayer = (currentPlayer + 1) % players.Count;
                
                message(players[currentPlayer]);
                return;

                Checker();
            }

            pieces[players[currentPlayer]].GetComponent<Piece>().SetMovement(result);
            canClick = true;

            if (result[result.Count - 1] == 99)
            {
                game.SetActive(false);
                SnakeUIManager.ChangeScreen(SnakeUIManager.SnakeScreen.GameOver);
                
                players.RemoveAt(currentPlayer);
                currentPlayer %= currentPlayer;
                if (players.Count == 1) hasGameFinished = true;
                message(players[currentPlayer]);
                return;
            }

            currentPlayer = roll == 6 ? currentPlayer : (currentPlayer + 1) % players.Count;
            message(players[currentPlayer]);
        }

        
    }
}
