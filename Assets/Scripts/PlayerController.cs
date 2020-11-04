using UnityEngine;

public class PlayerController : MonoBehaviour
{
    #region Global Variable Declaration
    private int _score;
    private string _playerName;
    public int Score { get { return _score; } set { _score = value; } }
    public string PlayerName { get { return _playerName; } set { _playerName = value; } }
    #endregion

    #region Unity Build-in Function
    private void Start()
    {
        Score = 0;
        PlayerName = "DefaultName";
    }
    #endregion
}
