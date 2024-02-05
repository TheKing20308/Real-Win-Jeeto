using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using SimpleJSON;
using System;
using UnityEngine.Networking;
//using Garlic.Plugins.Webview;
//using Garlic.Plugins.Webview.Utils;
using AssemblyCSharp;

public class WithdrawMoneyScript : MonoBehaviour
{
    public GameObject withdrawlAmount;

    public Text NetAmountText;

    public GameObject saveBtn;
    public GameObject bankName;
    public GameObject accountNumber;
    public GameObject ifscCode;
    public Text MW;
    public GameObject ErrorText;
    // Start is called before the first frame update
    void Start()
    {
        // GarlicWebview.Instance.SetCallbackInterface(new GarlicWebviewCallbackReceiver());
        withdrawlAmount.SetActive(true); bankName.SetActive(true); accountNumber.SetActive(true); ifscCode.SetActive(true);
        accountNumber.GetComponent<InputField>().placeholder.GetComponent<Text>().text = "Enter account number";
        MW.text = "Minimum withdrawal is Rs. " + PlayerPrefs.GetInt("MW", 50).ToString(); 
        GameManager.Instance.saveButton = saveBtn;
        saveBtn.SetActive(true);
        HandleDropdownInputData(0);
        withdrawlAmount.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        ifscCode.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        NetAmount = 0;
        bool Done = int.TryParse(FindObjectOfType<InitMenuScript>().DataArray[0], out NetAmount);
        if (!Done)
            NetAmount = 0;
        NetAmountText.text = "Net Balance  Rs. " + NetAmount.ToString();

    }


