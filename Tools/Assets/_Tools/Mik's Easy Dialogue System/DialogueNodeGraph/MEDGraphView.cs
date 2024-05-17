using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

#if UNITY_EDITOR

using UnityEditor.Experimental.GraphView;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class MEDGraphView : GraphView
    {
        public override List<Port> GetCompatiblePorts(Port startPort, NodeAdapter nodeAdapter)
        {
            List<Port> compatibleports = new List<Port>();

            ports.ForEach(port =>
            {
                if (startPort == port || startPort.node == port.node || port.direction == startPort.direction)
                {
                    return;
                }

                compatibleports.Add(port);
            });

            return compatibleports;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public MEDGraphView()
        {
            AddWindowManipulators();
            AddGridBackground();
            StylizeUI();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void AddGridBackground()
        {
            GridBackground gridBackground = new GridBackground();
            gridBackground.StretchToParentSize();

            Insert(0, gridBackground);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void StylizeUI()
        {
            StyleSheet graphStyleSheet = (StyleSheet)Resources.Load("DialogueGraphStyleSheet");
            StyleSheet nodeStyleSheet = (StyleSheet)Resources.Load("DialogueNodeStyleSheet");
            styleSheets.Add(graphStyleSheet);
            styleSheets.Add(nodeStyleSheet);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public void ClearGraphElements()
        {
            graphElements.ForEach(element => RemoveElement(element));
        }

        #region Manipulators

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void AddWindowManipulators()
        {
            SetupZoom(minScale, maxScale);
            this.AddManipulator(new ContentDragger());
            this.AddManipulator(new ContentZoomer());
            this.AddManipulator(new SelectionDragger());
            this.AddManipulator(new RectangleSelector());
            this.AddManipulator(CreateDialogueContextualMenu());
            this.AddManipulator(CreateStartContextualMenu());
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        private IManipulator CreateStartContextualMenu()
        {
            ContextualMenuManipulator contextualMenuManipulator = new ContextualMenuManipulator(
                menuEvent => menuEvent.menu.AppendAction("Start Node",
                    actionEvent => AddElement(CreateStartNode(actionEvent.eventInfo.mousePosition)))
            );

            return contextualMenuManipulator;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private IManipulator CreateDialogueContextualMenu()
        {
            ContextualMenuManipulator contextualMenuManipulator = new ContextualMenuManipulator(
                menuEvent => menuEvent.menu.AppendAction("Dialogue Node",
                    actionEvent => AddElement(CreateDialogueNode(actionEvent.eventInfo.mousePosition)))
            );

            return contextualMenuManipulator;
        }

#endregion // Manipulators

        ///-//////////////////////////////////////////////////////////////////
        ///
        public void CreateNodes(List<StartNodeSaveData> sNodes, List<DialogueNodeSaveData> dNodes)
        {
            // Create Start Nodes
            foreach (StartNodeSaveData sNodeSaveData in sNodes)
            {
                AddElement(CreateStartNode(sNodeSaveData));
            }
            
            // Create Dialogue Nodes
            foreach (DialogueNodeSaveData dNodeSaveData in dNodes)
            {
                AddElement(CreateDialogueNode(dNodeSaveData));
            }
        }
        
#region Node Creation

        ///-//////////////////////////////////////////////////////////////////
        ///
        private StartNode CreateStartNode(Vector2 argPos)
        {
            // Create new Start Node
            StartNode startNode = new StartNode(new Rect(argPos, Vector3.zero));

            startNode.Draw();

            return startNode;
        }

        private StartNode CreateStartNode(StartNodeSaveData sNodeSaveData)
        {
            // Create new Start Node
            StartNode startNode = new StartNode(new Rect(sNodeSaveData.position, Vector3.zero))
            {
                // Update Node Values w/ Save Data
                GUID = sNodeSaveData.GUID,
                conversationName = sNodeSaveData.conversationName
            };

            startNode.Draw();

            return startNode;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private DialogueNode CreateDialogueNode(Vector2 argPos)
        {
            DialogueNode dialogueNode = new DialogueNode(new Rect(argPos, Vector3.zero));

            dialogueNode.Draw();

            return dialogueNode;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private DialogueNode CreateDialogueNode(DialogueNodeSaveData dNodeSaveData)
        {
            // Create new dialogue node
            DialogueNode dialogueNode = new DialogueNode(new Rect(dNodeSaveData.position, Vector2.zero))
            {
                // Update Node Values w/ Save Data
                GUID = dNodeSaveData.GUID,
                dialogueName = dNodeSaveData.dialogueName,
                text = dNodeSaveData.text,
                choices = dNodeSaveData.choices
            };

            dialogueNode.Draw();

            return dialogueNode;
        }
    }
    
#endregion // Node Creation
}

#endif // UNITY_EDITOR
