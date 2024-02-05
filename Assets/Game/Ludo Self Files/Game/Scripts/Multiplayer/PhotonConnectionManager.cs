using AssemblyCSharp;
using ExitGames.Client.Photon;
using UnityEngine;
using Photon;

public class PhotonConnectionManager : PunBehaviour
{
    void Start()
    {
        ConnectToPhoton();
        DontDestroyOnLoad(this);
    }

    void ConnectToPhoton()
    {
        PhotonNetwork.PhotonServerSettings.HostType = ServerSettings.HostingOption.PhotonCloud;
        PhotonNetwork.PhotonServerSettings.PreferredRegion = CloudRegionCode.usw;
        PhotonNetwork.PhotonServerSettings.AppID = StaticStrings.PhotonAppID;

        PhotonNetwork.PhotonServerSettings.Protocol = ConnectionProtocol.Udp;
        Application.runInBackground = true;
        PhotonNetwork.BackgroundTimeout = StaticStrings.photonDisconnectTimeoutLong;
        ;
        if (!PhotonNetwork.connected)
        {
            PhotonNetwork.automaticallySyncScene = true;

            PhotonNetwork.ConnectUsingSettings("1.4");
        }
    }

    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to Photon Master Server");
    }

    public override void OnDisconnectedFromPhoton()
    {
        Debug.LogError("Disconnected from Photon Master Server");
        ConnectToPhoton();
    }
}