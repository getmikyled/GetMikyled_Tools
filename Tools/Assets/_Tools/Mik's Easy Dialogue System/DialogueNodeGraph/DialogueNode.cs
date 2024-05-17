using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

#if UNITY_EDITOR

using UnityEditor.Experimental.GraphView;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class DialogueNode : MEDNodeBase
    {

        public string dialogueName;
        public List<string> choices;
        public string text;

        ///-//////////////////////////////////////////////////////////////////
        ///
        public DialogueNode(Rect argPosition) : base(argPosition)
        {
            dialogueName = "Dialogue Name";
            choices = new List<string>();
            text = "Insert Dialogue Text";

            choices.Add("New Choice");

            InitializeClassList();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        protected override void InitializeClassList()
        {
            mainContainer.AddToClassList("dialogue-node__main-container");
            extensionContainer.AddToClassList("dialogue-node__extension-container");
        }
        
        ///-//////////////////////////////////////////////////////////////////
        ///
        public override void Draw()
        {
            // TITLE CONTAINER

            TextField dialogueNameTextField = MEDialogueElementUtility.CreateTextField("Dialogue Name", null, (newText) =>
            {
                dialogueName = newText.newValue;
            });
            dialogueNameTextField.AddToClassList("dialogue-node__textfield");
            titleContainer.Insert(0, dialogueNameTextField);

            // MAIN CONTAINER
            Button addChoiceButton = MEDialogueElementUtility.CreateButton("Add Choice", () =>
            {
                choices.Add("New Choice");
                AddChoice("Next");
            });

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
            TextField textTextField = MEDialogueElementUtility.CreateTextArea("Insert text here", null, (newText) =>
            {
                text = newText.newValue;
            });
            textFoldout.Add(textTextField);
            textContainer.Add(textFoldout);

            RefreshExpandedState();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void AddChoice(string argChoice)
        {
            // Create Choice UI //
            Port choicePort = InstantiatePort(Orientation.Horizontal, Direction.Output, Port.Capacity.Single, typeof(bool));
            choicePort.portName = "";
            // Delete Button -> Deletes the choice
            Button deleteChoiceButton = new Button() { text = "X" };
            // TextField contains ChoiceName
            TextField choiceTextField = MEDialogueElementUtility.CreateTextField("Choice", null, (value) =>
            {
                int index = choices.IndexOf(value.previousValue);
                choices[index] = value.newValue;
            });
            choiceTextField.style.flexDirection = FlexDirection.Column;
            choicePort.Add(choiceTextField);
            choicePort.Add(deleteChoiceButton);
            
            outputContainer.Add(choicePort);

            RefreshExpandedState();
            RefreshPorts();
        }
    }
}

#endif // UNITY_EDITOR