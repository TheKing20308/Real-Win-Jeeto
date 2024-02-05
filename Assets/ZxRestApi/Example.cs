using UnityEngine;
using ZxLog;

namespace ZxRestApi
{
    public class Example : MonoBehaviour
    {
        [Header("Check This By Using Method From Context Menu")]
        [Header("Enter Credentials First")]
        [Space]
        [Header("Zx Rest Api Checker")]
        [SerializeField] private string url;
        [SerializeField] private string email;
        [SerializeField] private string password;

        // Method to initiate the login process
        public void Login()
        {
            //Hit.Initialize();
            LoginRequestClass loginRequest = new LoginRequestClass(email, password);
            Hit.instance.PostRequest<LoginResponseClass, LoginRequestClass>(url, loginRequest, HandleLoginResponse);
        }

        // Callback method to handle the login response
        private void HandleLoginResponse(LoginResponseClass responseClass)
        {
            if (responseClass != null && responseClass.success)
            {
                Debug.Log("Login Successful: " + responseClass.ResponseData.name);
                Hit.instance.StopPostRequestCoroutine();
                Print.CustomLog(responseClass.ResponseData.permtoken, LogColor.Red);
            }
            else
            {
                Debug.LogError("Login Failed");
                Hit.instance.StopPostRequestCoroutine();
            }
        }

        // Context menu method for testing in the Unity Editor
        [ContextMenu("Test Login")]
        private void TestLogin()
        {
            Login();
        }
    }

    public class LoginRequestClass
    {
        public string email;
        public string password;

        public LoginRequestClass(string email, string password)
        {
            this.email = email;
            this.password = password;
        }
    }

    public class LoginResponseClass
    {
        public int ResponseCode;
        public LoginResponseData ResponseData;
        public string ResponseMessage;
        public bool success;
    }

    public class LoginResponseData
    {
        public string email;
        public string id;
        public string name;
        public string permtoken;
    }
}
