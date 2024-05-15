using System.Collections;
using System.Collections.Generic;
using GetMikyled.MEDialogue;
using TMPro;
using UnityEngine;

public class DialogueTest : MonoBehaviour
{
    [SerializeField] private GameObject[] uiToActivate;
    [SerializeField] private TextMeshProUGUI nameTextField;
    [SerializeField] private TextMeshProUGUI textBox;

    private MEDialogueReader dialogueReader;
    
    // Start is called before the first frame update
    void Start()
    {
        dialogueReader = new MEDialogueReader(uiToActivate, nameTextField, textBox);
    }
}
