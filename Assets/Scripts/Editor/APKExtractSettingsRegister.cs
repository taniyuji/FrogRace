using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

static class APKExtractSettingsRegister
{
    //bool.Parse(hoge)でnullを返されるのが怖い
    //一度はextractAPKを設定したかどうかで与える値を変える
    public static bool extractAPK
        = EditorUserSettings.GetConfigValue("ExtractAPK") == null ?
        false : bool.Parse(EditorUserSettings.GetConfigValue("ExtractAPK"));

    [SettingsProvider]
    public static SettingsProvider CreateAPKExtractProvider()
    {
        EditorUserSettings.SetConfigValue("ExtractAPK", extractAPK.ToString()); ;

        var provider = new SettingsProvider("Project/", SettingsScope.Project)
        {
            label = "ExtractingAPKSettings",
            guiHandler = searchContext => extractAPK = EditorGUILayout.Toggle("ExtractAPK", extractAPK),            
            keywords = new HashSet<string>(new[] { "ExtractingAPK" })
        };        

        return provider;
    }
}
