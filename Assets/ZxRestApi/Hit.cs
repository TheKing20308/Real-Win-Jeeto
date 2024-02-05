using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.UI;

namespace ZxRestApi
{
    public class Hit : MonoBehaviour
    {
        public static string token; // Static token variable
        public static Hit instance; // Singleton instance

        private Coroutine getAndSetImageCoroutine;
        private Coroutine getRequestCoroutine;
        private Coroutine postRequestCoroutine;

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }
        }

        // private void Awake()
        // {
        //     // Check if the instance already exists
        //     if (instance == null)
        //     {
        //         // If not, set it to this and make it persistent
        //         instance = this;
        //         //DontDestroyOnLoad(gameObject);
        //     }
        //     else if (instance != this)
        //     {
        //         // If instance already exists and it's not this, destroy this
        //         Destroy(gameObject);
        //     }
        // }
        // /// <summary>
        // ///     Use Hit.Initialize(); before using this tool
        // /// </summary>
        // public static void Initialize()
        // {
        //     // Check if an instance already exists in the scene
        //     if (instance == null)
        //     {
        //         GameObject restApiHelper = new GameObject("RestApiHelper");
        //         instance = restApiHelper.AddComponent<Hit>();
        //         //DontDestroyOnLoad(restApiHelper);
        //     }
        //     // If the instance already exists, no need to create a new GameObject
        // }

        public void SetToken(string newToken)
        {
            token = newToken;
        }

        public void GetRequest<T>(string url, Action<T> callback, bool loop = false, float delay = 0f)
        {
            if (getRequestCoroutine != null) StopCoroutine(getRequestCoroutine);
            getRequestCoroutine = StartCoroutine(GetRequestCoroutine(url, callback, loop, delay));
        }

        public void PostRequest<T, U>(string url, U requestData, Action<T> callback, bool loop = false, float delay = 0f)
        {
            if (postRequestCoroutine != null) StopCoroutine(postRequestCoroutine);
            postRequestCoroutine = StartCoroutine(PostRequestCoroutine(url, requestData, callback, loop, delay));
        }

        public void GetAndSetImage(string imageUrl, Image imageComponent, Action callback, bool loop = false, float delay = 0f)
        {
            if (getAndSetImageCoroutine != null) StopCoroutine(getAndSetImageCoroutine);
            getAndSetImageCoroutine = StartCoroutine(GetAndSetImageCoroutine(imageUrl, imageComponent, callback, loop, delay));
        }
        private Dictionary<string, string> GetHeaders()
        {
            Dictionary<string, string> headers = new Dictionary<string, string>();
            if (!string.IsNullOrEmpty(token))
            {
                headers.Add("Authorization", "Bearer " + token);
            }
            headers.Add("Content-Type", "application/json"); // Add this line if needed

            // Debug log to check headers
            foreach (KeyValuePair<string, string> header in headers)
            {
                Debug.Log($"Header: {header.Key} Value: {header.Value}");
            }

            return headers;
        }

        // Add methods to stop coroutines
        public void StopAllApiCoroutines()
        {
            if (getRequestCoroutine != null) StopCoroutine(getRequestCoroutine);
            if (postRequestCoroutine != null) StopCoroutine(postRequestCoroutine);
            if (getAndSetImageCoroutine != null) StopCoroutine(getAndSetImageCoroutine);
        }

        public void StopGetRequestCoroutine()
        {
            if (getRequestCoroutine != null) StopCoroutine(getRequestCoroutine);
        }
        public void StopPostRequestCoroutine()
        {
            if (postRequestCoroutine != null) StopCoroutine(postRequestCoroutine);
        }
        public void StopImageCoroutine()
        {
            if (getAndSetImageCoroutine != null) StopCoroutine(getAndSetImageCoroutine);
        }
#region Coroutines

        private IEnumerator GetRequestCoroutine<T>(string url, Action<T> callback, bool loop, float delay)
        {
            do
            {
                WWW www = new WWW(url, null, GetHeaders());
                yield return www;

                if (string.IsNullOrEmpty(www.error))
                {
                    T responseData = JsonConvert.DeserializeObject<T>(www.text);
                    callback?.Invoke(responseData);
                    Debug.Log("GET Request Success");
                }
                else
                {
                    Debug.LogError($"GET Request Failed: {www.error}");
                }

                if (loop) yield return new WaitForSeconds(delay);
            } while (loop);
        }

        private IEnumerator PostRequestCoroutine<T, U>(string url, U requestData, Action<T> callback, bool loop, float delay)
        {
            do
            {
                string jsonData = JsonConvert.SerializeObject(requestData);
                WWW www = new WWW(url, Encoding.UTF8.GetBytes(jsonData), GetHeaders());
                yield return www;

                if (string.IsNullOrEmpty(www.error))
                {
                    T responseData = JsonConvert.DeserializeObject<T>(www.text);
                    callback?.Invoke(responseData);
                    Debug.Log("POST Request Success");
                }
                else
                {
                    Debug.LogError($"POST Request Failed: {www.error}");
                }

                if (loop) yield return new WaitForSeconds(delay);
            } while (loop);
        }

        private IEnumerator GetAndSetImageCoroutine(string imageUrl, Image imageComponent, Action callback, bool loop, float delay)
        {
            do
            {
                WWW www = new WWW(imageUrl);
                yield return www;

                if (string.IsNullOrEmpty(www.error))
                {
                    Texture2D texture = www.texture;
                    imageComponent.sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));
                    callback?.Invoke();
                    Debug.Log("Image Load Success");
                }
                else
                {
                    Debug.LogError($"Image Load Failed: {www.error}");
                }

                if (loop) yield return new WaitForSeconds(delay);
            } while (loop);
        }

#endregion
    }
}
