using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class MEDialogueReader
    {
        private SO_MEDialogueGraph graphFile;

        private GameObject[] uiToActivate;
        private TextMeshProUGUI nameTextField;
        private TextMeshProUGUI textBox;

        public MEDialogueReader(GameObject[] uiToActivate, TextMeshProUGUI nameTextField, TextMeshProUGUI textBox)
        {
            this.uiToActivate = uiToActivate;
            this.nameTextField = nameTextField;
            this.textBox = textBox;
        }
        
        
    }

}