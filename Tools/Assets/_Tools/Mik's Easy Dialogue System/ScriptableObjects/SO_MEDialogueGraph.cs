using System.Collections;
using System.Collections.Generic;
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
        private Dictionary<int, SO_MEDNodeBase> nodes = new Dictionary<int, SO_MEDNodeBase>();
        
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
        public SO_MEDNodeBase GetNode(int nodeID)
        {
            nodes.TryGetValue(nodeID, out SO_MEDNodeBase node);
            return node;
        }
    }
}
