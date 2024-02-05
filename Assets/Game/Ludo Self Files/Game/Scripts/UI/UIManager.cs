using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using ZxLog;

public class UIManager : MonoBehaviour
{
    public enum Screen
    {
        Splash,
        SignIn,
        SignUp,
        Home,
        Categories,
        Leaderboard,
        Profile,
        Loding,
        Spin,

        Otp
        // Add other screens as needed
    }


    [Header("For Multiplayer Start")] [SerializeField]
    internal InitMenuScript initMenuScript;

    [SerializeField] private GameObject[] doNotDestroy;
    [Space] public static string GameScene = "GameScene";
    public List<GameObject> singletons;
    public static UIManager instance;
    public LoadingAnimator loading;
    [SerializeField] private List<ScreenPair> screens;
    [SerializeField] private GameObject adsManager;

    [SerializeField] private static int playedTime = 0;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            if (this != instance)
            {
                Destroy(this);
            }
        }


        foreach (var screen in singletons)
        {
            screen.SetActive(true);
            screen.SetActive(false);
        }
    }


    private void OnApplicationQuit()
    {
        //App quit called
        Debug.Log("App Quit Called");
        PlayerPrefs.SetString("isLoggedIn", "No");
        initMenuScript.gameObject.SetActive(false);
        StopAdsManager();
    }

    private void StopAdsManager()
    {
        //AdsApi.loop = false;
        adsManager.SetActive(false);
        Print.CustomLog("Ads manager stopped", 15, LogColor.Green);
    }


    private void Start()
    {
        if (PlayerPrefs.GetString("isLoggedIn") == "yes")
        {
            ChangeScreen(Screen.Home);
        }
        else
        {
            ChangeScreen(Screen.Splash);
        }
        
        /*if (playedTime <= 0)
        {
            ChangeScreen(Screen.Splash);
            playedTime = 2;
        }
        else
        {
            ChangeScreen(Screen.Home);
        }*/
    }

    private void OnApplicationPause(bool hasFocus)
    {
        if (!hasFocus)
        {
            PlayerPrefs.SetString("isLoggedIn", "no");
        }
    }

    public static void ChangeScreen(Screen screenName)
    {
        foreach (ScreenPair pair in instance.screens)
        {
            if (pair.screenType == screenName)
            {
                pair.AnimateIn();
            }
            else if (pair.screenObject.activeSelf)
            {
                pair.AnimateOut();
            }
        }
    }

    public static void ChangeScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public static void ShowLoading(bool value)
    {
        instance.loading.Show(value);
    }

    [Serializable]
    public struct ScreenPair
    {
        public Screen screenType;
        public GameObject screenObject;
        public float transitionDuration;

        public void AnimateIn()
        {
            LeanTween.cancel(screenObject);
            screenObject.SetActive(true);
            // Start from transparent and fade in
            CanvasGroup canvasGroup = screenObject.GetComponent<CanvasGroup>();
            if (canvasGroup == null) canvasGroup = screenObject.AddComponent<CanvasGroup>();
            canvasGroup.alpha = 0;
            LeanTween.alphaCanvas(canvasGroup, 1, transitionDuration).setEase(LeanTweenType.easeInOutQuad);
        }

        public void AnimateOut()
        {
            GameObject pp = screenObject;
            LeanTween.cancel(screenObject);
            // Start from opaque and fade out
            CanvasGroup canvasGroup = screenObject.GetComponent<CanvasGroup>();
            if (canvasGroup == null) canvasGroup = screenObject.AddComponent<CanvasGroup>();
            LeanTween.alphaCanvas(canvasGroup, 0, transitionDuration)
                .setEase(LeanTweenType.easeInOutQuad)
                .setOnComplete(() => pp.SetActive(false));
        }
    }
}