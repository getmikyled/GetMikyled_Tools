using TMPro;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class MEDialogueUtility
    {
        
        private static GameObject[] uiToActivate;
        private static TextMeshProUGUI nameTextField;
        private static TextMeshProUGUI textBox;

        public static void InitializeUI(GameObject[] uiToActivate, TextMeshProUGUI nameTextField, TextMeshProUGUI textBox)
        {
            MEDialogueUtility.uiToActivate = uiToActivate;
            MEDialogueUtility.nameTextField = nameTextField;
            MEDialogueUtility.textBox = textBox;
        }
        
        public static void PlayDialogueFromFile(string fileName, int nodeID)
        {
            // Get 
            SO_MEDialogueGraph graphFile = Resources.Load<SO_MEDialogueGraph>("Dialogue/" + fileName);
            PlayDialogue(graphFile.GetNode(nodeID));
        }

        private static void PlayDialogue(SO_MEDNodeBase node)
        {
            
        }
    }

}