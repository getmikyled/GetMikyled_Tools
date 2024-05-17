using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace GetMikyled.MEDialogue 
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    [Serializable]
    public class DialogueNodeSaveData : MEDSaveDataBase
    {
        public string dialogueName;
        public string text;
        public List<string> choices;

        ///-//////////////////////////////////////////////////////////////////
        ///
        public void Initialize(string argDialogueName, string argText, List<string> argChoices, Vector2 argPosition)
        {
            dialogueName = argDialogueName;
            text = argText;
            choices = argChoices;
            position = argPosition;
        }
    }
}