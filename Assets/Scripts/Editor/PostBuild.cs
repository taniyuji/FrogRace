using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using System.Linq;
using UnityEngine;

public class PostBuild : IPostprocessBuildWithReport
{
    public int callbackOrder { get { return 0; } }    

    public void OnPostprocessBuild(BuildReport report)
    {
        if (!APKExtractSettingsRegister.extractAPK) return;

        var apkExtractor = new APKExtractor();

        //aabと名のつくファイルをlinqのwhereで検索
        var aabFile = report.GetFiles()
                            .Where(i => i.ToString().EndsWith(".aab"))
                            .FirstOrDefault()
                            .path;

        //FirstOrDefault()でnullが返された場合は何もしない。
        if (aabFile == null)
        {
            //aabファイルを出力する設定にも関わらず見つからない場合は
            if(UnityEditor.EditorUserBuildSettings.buildAppBundle)
                Debug.LogError("Couldn't find a aabFile");

            return;
        }

        apkExtractor.BuildAPKs(aabFile);
    }
}
