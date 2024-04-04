using System.Collections;
using System.Collections.Generic;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace GetMikyled.DialogueSystem {
    public class DialogueMultipleChoiceNode : DialogueNode
    {
        ///-//////////////////////////////////////////////////////////////////
        ///
        public DialogueMultipleChoiceNode(Vector2 argPos) : base(argPos)
        {

        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public override void Draw()
        {
            

            // OUTPUT CONTAINER
            foreach (string choice in choices)
            {
                Port choicePort = InstantiatePort(Orientation.Horizontal, Direction.Output, Port.Capacity.Multi, typeof(bool));
                choicePort.name = choice;

                outputContainer.Add(choicePort);
            }
            base.Draw();
        }
    }

}