using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using UnityEditor.Callbacks;
using UnityEngine;

#if UNITY_EDITOR 
using UnityEditor;
#endif //UNITY_EDITOR 

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    [Serializable]
    [CreateAssetMenu(fileName = "DialogueGraph")]
    public class MEDialogueGraph : ScriptableObject
    {
        public List<StartNodeSaveData> startNodes;
        public List<DialogueNodeSaveData> dialogueNodes;

        public MEDialogueGraph()
        {
            startNodes = new List<StartNodeSaveData>();
            dialogueNodes = new List<DialogueNodeSaveData>();
        }
        
#if UNITY_EDITOR 
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        [OnOpenAsset]
        public static bool OnOpenAsset(int instanceID, int line)
        {
            MEDialogueGraph meDialogueGraph = EditorUtility.InstanceIDToObject(instanceID) as MEDialogueGraph;
            if (meDialogueGraph != null)
            {
                MEDialogueWindow.OpenFromFile(meDialogueGraph);
                return true;
            }
            return false;
        }
        
#endif // UNITY_EDITOR 

        ///-//////////////////////////////////////////////////////////////////
        ///
        public StartNodeSaveData SaveStartNode(StartNode graphNode)
        {
            // Check if StartNodeSaveData exists
            StartNodeSaveData sNodeSaveData = startNodes.FirstOrDefault(sNode => sNode.GUID.Equals(graphNode.GUID));
            if (sNodeSaveData == null)
            {
                // If graph node is new, create new save data
                sNodeSaveData = new StartNodeSaveData()
                {
                    GUID = graphNode.GUID
                };
                startNodes.Add(sNodeSaveData);
            }
            
            // Save the data, and return it.
            // TO DO: Figure out how to connect nextNodeGUID
            sNodeSaveData.Initialize(graphNode.conversationName, "", graphNode.GetPosition().position);
            return sNodeSaveData;
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        public DialogueNodeSaveData SaveDialogueNode(DialogueNode graphNode)
        {
            // Check if DialogueNodeSaveData exists
            DialogueNodeSaveData dNodeSaveData = dialogueNodes.FirstOrDefault(dNode => dNode.GUID.Equals(graphNode.GUID));
            if (dNodeSaveData == null)
            {
                // If graph node is new, create new save data
                dNodeSaveData = new DialogueNodeSaveData()
                {
                    GUID = graphNode.GUID
                };
                dialogueNodes.Add(dNodeSaveData);
            }
            
            // Save the data, and return it.
            dNodeSaveData.Initialize(graphNode.dialogueName, graphNode.text, graphNode.choices, graphNode.GetPosition().position);
            return dNodeSaveData;
        }
    }
}
