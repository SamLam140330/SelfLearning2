using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class SaveLoadSystem
{
    private static readonly string dataPath = Path.Combine(Application.persistentDataPath, "save.dat");

    public static void SavePlayer()
    {
        byte[] serializedData = null;
        BinaryFormatter formatter = new BinaryFormatter();
        PlayerData playerData = new PlayerData();
        using (MemoryStream stream = new MemoryStream())
        {
            try
            {
                formatter.Serialize(stream, playerData);
                serializedData = stream.ToArray();
            }
            catch (System.Exception)
            {
                Debug.LogWarning("ERROR saving data in " + dataPath);
            }
            finally
            {
                stream.Close();
            }
        }
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
        BinaryFormatter formatter = new BinaryFormatter();
        MemoryStream stream = new MemoryStream(decryptData);
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
