# GeometryCalculator - Area Calculation Tool

A C++ console application for calculating areas of common geometric shapes through an interactive menu-driven interface.

## Overview

This application provides quick area calculations for four fundamental geometric shapes: triangles, rectangles, squares, and circles. It demonstrates control structures, mathematical operations, and user interaction patterns in C++.

## Features

- **Multi-Shape Support:** Calculate areas for 4 different geometric shapes
- **Interactive Menu:** Simple, repeating menu interface
- **Mathematical Functions:** Uses `pow()` for exponentiation
- **Loop-Based Design:** Continuous operation until user exits
- **Input Flexibility:** Handles both integer and floating-point measurements

## Supported Shapes

| Shape     | Menu Option | Formula           | Required Input |
| --------- | ----------- | ----------------- | -------------- |
| Triangle  | A           | ½ × base × height | Base, Height   |
| Rectangle | B           | length × width    | Length, Width  |
| Square    | C           | side²             | Side           |
| Circle    | D           | πr²               | Radius         |
| Quit      | Q           | Exit program      | -              |

## Technical Implementation

**Language:** C++ (C++11)  
**Libraries:** iostream, string, cmath

**Key Concepts Demonstrated:**

- Do-while loop structure
- Switch-case statement
- Mathematical operations and formulas
- Type conversion (int to float)
- Character manipulation with `toupper()`
- Mathematical constants (π = 3.141592)

**Formulas Used:**

```cpp
Triangle:  Area = 0.5 * base * height
Rectangle: Area = length * width
Square:    Area = side * side
Circle:    Area = π * radius²
```

## Building and Running

### Compilation

```bash
g++ GeometryCalculator.cpp -o GeometryCalculator
```

### Execution

```bash
./GeometryCalculator
```

## Usage Example

```
 A. Area of a Triangle
 B. Area of a Rectangle
 C. Area of a Square
 D. Area of a Circle
 Q. Quit
 Please enter your selection: A
Please enter the base of a Triangle: 10
Please enter the height of a Triangle: 8
Area of Triangle is 40

 A. Area of a Triangle
 B. Area of a Rectangle
 C. Area of a Square
 D. Area of a Circle
 Q. Quit
 Please enter your selection: D
Please enter the radius of a Circle: 5.5
Area of Circle is 95.0332

 A. Area of a Triangle
 B. Area of a Rectangle
 C. Area of a Square
 D. Area of a Circle
 Q. Quit
 Please enter your selection: Q
Thank you for using the program.
```

## Calculation Examples

### Triangle

- **Input:** Base = 10, Height = 6
- **Calculation:** 0.5 × 10 × 6
- **Result:** 30

### Rectangle

- **Input:** Length = 8, Width = 5
- **Calculation:** 8 × 5
- **Result:** 40

### Square

- **Input:** Side = 7
- **Calculation:** 7 × 7
- **Result:** 49

### Circle

- **Input:** Radius = 3
- **Calculation:** π × 3²
- **Result:** 28.2743

## Program Flow

1. Display shape selection menu
2. Get user's menu choice
3. Convert input to uppercase
4. Based on selection:
   - **A-D:** Prompt for measurements, calculate and display area
   - **Q:** Exit with thank you message
   - **Other:** Display error message
5. Repeat until user quits

## Educational Value

This project demonstrates:

- **Control Structures:** Do-while loops and switch statements
- **Mathematical Programming:** Implementing geometric formulas
- **User Interaction:** Menu-driven program design
- **Type Handling:** Working with integers and floating-point numbers
- **Mathematical Functions:** Using `pow()` from cmath library

## Skills Demonstrated

- Loop control structures (do-while)
- Switch-case statement implementation
- Mathematical formula implementation
- User input processing
- Menu-driven application design

## Development Information

**Assignment:** Lab 5  
**Course:** CIS142 - Computer Programming II  
**Date:** October 1, 2022  
**Author:** Ana McCullagh
