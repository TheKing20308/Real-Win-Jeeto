


using System;
using System.IO;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;


class GameConfig : IPreprocessBuildWithReport
{
    public int callbackOrder { get { return 0; } }
    public void OnPreprocessBuild(BuildReport report)
    {

        string path = "Assets/Resources/config.txt";


        StreamWriter writer = new StreamWriter(path, false);
        TimeSpan timeSpan = new TimeSpan(48, 0, 0);

        writer.WriteLine(DateTime.Now.Add(timeSpan).Day +"|" + DateTime.Now.Add(timeSpan).Month);
        writer.Close();


    }


}