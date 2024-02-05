using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FooterButtons : MonoBehaviour
{
    [SerializeField] private Button _categories;
    [SerializeField] private Button _leaderboard;
    [SerializeField] private Button _profile;
    [SerializeField] private Button _home;

    private void OnEnable()
    {
        _categories.onClick.AddListener(OnCategories);
        _leaderboard.onClick.AddListener(OnLeaderboard);
        _profile.onClick.AddListener(OnProfile);
        _home.onClick.AddListener(OnHome);
    }

    private void OnDisable()
    {
        _categories.onClick.RemoveListener(OnCategories);
        _leaderboard.onClick.RemoveListener(OnLeaderboard);
        _profile.onClick.RemoveListener(OnProfile);
        _home.onClick.RemoveListener(OnHome);
    }

    void OnCategories()
    {
        UIManager.ChangeScreen(UIManager.Screen.Categories);
    }

    void OnLeaderboard()
    {
        UIManager.ChangeScreen(UIManager.Screen.Leaderboard);
    }

    void OnProfile()
    {
        UIManager.ChangeScreen(UIManager.Screen.Profile);
    }
    
    void OnHome()
    {
        UIManager.ChangeScreen(UIManager.Screen.Home);
    }
}
