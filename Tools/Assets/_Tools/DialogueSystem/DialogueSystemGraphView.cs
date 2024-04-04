using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.DialogueSystem
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class DialogueSystemGraphView : GraphView
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
        public DialogueSystemGraphView()
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
            StyleSheet graphStyleSheet = (StyleSheet) Resources.Load("DialogueGraphStyleSheet");
            StyleSheet nodeStyleSheet = (StyleSheet) Resources.Load("DialogueNodeStyleSheet");
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
            this.AddManipulator(CreateContextualMenu());
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private IManipulator CreateContextualMenu()
        {
            ContextualMenuManipulator contextualMenuManipulator = new ContextualMenuManipulator(
                menuEvent => menuEvent.menu.AppendAction("Add Node", actionEvent => AddElement(CreateNode(actionEvent.eventInfo.mousePosition)))
            );

            return contextualMenuManipulator;
        }
        #endregion // Manipulators

        ///-//////////////////////////////////////////////////////////////////
        ///
        private Node CreateNode(Vector2 argPos)
        {
            DialogueNode newNode = new DialogueNode(argPos);

            newNode.Draw();

            return newNode;
        }
    }

}