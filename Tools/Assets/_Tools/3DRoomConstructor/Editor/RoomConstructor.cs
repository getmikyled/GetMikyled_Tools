using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.RoomConstructor
{
    public enum BuildMode
    {
        None = 0,
        CreateWalls = 1
    }

    public partial class RoomConstructor : EditorWindow
    {
        BuildMode currentState = BuildMode.None;

        #region CreateGUI
        /// <summary>
        /// CREATE THE WINDOW
        /// CLONE ELEMENTS
        /// </summary>
        [SerializeField] private VisualTreeAsset _tree;

        Label currentStateText;

        [MenuItem("Tools/RoomConstructor")]
        public static void ShowWindow()
        {
            var window = GetWindow<RoomConstructor>();
        }

        private void CreateGUI()
        {
            VisualElement root = this.rootVisualElement;

            _tree.CloneTree(rootVisualElement);

            currentStateText = root.Q<Label>("CurrentMode");
            UpdateMode(BuildMode.None, BuildMode.None);

            Button createWallsButton = root.Q<Button>(name: "CreateWallsButton");
            createWallsButton.clicked += () => EnableCreatingWalls();
        }
        #endregion

        #region CurrentStateLabel
        private void UpdateMode(BuildMode newMode, BuildMode oldMode)
        { 
            currentState = newMode;
            // MAKE IT UPDATE TO NAME OF ENUM
            //currentStateText.text = "Current Mode: " + System.Enum.GetName((typeof(BuildModeState), currentState));
        }
        #endregion
    }
}
