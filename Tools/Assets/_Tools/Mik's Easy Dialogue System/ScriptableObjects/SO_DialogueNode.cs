using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace GetMikyled.MEDialogue 
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class SO_DialogueNode : SO_MEDNodeBase
    {
        [SerializeField] public string dialogueName;
        [SerializeField][TextArea] public string text;
        [SerializeField] public List<string> choices;
        [FormerlySerializedAs("nodePosition")] [SerializeField] public Rect position;

        public void Initialize(string argDialogueName, string argText, List<string> argChoices, Rect argNodePosition)
        {
            dialogueName = argDialogueName;
            text = argText;
            choices = argChoices;
            position = argNodePosition;
        }
    }
}