using UnityEngine;

public class PlayerController : MonoBehaviour
{
    #region Global Variable Declaration
    private static int _score;
    private static string _playerName;
    public static int Score { get { return _score; } set { _score = value; } }
    public static string PlayerName { get { return _playerName; } set { _playerName = value; } }
    #endregion

    #region Unity Build-in Function
    private void Start()
    {
        Score = 0;
        PlayerName = "DefaultName";
    }
    #endregion
}
