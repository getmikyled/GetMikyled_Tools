using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR

using UnityEditor;
using UnityEditor.Experimental.GraphView;

namespace GetMikyled.MEDialogue 
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class MEDIOUtility
    {
        private static MEDGraphView graphView;
        private static MEDialogueGraph meDialogueGraphFile;
        private static string fileName;
        private static string graphFolderPath = "Assets/Resources/Dialogue";

#region Saving
        public static void InitializeSave(MEDGraphView argGraphView, string argFileName)
        {
            Debug.Log("Save initialized");
            graphView = argGraphView;
            fileName = argFileName;

            CreateStaticFolders();
            CreateDSGraphFile();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void CreateStaticFolders()
        {
            CreateFolder("Assets", "Resources");  
            CreateFolder("Assets/Resources", "Dialogue");   // Folder that holds dialog graph files
        }


        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void CreateFolder(string argPath, string argFolderName)
        {
            if (AssetDatabase.IsValidFolder(argPath + "/" + argFolderName))
            {
                return;
            }
            AssetDatabase.CreateFolder(argPath, argFolderName);
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void CreateDSGraphFile()
        {
            meDialogueGraphFile = CreateAsset<MEDialogueGraph>(graphFolderPath, fileName);
            GetElementsFromGraphView();
            EditorUtility.SetDirty(meDialogueGraphFile);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private static void GetElementsFromGraphView()
        {
            HashSet<string> savedNodes = new HashSet<string>();
            graphView.graphElements.ForEach(graphElement =>
            {
                if (graphElement is StartNode sNode)
                {
                    meDialogueGraphFile.SaveStartNode(sNode);
                    savedNodes.Add(sNode.GUID);
                }
                else if (graphElement is DialogueNode dNode)
                {
                    meDialogueGraphFile.SaveDialogueNode(dNode);
                    savedNodes.Add(dNode.GUID);
                }
            });
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private static T CreateAsset<T>(string argPath, string argAssetName) where T : ScriptableObject
        {
            string fullPath = $"{argPath}/{argAssetName}.asset";

            T asset = LoadAsset<T>(fullPath);

            // If asset isn't found, create a new asset
            if (asset == null)
            {
                asset = ScriptableObject.CreateInstance<T>();

                AssetDatabase.CreateAsset(asset, fullPath);
            }
            return asset;
        }
        #endregion // SAVING

#region LOADING

        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void LoadFile(MEDGraphView medGraphView, MEDialogueGraph meDialogueGraph)
        {
            // Clear the graph view of existing nodes
            medGraphView.ClearGraphElements();
            
            // Add nodes from save data
            medGraphView.CreateNodes(meDialogueGraph.startNodes, meDialogueGraph.dialogueNodes);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private static T LoadAsset<T>(string argPath) where T : ScriptableObject
        {
            return AssetDatabase.LoadAssetAtPath<T>(argPath);
        }
        
 #endregion // LOADING
    }
}

#endif // UNITY_EDITOR