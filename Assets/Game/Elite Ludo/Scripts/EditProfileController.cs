

using System;
using System.Collections;

using SimpleJSON;
using AssemblyCSharp;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Networking;

public class EditProfileController : MonoBehaviour
{



    public GameObject loading;
    public Sprite hello;
    public Text Username;
    public Image Pro_Pic,ProfilePhotoPanel;
    public RawImage Updalod;
    private void Start()
    {

        Texture2D e = new Texture2D(1,1);
        e = (Texture2D) Updalod.texture;

 //    StartCoroutine(Call(e.EncodeToJPG()));
     //  StartCoroutine(LoadProfileData()); 
    }


    IEnumerator Call(byte[] bytes)
    {
        WWWForm form = new WWWForm();
        form.AddField("playerid", PlayerPrefs.GetString("PID"));

        form.AddBinaryData("profile_img", bytes, "pp" + PlayerPrefs.GetString("PID") + ".jpg", "image/jpg");
        string url = StaticStrings.baseURL;
        using (UnityWebRequest www = UnityWebRequest.Post(url + "api/player/profile/image/update", form))
        {
            //  print(GameManager.Instance.adminurl + "/api/players/profile-image/save");
            yield return www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
                loading.SetActive(false);
            }
            else
            {
                loading.SetActive(false);
                print(www.downloadHandler.text);
                JSONNode jsonNode = SimpleJSON.JSON.Parse(www.downloadHandler.text);
                if (jsonNode["notice"] == "Image Updated")
                {

                }
            }
        }
    }

    public void LoadImageProfile()
    {
        StartCoroutine(LoadProfileData());
    }

        string PicURl = "http://ludojoker.webplusgame.com/storage/Profile/";
    public IEnumerator LoadProfileData()
    {

        yield return new WaitForSeconds(0.1f);
        string PPurl = PicURl +  PlayerPrefs.GetString("pic_name");
   
        using (UnityWebRequest handshake = UnityWebRequestTexture.GetTexture(PPurl))
        {
            yield return handshake.SendWebRequest();
  
            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
          
                if (PlayerPrefs.GetString("pic_url").Length > 10)
                    StartCoroutine(LoadImage(PlayerPrefs.GetString("pic_url")));

            }
            else
            {

                Texture2D tex = DownloadHandlerTexture.GetContent(handshake);
                Sprite Pic = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);
                Pro_Pic.sprite = Pic;
                ProfilePhotoPanel.sprite = Pic;
                GameManager.Instance.avatarMy = Pic;


                if (DownloadHandlerTexture.GetContent(handshake) == null)
                {
                    if (PlayerPrefs.GetString("pic_url").Length > 10)
                        StartCoroutine(LoadImage(PlayerPrefs.GetString("pic_url")));

                }
            }

        }
        }

   


    IEnumerator LoadImage(string imageUri)
    {
        using (UnityWebRequest handshake = UnityWebRequestTexture.GetTexture(imageUri))
        {
            yield return handshake.SendWebRequest();
            if (handshake.isHttpError || handshake.isNetworkError || handshake.isNetworkError)
            {
                Debug.Log(handshake.error.ToString());
            }
            else
            {
                Texture2D tex = ((DownloadHandlerTexture)handshake.downloadHandler).texture;
                Sprite Pic = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);

                Pro_Pic.sprite = Pic;
                GameManager.Instance.avatarMy = Pic;

                ProfilePhotoPanel.sprite = Pro_Pic.sprite;
                sprites = tex;
                byte[] byt = ImageConversion.EncodeToPNG(sprites);
                StartCoroutine(upload_pro_image(byt));
            }
        }
    }





    public void GetPictureFromCamera(){
        if( NativeCamera.IsCameraBusy() )
			return;

        TakePicture( 128 );
    }

    public void GetPictureFromGallery(){
        if( NativeGallery.IsMediaPickerBusy() )
			return;

        PickImage( 512 );
    }

    private void PickImage( int maxSize )
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery( ( path ) =>
        {
           
            if( path != null )
            {
                // Create Texture from selected image
                   sprites = NativeGallery.LoadImageAtPath( path, maxSize );
                Rect rec = new Rect(0, 0, sprites.width, sprites.height);
                 hello = Sprite.Create(sprites, rec, new Vector2(0, 0), 1);
                byte[] bytes = File.ReadAllBytes(path);
               // Destroy(sprites);
              


                StartCoroutine(upload_pro_image(bytes));
               
                if (sprites == null )
                {
              
                    return;
                }
            }
        }, "Select a PNG image", "image/png" );

        Debug.Log( "Permission result: " + permission );
    }

    private void TakePicture( int maxSize )
    {
        NativeCamera.Permission permission = NativeCamera.TakePicture( ( path ) =>
        {
  
            if( path != null )
            {

                 sprites = NativeCamera.LoadImageAtPath( path, maxSize );
                Rect rec = new Rect(0, 0, sprites.width, sprites.height);
                  hello = Sprite.Create(sprites, rec, new Vector2(0, 0), 1);

                byte[] bytes = File.ReadAllBytes(path);
               // Destroy(sprites);
             

                StartCoroutine(upload_pro_image(bytes));
                if (sprites == null )
                {
             
                    return;
                }
            }
        }, maxSize );

        Debug.Log( "Permission result: " + permission );
    }
  public Texture2D sprites;
    IEnumerator upload_pro_image(byte[] bytes)
    {
        loading.SetActive(true);
        if (sprites != null)
        {
        
            //  bytes = sprites.EncodeToJPG();
            WWWForm form = new WWWForm();
            form.AddField("playerid", PlayerPrefs.GetString("PID"));

            form.AddBinaryData("profile_img", bytes, "pp" + PlayerPrefs.GetString("PID") + ".jpg", "image/jpg");
            string url = StaticStrings.baseURL;
         using (UnityWebRequest www = UnityWebRequest.Post( url + "api/player/profile/image/update", form))
            {
              //  print(GameManager.Instance.adminurl + "/api/players/profile-image/save");
                yield return www.SendWebRequest();

                if (www.isNetworkError || www.isHttpError)
                {
                    Debug.Log(www.error);
                    loading.SetActive(false);
                }
                else
                {
                    loading.SetActive(false);
                    print(www.downloadHandler.text);
                    JSONNode jsonNode = SimpleJSON.JSON.Parse(www.downloadHandler.text);
                    if (jsonNode["notice"] == "Image Updated")
                    {
             
                        Sprite Pic = Sprite.Create(sprites, new Rect(0, 0, sprites.width, sprites.height), Vector2.zero);

                        Pro_Pic.sprite = Pic;
                        GameManager.Instance.avatarMy = Pic;
                        ProfilePhotoPanel.sprite = Pro_Pic.sprite;
                        string PPurl = PicURl + "/Profile/pp" + PlayerPrefs.GetString("PID") + ".jpg";
                        PlayerPrefs.SetString("pic_url",PPurl);
                    }
                    else
                    {
                        Debug.Log("error");

                    }
                }
            }
        }
        else
        {
            Debug.LogError("OOPS, Image is empty!!!!");
        }
    }




    public void Logout()
    {
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene("login");
    }


}
