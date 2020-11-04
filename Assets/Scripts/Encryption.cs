using System.IO;
using System.Text;
using System.Security.Cryptography;
using System.Linq;
using UnityEngine;

public static class Encryption
{
    #region Variable Declaration
    private static Aes aes = Aes.Create();
    private static SHA256 sha = SHA256.Create();
    #endregion

    #region Key Generate
    private static System.Tuple<byte[], byte[]> GenerateKeyIV(string secret)
    {
        using (var md5 = new MD5CryptoServiceProvider())
        {
            var salt = md5.ComputeHash(Encoding.UTF8.GetBytes(secret));
            using (var gen = new Rfc2898DeriveBytes(secret, salt))
            {
                var key = gen.GetBytes(aes.KeySize / 8);
                var iv = gen.GetBytes(aes.BlockSize / 8);
                return new System.Tuple<byte[], byte[]>(key, iv);
            }
        }
    }
    #endregion

    #region Encrypt Data
    public static byte[] Encrypt(byte[] src, string secret)
    {
        var v = GenerateKeyIV(secret);
        var key = v.Item1;
        var iv = v.Item2;
        return Encrypt(src, key, iv);
    }

    public static byte[] Encrypt(byte[] src, byte[] key, byte[] iv)
    {
        using (var output = new MemoryStream())
        {
            var encryptor = aes.CreateEncryptor(key, iv);
            using (var cs = new CryptoStream(output, encryptor, CryptoStreamMode.Write))
            {
                cs.Write(src, 0, src.Length);
                var hash = sha.ComputeHash(src);
                cs.Write(hash, 0, hash.Length);
            }
            return output.ToArray();
        }
    }
    #endregion

    #region Decrypt Data
    public static byte[] Decrypt(byte[] src, string secret)
    {
        var v = GenerateKeyIV(secret);
        var key = v.Item1;
        var iv = v.Item2;
        return Decrypt(src, key, iv);
    }

    public static byte[] Decrypt(byte[] src, byte[] key, byte[] iv)
    {
        using (var output = new MemoryStream())
        {
            using (var input = new MemoryStream(src))
            {
                var decryptor = aes.CreateDecryptor(key, iv);
                using (var cs = new CryptoStream(input, decryptor, CryptoStreamMode.Read))
                {
                    cs.CopyTo(output);
                }
                var hash = new byte[sha.HashSize / 8];
                var raws = new byte[output.Length - hash.Length];
                output.Seek(0, SeekOrigin.Begin);
                output.Read(raws, 0, raws.Length);
                output.Read(hash, 0, hash.Length);
                var chash = sha.ComputeHash(raws);
                if (!hash.SequenceEqual(chash))
                {
                    //throw new System.Exception("Invalid content hash");
                    Debug.LogWarning("FAIL to pass the Content Authentication! Some data has been tamper!");
                }
                return raws;
            }
        }
    }
    #endregion
}
