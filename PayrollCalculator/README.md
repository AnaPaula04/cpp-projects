# PayrollCalculator - Employee Payroll Management System

A C++ console application for HR departments to calculate employee weekly salaries with position-based overtime rates.

## Overview

This application processes employee payroll data, calculating weekly salaries based on hourly rates, work hours, and position level. It implements differential overtime pay rates for different employee positions and supports batch processing of multiple employee records.

## Features

- **Multi-Employee Processing:** Handle up to 3 employee records in a single session
- **Position-Based Pay Rates:** Three employee levels with unique overtime multipliers
- **Overtime Calculation:** Automatic overtime pay for hours exceeding 40 per week
- **Structured Data Management:** Uses structs and enums for organized employee data
- **Formatted Output:** Clear, organized display of employee payroll information

## Position Levels & Overtime Rates

| Position | Level Code | Overtime Multiplier |
| -------- | ---------- | ------------------- |
| Engineer | 0          | 1.15x (15% premium) |
| Manager  | 1          | 1.20x (20% premium) |
| Director | 2          | 1.30x (30% premium) |

## Technical Implementation

**Language:** C++ (C++11)  
**Libraries:** iostream, cmath, iomanip

**Key Concepts Demonstrated:**

- Enumerations for type-safe position levels
- Structures for complex data organization
- Arrays for multiple record storage
- Switch statements for conditional logic
- Loop-based user interaction
- Formatted numerical output

**Data Structures:**

```cpp
enum Level {ENGINEER, MANAGER, DIRECTOR};

struct Employee {
    string name;
    string EmployeeID;
    Level poslevel;
    float hourlyRate;
    float workingHours;
    float weeklySalary;
    float overTimePay;
};
```

## Building and Running

### Compilation

```bash
g++ PayrollCalculator.cpp -o PayrollCalculator
```

### Execution

```bash
./PayrollCalculator
```

## Usage Example

```
Please enter employee's name:
John
Please enter employee's ID:
E1001
Please enter employee's Level (0: ENGINEER, 1: MANAGER, 2: DIRECTOR):
0
Please enter employee's hourly rate:
25.00
Please enter employee's working hours:
45

Are you continued (Y/N)? N

********************************************************************************
Employee Information:

Employee Name: John
Employee ID: E1001
Employee Level: 0
Employee Weekly Pay: $1143.75
```

**Calculation Breakdown:**

- Regular pay (40 hrs × $25): $1,000.00
- Overtime pay (5 hrs × $25 × 1.15): $143.75
- **Total weekly pay: $1,143.75**

## Salary Calculation Logic

### Regular Hours (≤ 40 hours)

```
Weekly Salary = Hourly Rate × Working Hours
```

### Overtime Hours (> 40 hours)

```
Regular Pay = Hourly Rate × 40
Overtime Pay = Hourly Rate × (Hours - 40) × Position Multiplier
Total Pay = Regular Pay + Overtime Pay
```

## Skills Demonstrated

- Complex data structure design
- Business logic implementation
- User input validation and processing
- Financial calculations with precision
- Scalable record management system

## Development Information

**Assignment:** Lab 9  
**Course:** CIS142 - Computer Programming II  
**Date:** December 6, 2022  
**Author:** Ana McCullagh
