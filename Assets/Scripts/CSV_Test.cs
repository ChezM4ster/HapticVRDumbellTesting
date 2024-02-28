using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
//Antonio Brewer 2/5/24

//Last update 2/7/24
public class CSV_Test : MonoBehaviour
{

    [Header("CSV File Name")]
    [SerializeField] private string csvName;

    [Header("OVRCameraRig")]
    [SerializeField] private GameObject player;

    [SerializeField] private string participantID;
    private string filePath;
    private bool startWriting;
    private bool canRecord;
    private bool grabbed;

    private void Start()
    {
        //participantID = PlayerPrefs.GetString("ID", "INVALID");
        startWriting = false;
        grabbed = false;
        canRecord = true;
        filePath = GetFilePath();
    }

    private void FixedUpdate()
    {
        if (canRecord)
        {
            addRecord(participantID, Time.time, player.transform.position.x, player.transform.position.y, player.transform.position.z,
                        player.transform.localEulerAngles.x, player.transform.localEulerAngles.y, player.transform.localEulerAngles.z, filePath);
            StartCoroutine(delayRecord());
        }
    }

    public void handGrabStart()
    {
        if (!grabbed)
        {
            using (StreamWriter file = new StreamWriter(@filePath, true))
            {
                file.WriteLine("Weight grabbed");
                //canRecord = true;
            }
            grabbed = true;
        }
    }
    public void handGrabEnd()
    {
        if(grabbed)
        {
            using (StreamWriter file = new StreamWriter(@filePath, true))
            {
                file.WriteLine("Weight dropped");
            }
            grabbed = false;
        }
        //startWriting = false;
        //canRecord = false;
    }

    private void addRecord(string ID, float time, float x, float y, float z,
                           float rotX, float rotY, float rotZ, string filePath)
    {
        print("Writing to file");
        try
        {
            if (!startWriting)
            {
                using (StreamWriter file = new StreamWriter(@filePath, false))
                {
                    file.WriteLine("Label" + "," + "Time" + "," + "XPos" + "," + "YPos" + "," + "ZPos" +"," + "XRot" + "," + "YRot" + "," + "ZRot" );
                }
                startWriting = true;
            }
            else
            {
                using (StreamWriter file = new StreamWriter(@filePath, true))
                {
                    file.WriteLine(ID + "," + time + "," + x + "," + y + "," + z + "," + rotX + "," + rotY + "," + rotZ);
                }
            }
        }
        catch (Exception ex)
        {
            Debug.Log("Something went wrong! Error: " + ex.Message);
        }
    }

    private IEnumerator delayRecord()
    {
        canRecord = false;
        yield return new WaitForSeconds(0.2f);
        canRecord = true;
    }

    string GetFilePath()
    {
        return Application.persistentDataPath + "/" + "_" + csvName + ".csv";
    }
}