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
        public string nodeID;
        public Port inputPort;
        public List<Port> outputPorts;
        
        public MEDNodeBase(Rect argPosition)
        {
            nodeID = GUID.Generate().ToString();
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