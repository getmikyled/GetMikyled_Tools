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
        BuildMode currentMode = BuildMode.None;

        Transform mainToolObject = null;

        #region CreateGUI
        /// <summary>
        /// CREATE THE WINDOW
        /// CLONE ELEMENTS
        /// </summary>
        [SerializeField] private VisualTreeAsset _tree;

        Label currentModeText;

        [MenuItem("Tools/RoomConstructor")]
        public static void ShowWindow()
        {
            var window = GetWindow<RoomConstructor>();
        }

        private void OnEnable()
        {
            SceneView.duringSceneGui += OnSceneGUI;

            mainToolObject = new GameObject().transform;
            mainToolObject.name = "------- RoomConstructor -------";
        }

        private void OnDisable()
        {
            SceneView.duringSceneGui -= OnSceneGUI;

            DestroyImmediate(mainToolObject.gameObject);
            DestroyWallObjectPool();
        }

        private void CreateGUI()
        {
            VisualElement root = this.rootVisualElement;

            _tree.CloneTree(rootVisualElement);

            currentModeText = root.Q<Label>("CurrentMode");
            UpdateMode(BuildMode.None);

            Button createWallsButton = root.Q<Button>(name: "CreateWallsButton");
            createWallsButton.clicked += () => EnableCreatingWalls();
            wallThickness = root.Q<FloatField>("WallThickness");
            wallHeight = root.Q<FloatField>("WallHeight");
            wallThickness.RegisterValueChangedCallback(ChangeWallProperties);
            wallHeight.RegisterValueChangedCallback(ChangeWallProperties);

            CreateWallObjectPool();
        }
        #endregion

        #region CurrentStateLabel
        private void UpdateMode(BuildMode newMode)
        {
            currentMode = newMode;
            // MAKE IT UPDATE TO NAME OF ENUM
            currentModeText.text = "Current Mode: " + System.Enum.GetName(typeof(BuildMode), currentMode);
        }
        #endregion
    }
}
