# Calculator - Menu-Driven Calculator Application

A C++ console calculator demonstrating function design, parameter passing methods, and menu-driven program architecture.

## Overview

This application provides a simple yet comprehensive calculator interface showcasing different function implementation techniques in C++. It demonstrates both value-returning functions and void functions with reference parameters, along with robust input validation and user interaction patterns.

## Features

- **Menu-Driven Interface:** Clear, repeating menu for operation selection
- **Four Basic Operations:** Addition, subtraction, multiplication, and division
- **Input Validation:** Handles invalid menu selections with re-prompting
- **Multiple Function Types:** Demonstrates various parameter passing techniques
- **Loop-Based Flow:** Continuous operation until user quits

## Operations

| Operation      | Menu Option | Function Type                     |
| -------------- | ----------- | --------------------------------- |
| Addition       | A           | Return value (pass-by-value)      |
| Subtraction    | B           | Return value (pass-by-value)      |
| Multiplication | C           | Void function (pass-by-reference) |
| Division       | D           | Void function (pass-by-reference) |
| Quit           | Q           | Exit program                      |

## Technical Implementation

**Language:** C++ (C++11)  
**Libraries:** iostream, string, cmath

**Key Concepts Demonstrated:**

- Function declaration and definition
- Pass-by-value parameter passing
- Pass-by-reference parameter passing (using `&`)
- Return values vs void functions
- Menu-driven program design
- Input validation loops
- Character case conversion

**Function Signatures:**

```cpp
void menu();                          // Display menu
float add(float, float);              // Pass-by-value, return result
float subtract(float, float);         // Pass-by-value, return result
void multiply(float&, float&);        // Pass-by-reference, void
void divide(float&, float&);          // Pass-by-reference, void
```

## Building and Running

### Compilation

```bash
g++ Calculator.cpp -o Calculator
```

### Execution

```bash
./Calculator
```

## Usage Example

```
 A. Add two decimal numbers
 B. Subtract two decimal numbers
 C. Multiply two decimal numbers
 D. Divide two decimal numbers
 Q. Quit

 Please enter your selection: A
Please enter first decimal number: 15.5
Please enter second decimal number: 4.3
15.5 + 4.3 = 19.8

 A. Add two decimal numbers
 B. Subtract two decimal numbers
 C. Multiply two decimal numbers
 D. Divide two decimal numbers
 Q. Quit

 Please enter your selection: C
Please enter first decimal number: 6.5
Please enter second decimal number: 3.2
6.5 * 3.2 = 20.8

 A. Add two decimal numbers
 B. Subtract two decimal numbers
 C. Multiply two decimal numbers
 D. Divide two decimal numbers
 Q. Quit

 Please enter your selection: Q
Thank you for using this application. Good-bye!
```

## Program Flow

1. Display menu with operation choices
2. Get user selection and validate input
3. If invalid, prompt for re-entry
4. Based on selection:
   - **A/B:** Get two numbers, call function, display returned result
   - **C/D:** Get two numbers, pass by reference, function displays result
   - **Q:** Exit with goodbye message
5. Repeat until user quits

## Educational Value

This project demonstrates important programming concepts:

- **Function Design:** Different approaches to function implementation
- **Parameter Passing:** Understanding when to use value vs reference
- **User Interface:** Building intuitive menu-driven programs
- **Validation:** Robust input handling and error recovery
- **Control Flow:** Do-while loops, switch statements, and conditional logic

## Skills Demonstrated

- Modular program design with functions
- Multiple parameter passing techniques
- User input validation and error handling
- Menu-driven application architecture
- Clean code organization and documentation

## Development Information

**Assignment:** Lab 6  
**Course:** CIS142 - Computer Programming II  
**Date:** November 15, 2022  
**Author:** Ana McCullagh
