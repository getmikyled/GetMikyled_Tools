using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.DialogueSystem 
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public class DialogueSystem : EditorWindow
    {
        ///-//////////////////////////////////////////////////////////////////
        ///
        [MenuItem("Window/Dialog Graph")]
        public static void Open()
        {
            GetWindow<DialogueSystem>("Dialog Graph");
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void OnEnable()
        {
            AddGraphView();
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void AddGraphView()
        {
            DialogueSystemGraphView dialogGraphView = new DialogueSystemGraphView();
            dialogGraphView.StretchToParentSize();

            rootVisualElement.Add(dialogGraphView);
        }
    }

}