    private void OnEnable()
    {
        withdrawlAmount.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        ifscCode.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
    }
    int NetAmount = 0;
    public void callAPI()
    {
        //saveBtn.SetActive(false);
        if(withdrawlAmount.GetComponent<InputField>().text == "")
        {
            ErrorText.GetComponent<Text>().text = "Please Enter Withdrawal Amount";
            ErrorText.GetComponent<Animation>().Play();
        }
        else if(ifscCode.GetComponent<InputField>().text == "" && Bank.isOn)
        {
            ErrorText.GetComponent<Text>().text = "Please Enter IFSC Code";
            ErrorText.GetComponent<Animation>().Play();
        }
        else if(accountNumber.GetComponent<InputField>().text == "")
        {
            if(UPI.isOn)
            ErrorText.GetComponent<Text>().text = "Please Enter UPI Id";
            else if(Paytm.isOn)
            ErrorText.GetComponent<Text>().text = "Please Enter Paytm Id";
            else if(Bank.isOn)
            ErrorText.GetComponent<Text>().text = "Please Enter Bank Account";
            ErrorText.GetComponent<Animation>().Play();
        }
        else if(bankName.GetComponent<InputField>().text == "" && Bank.isOn)
        {
            ErrorText.GetComponent<Text>().text = "Please Enter Bank Name";
            ErrorText.GetComponent<Animation>().Play();
        }
        else if(!UPI.isOn && !Paytm.isOn && !Bank.isOn)
        {
            ErrorText.GetComponent<Text>().text = "Please Select Mode Of Withdrawal";
            ErrorText.GetComponent<Animation>().Play();
        }
        print(accountNumber.GetComponent<InputField>().text);
        if ((withdrawlAmount.GetComponent<InputField>().text) != "" && (accountNumber.GetComponent<InputField>().text) != "")
        {
            int amountWithdrawl = 0;
            bool done = int.TryParse(withdrawlAmount.GetComponent<InputField>().text, out amountWithdrawl);
            if (done)
            {
                Debug.Log("   " + accountNumber.GetComponent<InputField>().text);
                String bName = bankName.GetComponent<InputField>().text;
                String ID = accountNumber.GetComponent<InputField>().text;
                String ifscC = ifscCode.GetComponent<InputField>().text;
                //  int index_num = PlayerPrefs.GetInt("index");
                string url = StaticStrings.baseURL + "api/amount/withdraw";

                if ((amountWithdrawl <= NetAmount) && (amountWithdrawl >= PlayerPrefs.GetInt("MW", 50)))
                {

                    string type = "null";
                    if (UPI.isOn)
                    {
                        type = "upi";
                        if (accountNumber.GetComponent<InputField>().text == "")
                        {
                            saveBtn.SetActive(true);
                            GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Please fill all the details.";
                            GameManager.Instance.objectGame.SetActive(true);
                            Debug.Log("   " + accountNumber.GetComponent<InputField>().text);
                            return;
                        }
                    }
                    if (Paytm.isOn)
                    {
                        type = "paytm";
                        if (accountNumber.GetComponent<InputField>().text.Length != 10)
                        {
                            saveBtn.SetActive(true);
                            GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Please fill all the details.";
                            GameManager.Instance.objectGame.SetActive(true);

                            return;
                        }
                    }
                    if (Bank.isOn)
                    {
                        type = "bank";
                        if (bankName.GetComponent<InputField>().text == "")
                        {
                            saveBtn.SetActive(true);
                            GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Please fill all the details.";
                            GameManager.Instance.objectGame.SetActive(true);

                            return;
                        }
                        if (ifscCode.GetComponent<InputField>().text == "")
                        {
                            saveBtn.SetActive(true);
                            GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Please fill all the details.";
                            GameManager.Instance.objectGame.SetActive(true);

                            return;
                        }

                    }
                    Debug.Log("Req made ..." + type);
                    if (type != null)
                    {
                        WWWForm form = new WWWForm();
                        form.AddField("playerid", PlayerPrefs.GetString("PID"));
                        form.AddField("withdrawmethod", type);
                        form.AddField("requestAmount", amountWithdrawl);
                        form.AddField("ifsc", ifscC);
                        form.AddField("upi_id", ID);
                        form.AddField("Paytm_ID", ID);
                        form.AddField("account_number", ID);
                        form.AddField("bank_name", bName);
                        UnityWebRequest req = UnityWebRequest.Post(url, form);

                        StartCoroutine(WaitForRequest(req));

                    }
                }
                else
                {
                    GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "You don't have enough coins";
                    GameManager.Instance.objectGame.SetActive(true);
                    saveBtn.SetActive(true);
                    // WithdrawDetailWindow.saveBtn.SetActive(true);
                    Debug.Log("you don't have enough coins : " + amountWithdrawl);
                }

            }
            else
            {

                saveBtn.SetActive(true);
                GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Enter numeric amount ";
                GameManager.Instance.objectGame.SetActive(true);

            }
        }

        
      
    }
    IEnumerator WaitForRequest(UnityWebRequest www)
    {
    
        yield return www.SendWebRequest();
        Debug.Log(www.downloadHandler.text);
        int amountdeduct = int.Parse(withdrawlAmount.GetComponent<InputField>().text);
        // check for errors
        if (www.error == null)
        {

            JSONNode jsonNode = JSON.Parse(www.downloadHandler.text);
            if (jsonNode["notice"] == "Final Amount Update")
            {
                NetAmountText.text = "Net Balance  Rs."+ jsonNode["wincoin"];
                GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Payment Request Successfull";
                GameManager.Instance.objectGame.SetActive(true);
                saveBtn.SetActive(true);
                Debug.Log("Working good : Amount to Deduct " + amountdeduct);
 
            }
            else if (jsonNode["notice"] == "Already Requested")
            {
                GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Previous Request Pending , Please try after some time.";
                GameManager.Instance.objectGame.SetActive(true);
                saveBtn.SetActive(true);

            }
            else
            {
                GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = "Payment Request Unsuccessfull, Please try again.";
                GameManager.Instance.objectGame.SetActive(true);
                saveBtn.SetActive(true);
                Debug.Log("There is an error");
            }
            
        }
        else
        {
            GameManager.Instance.dialogNew.dialogTxt.GetComponent<Text>().text = www.error;
            GameManager.Instance.objectGame.SetActive(true);
            saveBtn.SetActive(true);
        }
        withdrawlAmount.GetComponent<InputField>().text = "";
      accountNumber.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text  = "";
        ifscCode.GetComponent<InputField>().text = "";

    }

    public void OnClickShowPaymentHistory()
    {

    }

    public Toggle UPI,Paytm,Bank;




    public void HandleDropdownInputData(int val)
    {
      
        if (val == 0)
        {
          
            Paytm.isOn = false;
            Bank.isOn = false;
       
            accountNumber.GetComponent<InputField>().placeholder.GetComponent<Text>().text = "Enter UPI ID";
            bankName.SetActive(false);  ifscCode.SetActive(false); 
        }
        else if (val == 1)
        {
            UPI.isOn = false;
     
            Bank.isOn = false;
            accountNumber.GetComponent<InputField>().placeholder.GetComponent<Text>().text = "Enter Paytm number";
            bankName.SetActive(false); ifscCode.SetActive(false);

        }
        else if (val == 2)
        {
            UPI.isOn = false;
            Paytm.isOn = false;
       
            accountNumber.GetComponent<InputField>().placeholder.GetComponent<Text>().text = "Enter account number";
            bankName.SetActive(true); ifscCode.SetActive(true);

        }
        withdrawlAmount.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";
        accountNumber.GetComponent<InputField>().text = "";
        ifscCode.GetComponent<InputField>().text = "";
        bankName.GetComponent<InputField>().text = "";

    }


}
