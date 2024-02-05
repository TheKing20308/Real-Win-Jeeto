using UnityEngine;
using System.Collections.Generic;
using System.Text.RegularExpressions;


namespace ZxLog
{
    public static class Print
    {
        private static Dictionary<LogColor, string> colorMappings = new()
        {
            {LogColor.Black, "#0C0C0C"},
            {LogColor.Blue, "#0037DA"},
            {LogColor.Cyan, "#3A96DD"},
            {LogColor.Green, "#13A10E"},
            {LogColor.Purple, "#881798"},
            {LogColor.Red, "#C50F1F"},
            {LogColor.White, "#CCCCCC"},
            {LogColor.Yellow, "#C19C00"},
            {LogColor.BrightBlack, "#767676"},
            {LogColor.BrightBlue, "#3B78FF"},
            {LogColor.BrightCyan, "#61D6D6"},
            {LogColor.BrightGreen, "#16C60C"},
            {LogColor.BrightPurple, "#B4009E"},
            {LogColor.BrightRed, "#E74856"},
            {LogColor.BrightWhite, "#F2F2F2"},
            {LogColor.BrightYellow, "#F9F1A5"}
        };


        public static void BigWhiteLog(string message)
        {
#if UNITY_EDITOR

            Debug.Log("<b><size=15>" + message + "</size></b>");
#endif
        }

        public static void Separator()
        {
#if UNITY_EDITOR

            Debug.Log("<b> ================================ </b>");
#endif
        }

        public static void Separator(LogColor color = LogColor.White)
        {
#if UNITY_EDITOR

            colorMappings.TryGetValue(color, out var c);
            Debug.Log(
                $"<b><color={c}> ================================ </color></b>");
#endif
        }

        public static void CustomLog(string message, LogColor color = LogColor.White)
        {
#if UNITY_EDITOR

            colorMappings.TryGetValue(color, out var c);
            Debug.Log($"<color={c}>{message}</color>");
#endif
        }

        public static void CustomLog(string message, int fontSize, LogColor color = LogColor.White)
        {
#if UNITY_EDITOR
            
            colorMappings.TryGetValue(color, out var c);
            Debug.Log($"<size={fontSize}><color={c}>{message}</color></size>");
#endif
        }

        public static void CustomLog(string message, string hexCode)
        {
            
            if (IsValidHexCode(hexCode))
            {
                Debug.Log($"<color={hexCode}>{message}</color>");
            }
#if UNITY_EDITOR
            else
            {
                Debug.LogError($"Invalid hex code: {hexCode}");
            }
#endif
        }

        public static void CustomLog(string message, int fontSize, string hexCode)
        {
            
            if (IsValidHexCode(hexCode))
            {
                Debug.Log($"<b><size={fontSize}><color={hexCode}>{message}</color></size></b>");
            }
#if UNITY_EDITOR
            else
            {
                Debug.LogError($"Invalid hex code: {hexCode}");
            }
#endif
        }

        private static bool IsValidHexCode(string hexCode)
        {
            return Regex.IsMatch(hexCode, "^#(?:[0-9a-fA-F]{3}){1,2}$");
        }
    }

    public enum LogColor
    {
        Black,
        Blue,
        Cyan,
        Green,
        Purple,
        Red,
        White,
        Yellow,
        BrightBlack,
        BrightBlue,
        BrightCyan,
        BrightGreen,
        BrightPurple,
        BrightRed,
        BrightWhite,
        BrightYellow
    }
}