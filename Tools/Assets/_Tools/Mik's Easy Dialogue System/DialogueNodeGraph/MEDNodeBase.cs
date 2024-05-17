#if UNITY_EDITOR
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public abstract class MEDNodeBase : Node
    {
        public string GUID;
        
        public MEDNodeBase(Rect argPosition)
        {
            GUID = UnityEditor.GUID.Generate().ToString();
            SetPosition(argPosition);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        protected abstract void InitializeClassList();

        ///-//////////////////////////////////////////////////////////////////
        ///
        public abstract void Draw();
    }
}

#endif // UNITY_EDITOR