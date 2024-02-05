using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace FruitNinja
{
    public class GameManager : MonoBehaviour
    {
        public static GameManager Instance { get; private set; }

        [SerializeField] private Blade blade;
        [SerializeField] private Spawner spawner;
        [SerializeField] private Text scoreText;
        [SerializeField] private TMP_Text uiScoreText;
        [SerializeField] private TMP_Text uiHighScoreText;
        [SerializeField] private Image fadeImage;

        [SerializeField] private GameObject popUp;

        private int score;
        private int highScore = 0;
        public int Score => score;

        private void Awake()
        {
            if (Instance != null)
            {
                DestroyImmediate(gameObject);
            }
            else
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
        }

        private void Start()
        {
            NewGame();
            popUp.SetActive(false);
        }

        public void NewGame()
        {
            Time.timeScale = 1f;

            ClearScene();

            blade.enabled = true;
            spawner.enabled = true;

            score = 0;
            scoreText.text = ("Score: " + score);
        }

        private void bombNewGame()
        {
            Time.timeScale = 1f;

            ClearScene();

            blade.enabled = false;
            spawner.enabled = false;

            if (PlayerPrefs.GetInt("FruitNinjaHighScore, 0") < score)
            {
                PlayerPrefs.SetInt("FruitNinjaHighScore", score);
            }
            
            highScore  = PlayerPrefs.GetInt("FruitNinjaHighScore", 0);
            uiHighScoreText.text = ("HIGH SCORE: " + highScore);
            uiScoreText.text = ("SCORE: " + score);
            popUp.SetActive(true);
        }

        private void ClearScene()
        {
            Fruit[] fruits = FindObjectsOfType<Fruit>();

            foreach (Fruit fruit in fruits)
            {
                Destroy(fruit.gameObject);
            }

            Bomb[] bombs = FindObjectsOfType<Bomb>();

            foreach (Bomb bomb in bombs)
            {
                Destroy(bomb.gameObject);
            }
        }

        public void IncreaseScore(int points)
        {
            score += points;
            scoreText.text = ("Score: " + score);

            float hiscore = PlayerPrefs.GetFloat("hiscore", 0);

            if (score > hiscore)
            {
                hiscore = score;
                PlayerPrefs.SetFloat("hiscore", hiscore);
            }
        }

        public void Explode()
        {
            blade.enabled = false;
            spawner.enabled = false;

            StartCoroutine(ExplodeSequence());
        }

        private IEnumerator ExplodeSequence()
        {
            float elapsed = 0f;
            float duration = 0.5f;

            // Fade to white
            while (elapsed < duration)
            {
                float t = Mathf.Clamp01(elapsed / duration);
                fadeImage.color = Color.Lerp(Color.clear, Color.white, t);

                Time.timeScale = 1f - t;
                elapsed += Time.unscaledDeltaTime;

                yield return null;
            }

            yield return new WaitForSecondsRealtime(1f);

            bombNewGame();

            elapsed = 0f;

            // Fade back in
            while (elapsed < duration)
            {
                float t = Mathf.Clamp01(elapsed / duration);
                fadeImage.color = Color.Lerp(Color.white, Color.clear, t);

                elapsed += Time.unscaledDeltaTime;

                yield return null;
            }
        }

    }
}
