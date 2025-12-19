# File I/O Calculator

A C++ program that reads numbers from a file, calculates their sum and average, and writes results to an output file.

## Features
- Reads 6 numbers from input file
- Calculates sum and average
- Writes formatted results to output file

## Files
- `File_IO.cpp` - Main program
- `Numbers.txt` - Input file containing 6 numbers
- `Result.txt` - Output file (auto-generated)

## How to Run

### Compile and Run:
```bash
g++ File_IO.cpp -o FileIO
./FileIO
```

### View Results:
```bash
cat Result.txt
```

## Example

**Input (Numbers.txt):**
```
99 88 77 66 55 44
```

**Output (Result.txt):**
```
The six numbers : 99 88 77 66 55 44
Sum of Six numbers : 429
The average of six numbers : 71.50
```

## Course Information
- **Programmer**: Ana McCullagh
- **Course**: CIS142
- **Assignment**: Lab 2
- **Date**: September 30, 2022
