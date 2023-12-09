using Codice.Client.Common.GameUI;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace GetMikyled.RoomConstructor
{
    public partial class RoomConstructor
    {
        public bool isCreatingWall = false;

        Transform wallObjectPool;
        Transform wallStart;
        Transform wallEnd;
        Transform wall;

        FloatField wallThickness;
        FloatField wallHeight;

        private void OnEnable()
        {
            SceneView.duringSceneGui += OnSceneGUI;
            CreateWallObjectPool();
        }

        private void OnDisable()
        {
            DestroyWallObjectPool();
        }

        private void OnSceneGUI(SceneView sceneView)
        {
            if (currentState == BuildMode.CreateWalls)
            {
                Event eventCurrent = Event.current;
                if (eventCurrent.button == 0)
                {
                    if (eventCurrent.type == EventType.MouseDown)
                    {
                        SetWallStart();
                    }
                    else if (eventCurrent.type == EventType.MouseUp)
                    {
                        SetWallEnd();
                    }
                    else
                    {
                        if (isCreatingWall)
                        {
                            AdjustWall();
                        }
                    }
                }
            } 
        }

        private void EnableCreatingWalls()
        {
            UpdateMode(BuildMode.CreateWalls, currentState);
        }

        private void SetWallStart()
        {
            isCreatingWall = true;
        }

        private void SetWallEnd()
        {
            isCreatingWall = false;
        }

        private void AdjustWall()
        {
                
        }

        private void CreateWallObjectPool()
        {
            wallObjectPool = new GameObject().transform;
            wallObjectPool.name = "WallObjectPool";

            wallStart = new GameObject().transform;
            wallStart.name = "StartPoint";
            wallEnd = new GameObject().transform;
            wallEnd.name = "EndPoint";
            wall = GameObject.CreatePrimitive(PrimitiveType.Cube).transform;
            wall.localScale = new Vector3(wall.localScale.x, float.Parse(wallHeight.text), float.Parse(wallThickness.text));
            wall.name = "Wall";

            wallStart.transform.parent = wallObjectPool;
            wallEnd.transform.parent = wallObjectPool;
            wall.parent = wallObjectPool;
        }

        private void DestroyWallObjectPool()
        {
            DestroyImmediate(wallObjectPool);
            wallObjectPool = null;
            wallStart = null;
            wallEnd = null;
            wall = null;
        }

    }
}
