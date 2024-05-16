using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.Callbacks;
using UnityEngine;

#if UNITY_EDITOR 
using UnityEditor;
#endif //UNITY_EDITOR 

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    [CreateAssetMenu(fileName = "DialogueGraph")]
    public class SO_MEDialogueGraph : ScriptableObject
    {
        public string filePath;
        private Dictionary<string, SO_StartNode> startNodes = new Dictionary<string, SO_StartNode>();
        private Dictionary<string, SO_DialogueNode> dialogueNodes = new Dictionary<string, SO_DialogueNode>();
        
#if UNITY_EDITOR 
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        [OnOpenAsset]
        public static bool OnOpenAsset(int instanceID, int line)
        {
            SO_MEDialogueGraph meDialogueGraph = EditorUtility.InstanceIDToObject(instanceID) as SO_MEDialogueGraph;
            if (meDialogueGraph != null)
            {
                MEDialogue.OpenFromFile(meDialogueGraph);
                return true;
            }
            return false;
        }
        
#endif // UNITY_EDITOR 

        ///-//////////////////////////////////////////////////////////////////
        ///
        public SO_StartNode CreateStartNode(StartNode graphNode)
        {
            SO_StartNode node;
            if (startNodes.ContainsKey(graphNode.nodeID) == false)
            {
                // If graph node is new, create new node
                node = new SO_StartNode();
            }
            else
            {
                node = GetStartNode(graphNode.nodeID);
            }
                
            // Set the nodes values, and return it.
            int connectedNodeID = graphNode.outputPorts[0].connections.;
            node.Initialize(graphNode.conversationName, connectedNodeID);
            return node;
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        public SO_DialogueNode CreateDialogueNode(DialogueNode graphNode)
        {
            SO_DialogueNode node;
            if (dialogueNodes.ContainsKey(graphNode.nodeID) == false)
            {
                // If graph node is new, create new node.
                // Add new node to the dictionary of dialogue nodes
                node = new SO_DialogueNode();
                dialogueNodes.Add(graphNode.nodeID, node);
            }
            else
            {
                // If graphNode already exists in file, update information
                node = GetDialogueNode(graphNode.nodeID);
            }
            
            // Set the nodes values, and return it.
            node.Initialize(graphNode.dialogueName, graphNode.text, graphNode.choices, graphNode.GetPosition());
            return node;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public SO_StartNode GetStartNode(string nodeID)
        {
            startNodes.TryGetValue(nodeID, out SO_StartNode node);
            return node;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public SO_DialogueNode GetDialogueNode(string nodeID)
        {
            dialogueNodes.TryGetValue(nodeID, out SO_DialogueNode node);
            return node;
        }
    }
}
