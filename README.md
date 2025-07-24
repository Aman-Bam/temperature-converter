# 🌡️ Temperature Converter

A comprehensive console-based temperature converter written in C that supports conversions between Celsius, Fahrenheit, and Kelvin temperature scales.

![C](https://img.shields.io/badge/Language-C-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Platform](https://img.shields.io/badge/Platform-Cross--Platform-orange.svg)

## 📋 Table of Contents

- [Features](#-features)
- [Demo](#-demo)
- [Installation](#-installation)
- [Usage](#-usage)
- [Temperature Scales](#-temperature-scales)
- [Validation Rules](#-validation-rules)
- [Code Structure](#-code-structure)
- [Examples](#-examples)
- [Contributing](#-contributing)
- [License](#-license)

## ✨ Features

- **Complete Temperature Conversions**: All 6 possible combinations between Celsius, Fahrenheit, and Kelvin
- **Input Validation**: Robust error handling for invalid inputs and physically impossible temperatures
- **User-Friendly Interface**: Clean menu-driven interface with clear prompts
- **Absolute Zero Protection**: Prevents conversions below physically possible temperatures
- **Precision Output**: Results displayed with 2 decimal places for accuracy
- **Continuous Operation**: Perform multiple conversions without restarting
- **Cross-Platform**: Works on Windows, Linux, and macOS

## 🎬 Demo

```
========================================
    Welcome to Temperature Converter    
========================================

=== Temperature Converter ===
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Fahrenheit to Celsius
4. Fahrenheit to Kelvin
5. Kelvin to Celsius
6. Kelvin to Fahrenheit
7. Exit
=============================
Enter your choice (1-7): 1
Enter temperature in Celsius: 25
25.00°C = 77.00°F

Do you want to perform another conversion? (y/n): y

=== Temperature Converter ===
1. Celsius to Fahrenheit
2. Celsius to Kelvin
3. Fahrenheit to Celsius
4. Fahrenheit to Kelvin
5. Kelvin to Celsius
6. Kelvin to Fahrenheit
7. Exit
=============================
Enter your choice (1-7): 7
Thank you for using Temperature Converter!
Goodbye!
```

## 🚀 Installation

### Prerequisites
- GCC compiler or any C compiler
- Command line/terminal access

### Compilation

#### Linux/macOS:
```bash
gcc -o temp_converter temp_converter.c
./temp_converter
```

#### Windows (MinGW):
```cmd
gcc -o temp_converter.exe temp_converter.c
temp_converter.exe
```

#### Alternative compilation with more flags:
```bash
gcc -Wall -Wextra -std=c99 -o temp_converter temp_converter.c
```

## 📖 Usage

1. **Run the program**:
   ```bash
   ./temp_converter
   ```

2. **Select conversion type**: Choose from the 7 menu options (1-6 for conversions, 7 to exit)

3. **Enter temperature**: Input the temperature value when prompted

4. **View results**: The converted temperature will be displayed with proper units

5. **Continue or exit**: Choose to perform another conversion or exit the program

## 🌡️ Temperature Scales

### Supported Conversions

| From        | To          | Formula                           |
|-------------|-------------|-----------------------------------|
| Celsius     | Fahrenheit  | °F = (°C × 9/5) + 32             |
| Celsius     | Kelvin      | K = °C + 273.15                  |
| Fahrenheit  | Celsius     | °C = (°F - 32) × 5/9             |
| Fahrenheit  | Kelvin      | K = (°F - 32) × 5/9 + 273.15     |
| Kelvin      | Celsius     | °C = K - 273.15                  |
| Kelvin      | Fahrenheit  | °F = (K - 273.15) × 9/5 + 32     |

### Reference Points

| Temperature | Celsius | Fahrenheit | Kelvin |
|-------------|---------|------------|--------|
| Absolute Zero | -273.15°C | -459.67°F | 0K |
| Water Freezing | 0°C | 32°F | 273.15K |
| Room Temperature | 20°C | 68°F | 293.15K |
| Water Boiling | 100°C | 212°F | 373.15K |

## ✅ Validation Rules

- **Menu Input**: Must be integers between 1-7
- **Temperature Input**: Must be valid numeric values
- **Physical Limits**:
  - Celsius: Cannot be below -273.15°C
  - Fahrenheit: Cannot be below -459.67°F
  - Kelvin: Cannot be below 0K

## 🏗️ Code Structure

```
temp_converter.c
├── main()                    # Main program loop and menu handling
├── displayMenu()             # Show conversion options
├── getValidChoice()          # Validate menu selection
├── getTemperature()          # Get and validate temperature input
├── validateTemperature()     # Check physical temperature limits
└── Conversion Functions:
    ├── celsiusToFahrenheit()
    ├── celsiusToKelvin()
    ├── fahrenheitToCelsius()
    ├── fahrenheitToKelvin()
    ├── kelvinToCelsius()
    └── kelvinToFahrenheit()
```

## 💡 Examples

### Basic Conversions
```bash
# Convert 100°C to Fahrenheit
Choice: 1
Input: 100
Output: 100.00°C = 212.00°F

# Convert 32°F to Celsius
Choice: 3
Input: 32
Output: 32.00°F = 0.00°C

# Convert 0K to Celsius
Choice: 5
Input: 0
Output: 0.00K = -273.15°C
```

### Error Handling
```bash
# Invalid menu choice
Enter your choice (1-7): 9
Error: Please enter a valid choice (1-7):

# Invalid temperature input
Enter temperature in Celsius: abc
Error: Please enter a valid number:

# Below absolute zero
Enter temperature in Celsius: -300
Error: Temperature cannot be below -273.15°C (absolute zero).
```

## 🧪 Testing

Test the program with these scenarios:

### Valid Test Cases
- [ ] All conversion options (1-6)
- [ ] Positive temperatures
- [ ] Negative temperatures (above absolute zero)
- [ ] Decimal values
- [ ] Absolute zero values
- [ ] Multiple conversions in one session

### Invalid Test Cases
- [ ] Invalid menu choices (0, 8, letters)
- [ ] Invalid temperature inputs (letters, symbols)
- [ ] Temperatures below absolute zero
- [ ] Edge cases around absolute zero

## 🤝 Contributing

Contributions are welcome! Here are some ways you can contribute:

1. **Bug Reports**: Report any issues or unexpected behavior
2. **Feature Requests**: Suggest new features or improvements
3. **Code Improvements**: Submit pull requests for code enhancements
4. **Documentation**: Help improve documentation and examples

### Development Setup
```bash
git clone <repository-url>
cd temperature-converter
gcc -Wall -Wextra -g -o temp_converter temp_converter.c
./temp_converter
```

### Potential Enhancements
- [ ] Scientific notation support
- [ ] Batch conversion from file
- [ ] Conversion history
- [ ] GUI version
- [ ] Unit tests
- [ ] Configuration file support

## 📚 Learning Objectives

This project demonstrates:
- **Function Design**: Modular programming with clear function responsibilities
- **Input Validation**: Robust error handling and user input validation
- **Menu Systems**: Console-based user interface design
- **Data Validation**: Physical constraints and boundary checking
- **Code Organization**: Clean, readable, and maintainable C code
- **Error Handling**: Graceful handling of invalid inputs

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🎯 Difficulty Level

**Beginner to Intermediate** - Perfect for:
- Learning C programming fundamentals
- Understanding function design and modularity
- Practicing input validation techniques
- Building console applications

**Estimated Development Time**: 2-4 hours for basic version

---

<div align="center">

**Built with ❤️ using C Programming Language**

[Report Bug](../../issues) · [Request Feature](../../issues) · [Documentation](../../wiki)

</div>
