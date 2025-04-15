# Annota - On-Screen Annotation Tool  


**Annota** is a lightweight, cross-platform on-screen annotation tool built with Qt/C++. Draw directly on your screen for presentations, tutorials, or remote collaboration.

## ✨ Key Features  

- 🖍️ Real-time drawing with customizable pen (color/size/opacity)  
- 🪟 Transparent overlay window that stays on top  
- ⚡ Global hotkey support (show/hide instantly)  
- 📌 Floating toolbar for quick access  
- 🗔 System tray integration  
- 🌐 Cross-platform (Windows/Linux)  

## 🚀 Getting Started  

### Prerequisites  

- Qt 5.15+  
- C++17 compatible compiler  
- CMake 3.5+  

### Installation  

```bash
git clone https://github.com/malekpouri/annota.git
cd annota
mkdir build && cd build
cmake -DCMAKE_PREFIX_PATH=/path/to/qt ..
cmake --build .
```

### Running  

```bash
./annota  # Linux
.\annota.exe  # Windows
```

## 🛠️ Default Controls  

- **Toggle Overlay**: `Ctrl+Alt+A`  
- **Pen Color**: Red (#FF0000)  
- **Pen Size**: 3px  
- **Quick Menu**: Right-click on canvas  

## 📚 Documentation  

For advanced usage:  
- [Customizing Hotkeys](docs/hotkeys.md)  
- [Building from Source](docs/building.md)  
- [Adding New Tools](docs/development.md)  

## 🤝 Contributing  

We welcome contributions! Please:  
1. Open an issue to discuss your changes  
2. Follow our [coding standards](docs/CODING_STANDARDS.md)  
3. Test your changes thoroughly  

See our [contribution guide](CONTRIBUTING.md) for details.  

## 📜 License  

Distributed under the **MIT License**. See [LICENSE](LICENSE) for details.  

---
<div align="center">
  Made with ❤️ by Mohammad Malekpori | ⭐ Star us on GitHub!
</div>

---
