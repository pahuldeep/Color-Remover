# **Qt Color Remover Tool**

A Qt-based desktop application to remove specific colors from an image with customizable tolerance. This tool allows users to load an image, select multiple colors to remove, adjust tolerance levels, and save the modified image.

## **Features**
- **Image Loading**: Load images in various formats (JPEG, PNG, BMP).
- **Color Removal**: Select and remove specific colors from an image.
- **Tolerance Adjustment**: Adjust the tolerance level to remove colors within a certain range.
- **Multiple Color Removal**: Remove multiple colors at once.
- **Image Saving**: Save the modified image after color removal.
- **User-friendly UI**: An intuitive, modern interface with tooltips and clear labels.

## **Screenshots**
| Original Image | Color Removal Interface |
| -------------- | ----------------------- |
| ![uploadreadme2](https://github.com/user-attachments/assets/73e93008-975f-4db3-8e7f-17557b1ef6da) | ![selector](https://github.com/user-attachments/assets/7150a18b-484c-43a1-818a-74371ef14fb7) |

## **Installation**

1. **Clone the repository**:
   ```bash
   git clone https://github.com/pahuldeep/Color-Remover.git
   cd Color-Remover
   ```

2. **Open the project in Qt Creator**:
   - Open `ColorRemover.pro` in Qt Creator.

3. **Build and Run**:
   - Click on the "Build" button in Qt Creator.
   - Once built, run the application to launch the color remover tool.

## **Usage**

1. **Load an Image**:
   - Click the "Load Image" button (camera icon) to load an image from your system.

2. **Select a Color**:
   - Click the "Select Color" button (eye icon) and use the color picker to choose a color from the image you want to remove.

3. **Adjust Tolerance**:
   - Use the vertical slider to adjust the color tolerance. This controls how close other colors need to be to the selected color to be removed.

4. **Remove Color**:
   - Click the "Remove Color" button (eye slash icon) to remove the selected color(s) from the image.

5. **Save Image**:
   - Once you are satisfied with the result, click the "Save Image" button (cloud download icon) to save the modified image.

## **Development Setup**

### **Prerequisites**

- **Qt Framework**: [Download Qt](https://www.qt.io/download) to install Qt Creator and the necessary libraries.
- **C++ Compiler**: Ensure that you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).

### **Project Structure**
```
├── ColorUI.qrc           # Resource file for icons and assets
├── icons/                # Directory containing all SVG/PNG icons
├── main.cpp              # Entry point of the application
├── mainwindow.cpp        # Core logic for handling image manipulation and UI interactions
├── mainwindow.h          # Header file for the main window class
├── mainwindow.ui         # UI layout for the main window, created with Qt Designer
├── ColorRemover.pro    # Qt project file for building the application
└── README.md             # Project documentation
```

### **Resource Icons**
The application uses icons for its buttons, stored in the `icons/` folder. Make sure the icons are included in your resource file (`ColorUI.qrc`).

### **Building from Source**

1. Ensure Qt and a C++ compiler are installed.
2. Clone the repository:
   ```bash
   git clone https://github.com/pahuldeep/Color-Remover.git
   cd Color-Remover
   ```
3. Build the project using Qt Creator or the command line:
   ```bash
   qmake && make
   ```

4. Run the application:
   ```bash
   ./ColorRemover
   ```

## **Contribution**

Contributions are welcome! Feel free to:
- Submit issues and feature requests.
- Fork the repository and create pull requests.

### **Steps to Contribute**:
1. Fork the project.
2. Create your feature branch:
   ```bash
   git checkout -b feature/YourFeature
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add some feature"
   ```
4. Push to the branch:
   ```bash
   git push origin feature/YourFeature
   ```
5. Open a pull request.

## **License**
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
