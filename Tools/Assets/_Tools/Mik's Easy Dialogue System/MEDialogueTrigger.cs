using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class MEDialogueTrigger : MonoBehaviour
    {
        [SerializeField] private string fileName;
        [SerializeField] private int nodeID;

        public void PlayDialogue()
        {
            MEDialogueUtility.PlayDialogueFromFile(fileName, nodeID);
        }
        
    }

}