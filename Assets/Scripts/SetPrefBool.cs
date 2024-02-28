using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SetPrefBool : MonoBehaviour
{
    [SerializeField] private TMP_Text settingText;
    [SerializeField] private string settingTitle;
    [SerializeField] private bool textOrSomething = false;
    public bool settingOn = false;
    // Start is called before the first frame update
    void Start()
    {
     PlayerPrefs.SetInt(settingTitle, 0);

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //private void OnCollisionEnter(Collision collision)
    //{
    //    if(collision.gameObject.tag == "Player")
    //    {
    //        settingOn = !settingOn;
    //        settingText.SetText("I'm on.");
    //    }
    //}

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            settingOn = !settingOn;
            if (settingOn)
            {
                PlayerPrefs.SetInt(settingTitle, 1);
                settingText.SetText(settingTitle + " on");
            }
            else
            {
                PlayerPrefs.SetInt(settingTitle, 0);
                settingText.SetText(settingTitle + " off");
            }
        }
    }
}
