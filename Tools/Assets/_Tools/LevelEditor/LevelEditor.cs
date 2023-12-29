using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.LevelEditor
{
    public enum BuildMode
    {
        None,
        CreateWalls,
        PrefabPlacer,
        Eraser
    }

    public partial class LevelEditor : EditorWindow
    {
        BuildMode buildMode = BuildMode.None;

        Transform mainToolObject = null;

        #region CreateGUI
        ///-////////////////////////////////////////////////
        ///
        /// CREATE THE WINDOW
        /// CLONE ELEMENTS
        /// 

        [SerializeField] private VisualTreeAsset _tree;

        Label currentModeText;

        ///-////////////////////////////////////////////////
        ///
        [MenuItem("Tools/LevelEditor")]
        public static void ShowWindow()
        {
            var window = GetWindow<LevelEditor>();
        }

        ///-////////////////////////////////////////////////
        ///
        private void OnEnable()
        {
            SceneView.duringSceneGui += OnSceneCreateWalls;
            SceneView.duringSceneGui += OnScenePrefabPlacer;
            SceneView.duringSceneGui += OnSceneEraser;

            CreateLevel();

            mainToolObject = GameObject.Find("------- RoomConstructor -------")?.transform;
            if (mainToolObject == null)
            {
                mainToolObject = new GameObject().transform;
                mainToolObject.name = "------- RoomConstructor -------";
            }
        }

        ///-////////////////////////////////////////////////
        ///
        private void OnDisable()
        {
            SceneView.duringSceneGui -= OnSceneCreateWalls;
            SceneView.duringSceneGui -= OnScenePrefabPlacer;
            SceneView.duringSceneGui -= OnSceneEraser;

            ResetTools();
            DestroyImmediate(mainToolObject.gameObject);
        }

        ///-////////////////////////////////////////////////
        ///
        private void CreateGUI()
        {
            VisualElement root = this.rootVisualElement;

            _tree.CloneTree(rootVisualElement);

            currentModeText = root.Q<Label>("CurrentMode");
            SetBuildMode(BuildMode.None);

            Button createWallsButton = root.Q<Button>(name: "CreateWallsButton");
            createWallsButton.clicked += () => EnableCreatingWalls();
            wallThickness = root.Q<FloatField>("WallThickness");
            wallHeight = root.Q<FloatField>("WallHeight");
            wallThickness.RegisterValueChangedCallback(ChangeWallProperties);
            wallHeight.RegisterValueChangedCallback(ChangeWallProperties);

            ConstructPrefabPlacerUI();
            ConstructEraserUI();

            CreateWallObjectPool();
        }
        #endregion

        #region CurrentStateLabel
        ///-////////////////////////////////////////////////
        ///
        private void SetBuildMode(BuildMode newMode)
        {
            ResetTools();
            buildMode = newMode;
            // MAKE IT UPDATE TO NAME OF ENUM
            currentModeText.text = "Current Mode: " + System.Enum.GetName(typeof(BuildMode), buildMode);
        }
        #endregion

        ///-//////////////////////////////////////////////////////////////////
        ///
        private void ResetTools()
        {
            selectedPrefab = null;
            DestroyImmediate(previewPrefab);
            previewPrefab = null;
        }
    }
}
