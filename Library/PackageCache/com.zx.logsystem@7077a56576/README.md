# ZxLogSystem - Enhanced Unity Console Debugs

![](https://media.tenor.com/TvV90FOIvxsAAAAd/tadano-manga.gif)

Welcome to ZxLogSystem, a powerful self-debugging tool designed to bring color and style to your Unity debugging experience. Say goodbye to dull console logs and dive into a world of vibrant, colorful text with adjustable font sizes. This package is engineered not just to make debugging informative, but also to make it a visually engaging process.

## Features

- **Colorful Text:** Immerse yourself in a palette of vibrant colors that adds an extra dimension to your console messages.
- **Custom Font Sizes:** Tailor the font sizes to match different log levels, ensuring that crucial messages don't go unnoticed.

## Getting Started

Incorporating ZxLogSystem into your Unity project is simple. Just follow these steps:

1. Copy the GitHub repository URL: `https://github.com/yourusername/ZxLogSystem.git`.
2. Launch Unity and navigate to the **Package Manager** (Window > Package Manager).
3. Click the **+** button in the upper-left corner of the Package Manager window.
4. Choose **Add package from git URL** from the dropdown menu.
5. Paste the GitHub repository URL you copied earlier (Step 1) and click **Add**.

## Usage

ZxLogSystem provides a set of easy-to-use methods for enhancing your debugging experience. Here's a quick rundown:

### Separating Lines in Custom Color

```csharp
Print.Separator(LogColor.BrightGreen);
```

### Custom Log with Color and Font Size

```csharp
// Print a custom log with the message, font size (20), and color
Print.CustomLog("Message", 20, "#785tgf" or LogColor.Blue);
```

### Big White Log

```csharp
Print.BigWhiteLog("whatever");
```

### Customization
ZxLogSystem is designed to be flexible. You can easily experiment with colors and font sizes by exploring the customization options within the package.

### Contributions
Contributions are always welcome! If you have ideas for enhancements or new features, feel free to open an issue or submit a pull request on the GitHub repository.

### License
This project is licensed under the MIT License.


