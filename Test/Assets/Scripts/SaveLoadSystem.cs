using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using UnityEngine;

public class SaveLoadSystem
{
    #region My Original Save and Load
    //public static void SavePlayer(GameController gameController)
    //{
    //    BinaryFormatter formatter = new BinaryFormatter();
    //    string path = Application.persistentDataPath + "/player.dat";
    //    FileStream stream = new FileStream(path, FileMode.Create);
    //    PlayerData data = new PlayerData(gameController);
    //    formatter.Serialize(stream, data);
    //    stream.Close();
    //}

    //public static PlayerData LoadPlayer()
    //{
    //    string path = Application.persistentDataPath + "/player.dat";
    //    if (File.Exists(path))
    //    {
    //        BinaryFormatter formatter = new BinaryFormatter();
    //        FileStream stream = new FileStream(path, FileMode.Open);
    //        PlayerData data = formatter.Deserialize(stream) as PlayerData;
    //        stream.Close();
    //        return data;
    //    }
    //    else
    //    {
    //        Debug.LogError("Save file NOT Found in " + path);
    //        return null;
    //    }
    //}
    #endregion

    public static void BinaryFormatter(GameController gameController)
    {
        var serializedData = (byte[])null;
        var formatter = new BinaryFormatter();
        using (var ms = new MemoryStream())
        {
            formatter.Serialize(ms, gameController);
            serializedData = ms.ToArray();
        }
        SaveFile1(serializedData);
    }

    private void SaveFile1(string serizliedData)
    {
        var raws = Encoding.UTF8.GetBytes(serizliedData);
        SaveFile2(raws);
    }

    private void SaveFile2(byte[] serizliedData)
    {
        var filePath = Application.persistentDataPath + "/save.dat";
        // Save
        try
        {
            File.WriteAllBytes(filePath, serizliedData);
        }
        catch (System.Exception)
        {
            // TODO: Handle exception
        }
    }
}
