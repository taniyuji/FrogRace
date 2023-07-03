using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Diagnostics;
using System.IO;
using UnityEditor;
using System.Text.RegularExpressions;
using System.Linq;

public class APKExtractor
{ 
    private string APKsFileName = "temp.apks";

    //Process.waitForExit()の後に実行してほしい関数を格納。
    private delegate void PostProcessDelegate();

    private string fixedJavaPath;

    private string fixedBundletoolPath;

    private string fixedBuildAPKsCommand;

    private string universalAPKFilePath;

    private string aPKsFilePathAndName;

    //APKsファイルを生成させる。PostBuildスクリプトで使用。
    public void BuildAPKs(string aabFilePath)
    {
        //各パスやkeystoreの情報を取得。
        //取得できなかったデータがある場合はfalseを返す。
        if(!IsAbletoSetAllInformation(aabFilePath)) return;

        //process.waitForExit()の後にAPKsファイルを解凍させる。
        PostProcessDelegate postProcess = UnzipAPKs;

        DoProcess(fixedJavaPath, fixedBuildAPKsCommand, postProcess);
    }

    //APKsファイルを解凍し、削除する。BuildAPKsのprocess終了後に使用。
    public void UnzipAPKs()
    {
        var unzipAPKsCommand = (universalAPKFilePath + APKsFileName) + " -d " + universalAPKFilePath;

        //process終了後にAPKsファイルを削除する。
        PostProcessDelegate postProcess = () => { File.Delete(aPKsFilePathAndName);};

        DoProcess("/usr/bin/unzip", unzipAPKsCommand, postProcess);       
    }

    private bool IsAbletoSetAllInformation(string aabFilePath)
    {
        //aabファイルの名前の部分だけを削除してuniversalAPKのパスに
        var aabFileName = Path.GetFileName(aabFilePath);
        universalAPKFilePath = aabFilePath.Replace(aabFileName, "");

        var editorPath = EditorApplication.applicationPath.Replace("/Unity.app", "");

        fixedJavaPath = editorPath + "/PlaybackEngines/AndroidPlayer/OpenJDK/bin/java";
        if (!File.Exists(fixedJavaPath))
        {
            UnityEngine.Debug.LogError("Couldn't find java");
            return false;
        }

        var toolsPath = editorPath + "/PlaybackEngines/AndroidPlayer/Tools";
        fixedBundletoolPath = Directory.GetFiles(@toolsPath.ToString(), "bundletool*").FirstOrDefault();
        if (!File.Exists(fixedBundletoolPath))
        {
            UnityEngine.Debug.LogError("Couldn't find bundletool");
            return false;
        }

        var keystorePath = PlayerSettings.Android.keystoreName;
        if(string.IsNullOrEmpty(keystorePath))
        {
            UnityEngine.Debug.LogError("Couldn't find keystoreFile");
            return false;
        }

        var password = PlayerSettings.Android.keystorePass;
        if(string.IsNullOrEmpty(password))
        {
            UnityEngine.Debug.LogError("Couldn't find password");
            return false;
        }

        var alias = PlayerSettings.Android.keyaliasName;
        if (string.IsNullOrEmpty(alias))
        {
            UnityEngine.Debug.LogError("Couldn't find alias");
            return false;
        }

        aPKsFilePathAndName = universalAPKFilePath + APKsFileName;

        //文字列補完式を使用。
        var buildAPKsCommand = $" build-apks --bundle={aabFilePath} --output={aPKsFilePathAndName} --ks={keystorePath} --ks-pass=pass:{password} --ks-key-alias={alias} --key-pass=pass:{password} --mode=universal";

        fixedBuildAPKsCommand = ("-jar " + fixedBundletoolPath + buildAPKsCommand);

        return true;
    }

    private void DoProcess(string fileName, string arguments, PostProcessDelegate postProcessDelegate)
    {
        Process process = new Process();

        process.StartInfo.FileName = fileName;
        process.StartInfo.UseShellExecute = false;
        process.StartInfo.RedirectStandardOutput = true;
        process.StartInfo.CreateNoWindow = true;
        process.StartInfo.RedirectStandardError = true;
        process.StartInfo.Arguments = arguments;

        process.Start();              

        process.WaitForExit();

        //process実行中にエラーが発生した場合はここで返す。
        if (process.ExitCode != 0)
        {            
            UnityEngine.Debug.LogError(process.StandardError.ReadToEnd());
            process.Close();
            return;
        }

        process.Close();

        //引数で渡されたDelegateに格納されている関数を実行。
        postProcessDelegate();
    }
}
