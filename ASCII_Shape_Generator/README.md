# ASCII Shape Generator 🎨

A comprehensive C library for generating various ASCII art shapes and patterns including pyramids, diamonds, arrows, and more!

## 🌟 Features
This project provides **15 different shape types** with multiple variations:
### Shape Types
1. **Full Pyramid** - Centered triangular pyramid
2. **Right Half Pyramid** - Right-aligned triangle
3. **Left Half Pyramid** - Left-aligned triangle
4. **Inverted Full Pyramid** - Upside-down centered triangle
5. **Inverted Right Half Pyramid** - Upside-down right triangle
6. **Inverted Left Half Pyramid** - Upside-down left triangle
7. **Diamond Shape** - Diamond/rhombus pattern
8. **Hourglass Shape** - Hourglass/bow-tie pattern
9. **Left Arrow** - Left-pointing arrow
10. **Right Arrow** - Right-pointing arrow
11. **Pascal Triangle** - Mathematical Pascal's triangle
12. **Square** - Square patterns
13. **Right Rhombus** - Right-leaning parallelogram
14. **Left Rhombus** - Left-leaning parallelogram
15. **Heart Shape** - Heart pattern
### Pattern Options
- **Solid patterns** with three building units:
    - ⭐ Stars (`*`)
    - 🔢 Numbers (`1 2 3...`)
    - 🔤 Letters (`A B C...`)
- **Hollow patterns** - Only borders/outlines
## 🚀 Getting Started
### Prerequisites
- GCC compiler or any C compiler
- Standard C library
### Compilation
```bash
gcc -o shapes shapes_program.c shapes_functions.c
```
### Running the Program
```bash
./shapes
```
## 📖 Usage
1. Run the program
2. Choose a shape type (1-15)
3. Select fill type (Hollow/Solid)
4. For solid shapes, choose building unit (Stars/Numbers/Letters)
5. Enter the number of rows
6. View your ASCII art!
### Example Output

**Full Solid Star Pyramid (5 rows):**
```
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
```

**Diamond Hollow Star (4 rows):**
```
      * 
    *   * 
  *       * 
*           * 
  *       * 
    *   * 
      * 
```

**Pascal Triangle (5 rows):**
```
        1 
      1   1 
    1   2   1 
  1   3   3   1 
1   4   6   4   1 
```

## 📁 Project Structure
```
├── shapes_header.h      # Function declarations and prototypes
├── shapes_functions.c   # Implementation of all shape functions
├── shapes_program.c     # Main program with user interface
├── README.md           # This file
└──
```

## 🛠️ Code Architecture
The project follows a modular design:
- **Header File** (`shapes_header.h`): Contains all function prototypes organized by shape categories
- **Functions File** (`shapes_functions.c`): Implements all shape generation algorithms
- **Main Program** (`shapes_program.c`): Provides interactive user interface
### Key Functions
- `ShapePrint()` - Main interactive function
- `FullSolidStarPyramid()` - Example shape function
- Individual functions for each shape variation
## 🤝 Contributing
Contributions are welcome! Here are some ways to contribute:
1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/new-shape`)
3. **Add your new shape functions** to `shapes_functions.c`
4. **Update the header file** with new prototypes
5. **Update the main menu** in `ShapePrint()` function
6. **Commit your changes** (`git commit -am 'Add new shape'`)
7. **Push to the branch** (`git push origin feature/new-shape`)
8. **Create a Pull Request**
### Ideas for New Features
- Circle patterns
- Spiral shapes
- More complex geometric patterns
- Color support (if terminal supports it)
- Size validation and limits
- Save output to file
## 🐛 Bug Reports
If you find a bug, please create an issue with:
- Description of the problem
- Steps to reproduce
- Expected vs actual behavior
- Your compiler and system information
## 👨‍💻 Author
**Fares Hesham** - _Initial work_
## 🙏 Acknowledgments
- Inspired by classic programming exercises
- Educational programming patterns
---
**⭐ Star this repository if you found it helpful!**