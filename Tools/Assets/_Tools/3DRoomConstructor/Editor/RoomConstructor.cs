using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.RoomConstructor
{
    public enum 
    public class RoomConstructor : EditorWindow
    {
        [SerializeField] private VisualTreeAsset _tree;

        /// <summary>
        /// CREATE THE WINDOW
        /// CLONE ELEMENTS
        /// </summary>
        [MenuItem("Tools/RoomConstructor")]
        public static void ShowWindow()
        {
            var window = GetWindow<RoomConstructor>();
        }

        private void CreateGUI()
        {
            _tree.CloneTree(rootVisualElement);
        }
    }
}
