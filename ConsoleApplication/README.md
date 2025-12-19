# File I/O Calculator

A C++ program demonstrating file input/output operations, data processing, and statistical calculations.

## Overview

This application reads numerical data from an input file, performs statistical analysis (sum and average), and writes formatted results to an output file. It demonstrates fundamental file I/O operations and data manipulation in C++.

## Features

- **File-Based Input:** Reads data from external text files
- **Statistical Analysis:** Calculates sum and average of numerical datasets
- **Formatted Output:** Generates well-structured result files
- **Error Handling:** Manages file operations safely

## Technical Implementation

**Language:** C++ (C++11)  
**Libraries:** iostream, fstream, iomanip, cmath  
**Concepts Demonstrated:**
- File stream operations (ifstream/ofstream)
- Data type conversion
- Precision formatting
- File I/O best practices

## File Structure

### Input File (`Numbers.txt`)
Contains space-separated numerical values:
```
99 88 77 66 55 44
```

### Output File (`Result.txt`)
Generated automatically with analysis results:
```
The six numbers : 99 88 77 66 55 44
Sum of Six numbers : 429
The average of six numbers : 71.50
```

## Building and Running

### Compilation
```bash
g++ File_IO.cpp -o FileIO
```

### Execution
```bash
./FileIO
```

### View Results
```bash
cat Result.txt
```

## Usage

1. Ensure `Numbers.txt` exists in the same directory with 6 space-separated numbers
2. Compile and run the program
3. Check `Result.txt` for calculated results

## Algorithm

1. Open input file stream
2. Read six numerical values
3. Calculate sum of all values
4. Compute average (sum ÷ 6)
5. Write formatted results to output file
6. Close file streams

## Development Information

**Assignment:** Lab 2  
**Course:** CIS142 - Computer Programming II  
**Date:** September 30, 2022  
**Author:** Ana McCullagh
