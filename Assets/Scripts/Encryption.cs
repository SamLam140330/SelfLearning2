using System.IO;
using System.Text;
using System.Security.Cryptography;
using System.Linq;

public static class Encryption
{
    private static readonly Aes aes = Aes.Create();
    private static readonly SHA256 sha = SHA256.Create();

    private static System.Tuple<byte[], byte[]> GenerateKeyIV(string secret)
    {
        using (var md5 = new MD5CryptoServiceProvider())
        {
            var salt = md5.ComputeHash(Encoding.UTF8.GetBytes(secret));
            using (var gen = new Rfc2898DeriveBytes(secret, salt))
            {
                var key = gen.GetBytes((int)(aes.KeySize * 0.125));
                var iv = gen.GetBytes((int)(aes.BlockSize * 0.125));
                return new System.Tuple<byte[], byte[]>(key, iv);
            }
        }
    }

    public static byte[] Encrypt(byte[] src, string secret)
    {
        var v = GenerateKeyIV(secret);
        var key = v.Item1;
        var iv = v.Item2;
        return Encrypt(src, key, iv);
    }

    private static byte[] Encrypt(byte[] src, byte[] key, byte[] iv)
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

    public static byte[] Decrypt(byte[] src, string secret)
    {
        var v = GenerateKeyIV(secret);
        var key = v.Item1;
        var iv = v.Item2;
        return Decrypt(src, key, iv);
    }

    private static byte[] Decrypt(byte[] src, byte[] key, byte[] iv)
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
                var hash = new byte[(int)(sha.HashSize * 0.125)];
                var raws = new byte[output.Length - hash.Length];
                output.Seek(0, SeekOrigin.Begin);
                output.Read(raws, 0, raws.Length);
                output.Read(hash, 0, hash.Length);
                var chash = sha.ComputeHash(raws);
                if (!hash.SequenceEqual(chash))
                {
                    throw new System.Exception("Invalid content hash");
                }
                return raws;
            }
        }
    }
}
