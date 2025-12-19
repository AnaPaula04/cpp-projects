# FoodOrder - Self-Service Ordering System

A C++ console application implementing a self-service restaurant ordering system with real-time pricing and receipt generation.

## Overview

This application simulates a food service kiosk, allowing users to place orders for multiple menu items and receive itemized receipts with automatic change calculation.

## Features

- **Interactive Ordering:** User-friendly console interface for order placement
- **Dynamic Pricing:** Real-time calculation of order totals
- **Receipt Generation:** Formatted receipts with itemized pricing
- **Change Calculation:** Automatic payment processing and change computation

## Menu Items

| Item | Price |
|------|-------|
| Pizza (per slice) | $2.75 |
| Soft Drink (per cup) | $2.00 |
| Chips (per bag) | $1.50 |
| Salad (per order) | $4.25 |

## Technical Implementation

**Language:** C++ (C++11)  
**Libraries:** iostream, string  
**Concepts Demonstrated:**
- Variable declaration and initialization
- User input handling
- Arithmetic operations
- Formatted console output
- Control flow

## Building and Running

### Compilation
```bash
g++ FoodOrder.cpp -o FoodOrder
```

### Execution
```bash
./FoodOrder
```

### Sample Output
```
********************************************************
*****       Welcome to Self-Service System         *****
********************************************************
Please enter your Name:  Ana
Pizza(slices):  3
Drink(cups):  2
Chips(bags):  1
Salad(orders):  1
Please enter amount you pay:  25

RECEIPT:
========================================================
Name:                        Ana
 Product Description:        Qty                Price
--------------------------------------------------------
 Pizza (slices):             3                   $8.25
 Soft drinks (cups):         2                   $4
 Chips (bags):               1                   $1.5
 Salad (orders):             1                   $4.25
---------------------------------------------------------
 Total Order:                                    $18
---------------------------------------------------------
 Cash:                       $25
 Change:                     $7
  ****** THANKS ******
```

## Development Information

**Assignment:** Lab 1  
**Course:** CIS142 - Computer Programming II  
**Date:** September 15, 2022  
**Author:** Ana McCullagh
