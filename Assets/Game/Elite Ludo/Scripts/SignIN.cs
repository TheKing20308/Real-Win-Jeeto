using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Google;

public class SignIN : MonoBehaviour
{

    public string webClientId = "";

    private GoogleSignInConfiguration configuration;

   private void Awake()
    {


        configuration = new GoogleSignInConfiguration
        {
            WebClientId = webClientId,

            RequestIdToken = true
     , RequestEmail = true,
            RequestAuthCode = true, RequestProfile = true
        };


    }

    public void OnSignIn()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestIdToken = true;
      

        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
          OnAuthenticationFinished);
    }

    public void OnSignOut()
    {
    
        GoogleSignIn.DefaultInstance.SignOut();
    }

    public void OnDisconnect()
    {

        GoogleSignIn.DefaultInstance.Disconnect();
    }

    internal void OnAuthenticationFinished(Task<GoogleSignInUser> task)
    {
        if (task.IsFaulted)
        {
            using (IEnumerator<System.Exception> enumerator =
                    task.Exception.InnerExceptions.GetEnumerator())
            {
                if (enumerator.MoveNext())
                {
                    GoogleSignIn.SignInException error =
                            (GoogleSignIn.SignInException)enumerator.Current;
                    FindObjectOfType<Authenticator>().GoogleErrorCallback("Failed  " + error +  " ");

                }
                else
                {
                    FindObjectOfType<Authenticator>().GoogleErrorCallback("Fail");

                }
            }
        }
        else if (task.IsCanceled)
        {
            FindObjectOfType<Authenticator>().GoogleErrorCallback("Cancelled  ");
        }
        else
        {
            FindObjectOfType<Authenticator>().GoogleSuccessCallback(task.Result.UserId, task.Result.Email, task.Result.ImageUrl.ToString(), task.Result.DisplayName, task.Result.IdToken) ;
        }
    }

    public void OnSignInSilently()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = false;
        GoogleSignIn.Configuration.RequestIdToken = true;
  
        GoogleSignIn.DefaultInstance.SignInSilently()
              .ContinueWith(OnAuthenticationFinished);
    }


    public void OnGamesSignIn()
    {
        GoogleSignIn.Configuration = configuration;
        GoogleSignIn.Configuration.UseGameSignIn = true;
        GoogleSignIn.Configuration.RequestIdToken = false;

  
        GoogleSignIn.DefaultInstance.SignIn().ContinueWith(
          OnAuthenticationFinished);
    }
    public void SignInGoogle()
    {
        OnSignIn();
    }


}
