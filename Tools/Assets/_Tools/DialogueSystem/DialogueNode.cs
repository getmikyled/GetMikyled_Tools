using System.Collections;
using System.Collections.Generic;
using UnityEditor.Experimental.GraphView;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.DialogueSystem
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class DialogueNode : Node
    {

        public string dialogueName;
        public List<string> choices;
        public string text;

        ///-//////////////////////////////////////////////////////////////////
        ///
        public DialogueNode(Vector2 argPos)
        {
            dialogueName = "Dialogue Name";
            choices = new List<string>();
            text = "Insert Dialogue Text";

            choices.Add("New Choice");

            mainContainer.AddToClassList("d-node__main-container");
            extensionContainer.AddToClassList("d-node__extension-container");
            SetPosition(new Rect(argPos, Vector3.zero));
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public virtual void Draw()
        {
            // TITLE CONTAINER

            TextField dialogueNameTextField = new TextField()
            {
                value = dialogueName
            };

            titleContainer.Insert(0, dialogueNameTextField);

            // MAIN CONTAINER
            Button addChoiceButton = new Button() { text = "Add Choice" };
            addChoiceButton.clicked += () =>
            {
                choices.Add("New Choice");
                AddChoice("Next");
            };
            mainContainer.Insert(1, addChoiceButton);

            // PORT CONTAINER
            // input
            Port inputPort = InstantiatePort(Orientation.Horizontal, Direction.Input, Port.Capacity.Multi, typeof(bool));
            inputPort.portName = "Input";
            inputContainer.Add(inputPort);

            // output
            foreach (string choice in choices)
            {
                AddChoice(choice);
            }

            // EXTENSION CONTAINER
            // Contains Dialogue Text
            VisualElement textContainer = new VisualElement();
            extensionContainer.Add(textContainer);

            // Text Foldout
            Foldout textFoldout = new Foldout()
            {
                text = "Dialogue Text"
            };
            TextField textTextField = new TextField()
            {
                value = text,
                multiline = true,
                
            };
            textFoldout.Add(textTextField);
            mainContainer.Add(textFoldout);

            RefreshExpandedState();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void AddChoice(string argChoice)
        {
            // Create Choice UI
            Port choicePort = InstantiatePort(Orientation.Horizontal, Direction.Output, Port.Capacity.Single, typeof(bool));
            choicePort.portName = "";

            Button deleteChoiceButton = new Button() { text = "X" };
            TextField choiceTextField = new TextField() { value = argChoice };
            choiceTextField.style.flexDirection = FlexDirection.Column;
            choicePort.Add(choiceTextField);
            choicePort.Add(deleteChoiceButton);

            outputContainer.Add(choicePort);

            RefreshExpandedState();
            RefreshPorts();
        }
    }

}