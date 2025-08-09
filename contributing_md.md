# Contributing to ASCII Shape Generator

Thank you for your interest in contributing to the ASCII Shape Generator! This document provides guidelines and information for contributors.

## 🚀 Getting Started

### Prerequisites
- GCC compiler or any C compiler
- Basic knowledge of C programming
- Understanding of ASCII art patterns
- Git for version control

### Setting Up Development Environment

1. **Fork the repository** on GitHub
2. **Clone your fork** locally:
   ```bash
   git clone https://github.com/your-username/ascii-shape-generator.git
   cd ascii-shape-generator
   ```
3. **Create a new branch** for your feature:
   ```bash
   git checkout -b feature/your-feature-name
   ```
4. **Build the project**:
   ```bash
   make
   ```

## 📋 How to Contribute

### Reporting Bugs
- Use the GitHub Issues page
- Include a clear title and description
- Provide steps to reproduce the bug
- Include system information (OS, compiler version)
- Add sample input/output if applicable

### Suggesting Features
- Open a GitHub Issue with the "enhancement" label
- Describe the feature clearly
- Explain why it would be useful
- Provide examples or mockups if possible

### Code Contributions

#### Adding New Shapes
1. **Add function prototype** to `shapes_header.h`:
   ```c
   // Function prototypes for YourShape
   void YourSolidShape(int rows);
   void YourHollowShape(int rows);
   ```

2. **Implement the function** in `shapes_functions.c`:
   ```c
   void YourSolidShape(int rows) {
       // Your implementation here
       for (int i = 1; i <= rows; i++) {
           // Pattern logic
           printf("\n");
       }
   }
   ```

3. **Update the menu** in `ShapePrint()` function:
   - Add new menu option
   - Add case in switch statements
   - Update error messages

4. **Test thoroughly** with different row counts

#### Code Style Guidelines
- **Indentation**: Use 4 spaces (no tabs)
- **Braces**: K&R style
- **Naming**: 
  - Functions: `PascalCase`
  - Variables: `snake_case`
  - Constants: `UPPER_CASE`
- **Comments**: Clear and descriptive
- **Line length**: Maximum 80 characters when possible

#### Example Function Template
```c
void YourShapeFunction(int rows) {
    // Validate input
    if (rows < 1) {
        printf("ERROR: Invalid number of rows.\n");
        return;
    }
    
    // Main pattern logic
    for (int i = 1; i <= rows; i++) {
        // Spacing logic
        for (int space = 1; space <= rows - i; space++)
            printf(" ");
            
        // Pattern logic
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
```

## 🧪 Testing

### Manual Testing
- Test with various row counts (1, 5, 10, 20)
- Test edge cases (very small/large numbers)
- Test invalid inputs
- Verify pattern alignment and spacing

### Adding Test Cases
Consider creating test files that demonstrate your shapes:
```bash
echo "5" | ./shapes  # Test with 5 rows
echo "10" | ./shapes # Test with 10 rows
```

## 📝 Documentation

### Code Documentation
- Add comments for complex algorithms
- Document function parameters and return values
- Include examples in function headers

### README Updates
When adding features:
- Update the feature list
- Add usage examples
- Update the project structure if needed

## 🔧 Technical Guidelines

### Performance Considerations
- Avoid unnecessary loops
- Use efficient algorithms for large patterns
- Consider memory usage for large shapes

### Error Handling
- Validate all user inputs
- Provide clear error messages
- Handle edge cases gracefully

### Compatibility
- Use standard C99 features
- Avoid platform-specific code
- Test on different compilers if possible

## 📤 Submitting Changes

### Pull Request Process
1. **Update documentation** if needed
2. **Test your changes** thoroughly
3. **Commit with clear messages**:
   ```bash
   git commit -m "Add hollow circle shape function"
   ```
4. **Push to your fork**:
   ```bash
   git push origin feature/your-feature-name
   ```
5. **Create Pull Request** with:
   - Clear title and description
   - Link to related issues
   - Screenshots/examples if applicable

### Commit Message Guidelines
- Use present tense ("Add feature" not "Added feature")
- Keep first line under 50 characters
- Add detailed description if needed
- Reference issues: "Fixes #123"

## 🎯 Priority Areas

We especially welcome contributions in these areas:

### High Priority
- **New Shape Types**: Circles, spirals, complex patterns
- **Bug Fixes**: Memory leaks, incorrect patterns
- **Code Optimization**: Performance improvements

### Medium Priority
- **Enhanced UI**: Better menu system, colored output
- **Documentation**: More examples, tutorials
- **Testing**: Automated test suite

### Low Priority
- **Platform Support**: Windows-specific features
- **Advanced Features**: File output, configuration files

## 📖 Resources

### Learning Resources
- [C Programming Tutorial](https://www.learn-c.org/)
- [ASCII Art Patterns](https://www.asciiart.eu/)
- [Git Basics](https://git-scm.com/doc)

### Useful Tools
- **Compilers**: GCC, Clang, MSVC
- **Debuggers**: GDB, Valgrind
- **Editors**: VS Code, Vim, CLion

## ❓ Questions?

If you have questions about contributing:
- Check existing issues and discussions
- Create a new issue with the "question" label
- Reach out to maintainers

## 🙏 Recognition

Contributors will be:
- Listed in the README.md file
- Credited in release notes
- Invited to be maintainers for significant contributions

Thank you for helping make ASCII Shape Generator better! 🎨