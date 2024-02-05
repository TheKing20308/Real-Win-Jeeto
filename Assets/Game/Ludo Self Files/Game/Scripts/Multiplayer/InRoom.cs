using System.Collections;
using Photon;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class InRoom : PunBehaviour
{
    [SerializeField] private Button back;
    [SerializeField] private TMP_Text roomName;
    [SerializeField] private TMP_Text gameStartingInSeconds;
    [SerializeField] private PlayerCard cardPrefab;
    [SerializeField] private Transform parent;
    [SerializeField] private Button play;

    [SerializeField] private Image tournamentStats;
    public static Image _tournamentStats;

    private float gameStartTimer = 60.0f; // example start time

    private void Awake()
    {
        _tournamentStats = tournamentStats;
    }

    private void OnEnable() // Changed from Start to OnEnable
    {
        if (PhotonNetwork.inRoom) // Check if the player is in a room
        {
            UpdateRoomUI();
        }

        back.onClick.AddListener(LeaveRoom);
        play.onClick.AddListener(StartGame);
        PlayFabManager.OnBotJoined += ShowBot;
    }

    private void OnDisable() // Added OnDisable for cleanup
    {
        back.onClick.RemoveListener(LeaveRoom);
        play.onClick.RemoveListener(StartGame);
        PlayFabManager.OnBotJoined -= ShowBot;
    }
    private void ShowBot(string obj)
    {
        PlayerCard botCard = Instantiate(cardPrefab, parent);
        botCard.SetData(obj);
    }

    private void StartGame()
    {
        UIManager.ChangeScene(UIManager.GameScene);
    }

    private void UpdateRoomUI()
    {
        roomName.text = "Room: " + PhotonNetwork.room.Name; // Update room name
        StartCoroutine(GameStartCountdown());
        UpdatePlayerList();
    }

    private void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
        //UIManager.ChangeScreen(UIManager.Screen.Tournament);
    }

    IEnumerator GameStartCountdown()
    {
        while (gameStartTimer > 0)
        {
            gameStartingInSeconds.text = "Game starting in: " + gameStartTimer + "s";
            yield return new WaitForSeconds(1f);
            gameStartTimer -= 1f;
        }
    }

    public override void OnPhotonPlayerConnected(PhotonPlayer newPlayer)
    {
        UpdatePlayerList();
    }

    public override void OnPhotonPlayerDisconnected(PhotonPlayer otherPlayer)
    {
        UpdatePlayerList();
    }

    private void UpdatePlayerList()
    {
        foreach (Transform child in parent)
        {
            Destroy(child.gameObject);
        }

        foreach (PhotonPlayer player in PhotonNetwork.playerList)
        {
            PlayerCard newCard = Instantiate(cardPrefab, parent);
            newCard.SetData(player.NickName.Split('|')[0]);
        }
    }
}
