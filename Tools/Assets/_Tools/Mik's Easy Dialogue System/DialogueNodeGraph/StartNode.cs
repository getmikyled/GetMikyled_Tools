using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class StartNode : MEDNodeBase
    {
        public string startNodeName;
        
        ///-//////////////////////////////////////////////////////////////////= 
        ///
        public StartNode(Rect argPosition) : base(argPosition)
        {
            startNodeName = "Conversation";
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public override void Draw()
        {
            // Title Container
            Label title = MEDialogueElementUtility.CreateLabel("Start Node");
            titleContainer.Add(title);
        }
    }

}