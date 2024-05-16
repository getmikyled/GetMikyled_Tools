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
        private static SO_MEDialogueGraph meDialogueGraphFile;
        private static string fileName;
        private static string graphFolderPath = "Assets/Resources/Dialogue";
        private static string graphDataFolderPath = "Assets/_Tools/DialogueSystem/GraphData";

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
            CreateFolder("Assets/_Tools/DialogueSystem", "GraphData");  // Folder that holds graph and node data
            CreateFolder("Assets", "Resources");  
            CreateFolder("Assets/Resources", "Dialogue");                             // Folder that holds dialog graph files
        }


        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void CreateFolder(string argPath, string argFolderName)
        {
            if (AssetDatabase.IsValidFolder(argPath + "/" + argFolderName))
            {
                return;
            }
            Debug.Log("Created " + argFolderName);
            AssetDatabase.CreateFolder(argPath, argFolderName);
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        public static void CreateDSGraphFile()
        {
            CreateFolder(graphDataFolderPath, fileName);
            
            meDialogueGraphFile = CreateAsset<SO_MEDialogueGraph>(graphFolderPath, fileName);
            meDialogueGraphFile.filePath = graphDataFolderPath + "/" + fileName;
            GetElementsFromGraphView();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private static void GetElementsFromGraphView()
        {
            HashSet<string> savedNodes = new HashSet<string>();
            graphView.graphElements.ForEach(graphElement =>
            {
                if (graphElement is DialogueNode dNode)
                {
                    meDialogueGraphFile.CreateDialogueNode(dNode);
                    savedNodes.Add(dNode.nodeID);
                }
                else if (graphElement is StartNode sNode)
                {
                    meDialogueGraphFile.CreateStartNode(sNode);
                    savedNodes.Add(sNode.nodeID);
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

            T asset = AssetDatabase.LoadAssetAtPath<T>(fullPath);

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
        public static void LoadFile(MEDGraphView medGraphView,SO_MEDialogueGraph meDialogueGraph)
        {
            // Return if there is no file path
            if (meDialogueGraph.filePath == null)
            {
                Debug.LogWarning("Warning: No File Path Found");
                return;
            }
            
            List<SO_DialogueNode> nodes = new List<SO_DialogueNode>();
            string[] fileGUIDs = AssetDatabase.FindAssets("t:SO_DialogueNode", new [] {meDialogueGraph.filePath});
            foreach (string guid in fileGUIDs)
            {
                string guidPath = AssetDatabase.GUIDToAssetPath(guid);
                nodes.Add(LoadAsset<SO_DialogueNode>(guidPath));
            }
            medGraphView.CreateNodes(nodes);
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