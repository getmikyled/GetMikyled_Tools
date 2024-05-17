using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    [Serializable]
    public class StartNodeSaveData : MEDSaveDataBase
    {
        public string conversationName;
        public string nextNodeGUID;

        ///-//////////////////////////////////////////////////////////////////
        ///
        public void Initialize(string argConversationName, string argNextNodeGUID, Vector2 argPosition)
        {
            conversationName = argConversationName;
            nextNodeGUID = argNextNodeGUID;
            position = argPosition;
        }
    }
}