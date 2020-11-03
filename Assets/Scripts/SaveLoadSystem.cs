using System;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using UnityEngine;

public class SaveLoadSystem
{
    private static readonly string dataPath = Application.persistentDataPath + "/save.dat";

    public static void SavePlayer(GameController gameController)
    {
        byte[] serializedData;
        BinaryFormatter formatter = new BinaryFormatter();
        PlayerData playerData = new PlayerData(gameController);
        using (MemoryStream stream = new MemoryStream())
        {
            formatter.Serialize(stream, playerData);
            serializedData = stream.ToArray();
            stream.Close();
        }
        //var raws = Encoding.UTF8.GetBytes(BitConverter.ToString(serializedData));
        byte[] encryptData = Encryption.Encrypt(serializedData, "HjLyxK_W7jrqu35g");
        try
        {
            File.WriteAllBytes(dataPath, encryptData);
            Debug.Log("Saved");
        }
        catch (System.Exception)
        {
            Debug.LogWarning("ERROR saving data in " + dataPath);
        }
    }

    public static PlayerData LoadPlayer()
    {
        byte[] serializedData;
        try
        {
            serializedData = File.ReadAllBytes(dataPath);
        }
        catch (System.Exception)
        {
            Debug.LogWarning("ERROR loading data in " + dataPath);
            return null;
        }
        byte[] decryptData = Encryption.Decrypt(serializedData, "HjLyxK_W7jrqu35g");
        //var raws = Encoding.UTF8.GetBytes(BitConverter.ToString(decryptData));
        BinaryFormatter formatter = new BinaryFormatter();
        using (MemoryStream stream = new MemoryStream(decryptData))
        {
            PlayerData playerData;
            try
            {
                playerData = formatter.Deserialize(stream) as PlayerData;
                return playerData;
            }
            catch (System.Exception)
            {
                return null;
            }
            finally
            {
                stream.Close();
            }
        }
    }
}
