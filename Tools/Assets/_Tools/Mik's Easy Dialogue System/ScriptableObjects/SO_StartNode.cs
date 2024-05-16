using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    public class SO_StartNode : SO_MEDNodeBase
    {
        public string conversationName;
        public int nextNodeID;

        public void Initialize(string argConversationName, int argNextNodeID)
        {
            conversationName = argConversationName;
            nextNodeID = argNextNodeID;
        }
    }
}