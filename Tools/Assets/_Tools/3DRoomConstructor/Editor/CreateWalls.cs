using Codice.Client.Commands;
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

        Transform newWall;

        private void OnSceneGUI(SceneView sceneView)
        {
            if (currentMode == BuildMode.CreateWalls )
            {
                #region Read Mouse Input

                Event evt = Event.current;
                int id = GUIUtility.GetControlID(FocusType.Passive);

                switch (evt.type)
                {
                    case EventType.Layout:
                    case EventType.MouseMove:
                        {
                            // AddDefaultControl means that if no other control is selected, this will be chosen as the fallback.
                            // This allows things like the translate handle and buttons to function.
                            HandleUtility.AddDefaultControl(id);

                            break;
                        }
                    case EventType.MouseDown:
                        if (evt.button == 0 && HandleUtility.nearestControl == id)
                        {
                            // Tells the scene view that the placing wall event is taking place and to ignore other related events 
                            GUIUtility.hotControl = id;


                            SetWallStart();
                            evt.Use();
                        }
                        break;
                    case EventType.MouseUp:
                        {
                            if (evt.button == 0 && GUIUtility.hotControl == id)
                            {
                                GUIUtility.hotControl = 0; // resets hot control

                                CreateWall();
                                SetWallEnd();

                                Undo.RegisterCreatedObjectUndo(newWall.gameObject, "Create Wall");
                                EditorUtility.SetDirty(newWall.gameObject);

                                evt.Use();
                            }
                            break;
                        }
                    case EventType.MouseDrag:
                        {
                            HandleUtility.AddDefaultControl(id);
                            if (isCreatingWall)
                            {
                                AdjustWall();
                            }
                            break;
                        }
                }
                #endregion
            }
        }

        private void EnableCreatingWalls()
        {
            UpdateMode(BuildMode.CreateWalls);
        }

        private void SetWallStart()
        {
            isCreatingWall = true;
            SetWallsActive(true);

            Ray ray = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);
            RaycastHit hitInfo;
            bool hit = Physics.Raycast(ray, out hitInfo);

            if (hit) // if the prefab was placed on another GameObject
            {
                wallStart.position = hitInfo.point;
            }
            else // if the prefab wasn't placed on anything
            {
                float dist = - ray.origin.y / ray.direction.y; // to calculate the distance along the ray where it intersects the 0 plane
                wallStart.position = ray.origin + dist * ray.direction; // this represents the intersection point of the ray and the y plane
            }
            wallStart.position = new Vector3(Mathf.Round(wallStart.position.x), wallStart.position.y + (wallHeight.value / 2), Mathf.Round(wallStart.position.z));


        }

        private void SetWallEnd()
        {
            isCreatingWall = false;
            SetWallsActive(false);
        }

        private void AdjustWall()
        {

            wallStart.LookAt(wallEnd.position);
            wallEnd.LookAt(wallStart.position);

            // SET THE POSITION OF THE WALLS END POINT
            Ray ray = HandleUtility.GUIPointToWorldRay(Event.current.mousePosition);
            RaycastHit hitInfo;
            bool hit = Physics.Raycast(ray, out hitInfo);

            if (hit) // if the prefab was placed on another GameObject
            {
                wallEnd.position = hitInfo.point;
            }
            else // if the prefab wasn't placed on anything
            {
                float dist = -ray.origin.y / ray.direction.y; // to calculate the distance along the ray where it intersects the 0 plane
                wallEnd.position = ray.origin + dist * ray.direction; // this represents the intersection point of the ray and the y plane
            }
            wallEnd.position = new Vector3(Mathf.Round(wallEnd.position.x), wallEnd.position.y + (wallHeight.value / 2), Mathf.Round(wallEnd.position.z));

            float distance = Vector3.Distance(wallStart.position, wallEnd.position);
            wall.position = wallStart.position + distance / 2 * wallStart.forward;
            wall.rotation = wallStart.rotation;
            wall.localScale = new Vector3(wall.localScale.x, wall.localScale.y, distance);
        }

        private void CreateWall()
        {
            newWall = Instantiate(wallObjectPool);
            newWall.name = "Wall";
            
        }

        #region Creating Necessary Components for Wall Building
        private void CreateWallObjectPool()
        {
            wallObjectPool = new GameObject().transform;
            wallObjectPool.name = "WallObjectPool";

            wallStart = GameObject.CreatePrimitive(PrimitiveType.Cube).transform;
            wallStart.name = "StartPoint";
            wallEnd = GameObject.CreatePrimitive(PrimitiveType.Cube).transform;
            wallEnd.name = "EndPoint";
            wall = GameObject.CreatePrimitive(PrimitiveType.Cube).transform;
            wall.name = "Wall";

            wallStart.localScale = new Vector3(wallThickness.value, wallHeight.value, wallThickness.value);
            wallEnd.localScale = new Vector3(wallThickness.value, wallHeight.value, wallThickness.value);
            wall.localScale = new Vector3(wallThickness.value, wallHeight.value, wall.localScale.z);  

            wallObjectPool.parent = mainToolObject;
            wallStart.transform.parent = wallObjectPool;
            wallEnd.transform.parent = wallObjectPool;
            wall.parent = wallObjectPool;
            wallStart.gameObject.layer = 2;
            wallEnd.gameObject.layer = 2;
            wall.gameObject.layer = 2;

            SetWallsActive(false);
        }

        private void SetWallsActive(bool value)
        {
            wallStart.gameObject.SetActive(value);
            wallEnd.gameObject.SetActive(value);
            wall.gameObject.SetActive(value);
        }

        private void DestroyWallObjectPool()
        {
            wallObjectPool = null;
            wallStart = null;
            wallEnd = null;
            wall = null;
        }

        private void ChangeWallProperties(ChangeEvent<float> evt)
        {
            wall.localScale = new Vector3(wallThickness.value, wallHeight.value, wall.localScale.z);
            wallStart.localScale = new Vector3(wallThickness.value, wallHeight.value, wallThickness.value);
            wallEnd.localScale = new Vector3(wallThickness.value, wallHeight.value, wallThickness.value);
        }
        #endregion
    }
}
