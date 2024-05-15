#if UNITY_EDITOR
using UnityEditor.Experimental.GraphView;
using UnityEngine;

namespace GetMikyled.MEDialogue
{
    ///-//////////////////////////////////////////////////////////////////
    ///
    public abstract class MEDNodeBase : Node
    {
        public MEDNodeBase(Rect argPosition)
        {
            SetPosition(argPosition);
        }

        ///-//////////////////////////////////////////////////////////////////
        ///
        public abstract void Draw();
    }
}

#endif // UNITY_EDITOR