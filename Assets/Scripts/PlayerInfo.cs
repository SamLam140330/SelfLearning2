using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    #region Global Variable Declaration
    private static float _health;
    public static float PlayerHealth { get { return _health; } set { _health = value; } }
    #endregion

    #region Unity Build-in Function
    private void Start()
    {
        PlayerHealth = 100;
    }
    #endregion
}
