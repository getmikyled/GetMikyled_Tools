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
        public void CreateNodes(List<SO_DialogueNode> nodes)
        {
            foreach (SO_DialogueNode node in nodes)
            {
                AddElement(CreateDialogueNode(node));
            }
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private StartNode CreateStartNode(Vector2 argPos)
        {
            StartNode startNode = new StartNode(new Rect(argPos, Vector3.zero));

            startNode.Draw();

            return startNode;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private DialogueNode CreateDialogueNode(Vector2 argPos)
        {
            DialogueNode newNode = new DialogueNode(new Rect(argPos, Vector3.zero));

            newNode.Draw();

            return newNode;
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private DialogueNode CreateDialogueNode(SO_DialogueNode node)
        {
            DialogueNode newNode = new DialogueNode(node.position);
            newNode.dialogueName = node.dialogueName;
            newNode.text = node.text;
            newNode.choices = node.choices;
            Debug.Log("Created node at " + node.position.position);

            newNode.Draw();

            return newNode;
        }
    }
}

#endif // UNITY_EDITOR
