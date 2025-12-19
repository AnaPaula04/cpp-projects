//********************************************************
// Programmer’s name:  ANA MCCULLAGH
// Course Number:  CIS142
// Date:  September 15, 2022
// Assignment:  Lab 1 
// Description:  Self-Service application
// Files: foodOrder1.cpp
// ********************************************************

// FoodOrder1.cpp : This file contains the 'main' function. Program execution begins and ends there.

// This are pre processors commands 
#include <iostream>  // This is for the cin and cout functions  
#include <string>    // This is to use the strings functions 

using namespace std; // This is to use cin and cout functions 

int main()
{

    //declare constant variables

    const float PIZZA = 2.75;
    const float DRINK = 2.0;
    const float CHIPS = 1.50;
    const float SALAD = 4.25;

    //declare variables

    string Name;
    int slices = 0;
    int cups = 0;
    int bags = 0;
    int orders = 0;

    float   pizzaCost = 0;
    float   drinkCost = 0;
    float   chipsCost = 0;
    float   saladCost = 0;
    float   totalCost = 0;
    float   amountPaid = 0;

    //display and read data

    //Prompt message to users    

    cout << "\n********************************************************\n";
    cout << "\n*****       Welcome to Self-Service System         *****\n";
    cout << "\n********************************************************\n";

    cout << "Please enter your Name:  ";
    cin >> Name;
    cout << "Pizza(slices):  ";
    cin >> slices;
    cout << "Drink(cups):  ";
    cin >> cups;
    cout << "Chips(bags):  ";
    cin >> bags;
    cout << "Salad(orders):  ";
    cin >> orders;

    cout << "Please enter amount you pay:  ";
    cin >> amountPaid;

    //read orders

    //calculation

    //how much for each items

    pizzaCost = PIZZA * slices;
    drinkCost = DRINK * cups;
    chipsCost = CHIPS * bags;
    saladCost = SALAD * orders;
    totalCost = pizzaCost + drinkCost + chipsCost + saladCost;


    cout << "\nRECEIPT:" << endl;
    cout << "\n======================================================== \n";

    cout << "\nName:                        " << Name << endl;
    cout << "\n Product Description:        Qty                Price" << endl;

    cout << "-------------------------------------------------------- \n";

    cout << "\n Pizza (slices):             " << slices << "                   $" << pizzaCost << endl;
    cout << "\n Soft drinks (cups):         " << cups << "                   $" << drinkCost << endl;
    cout << "\n Chips (bags):               " << bags << "                   $" << chipsCost << endl;
    cout << "\n Salad (orders):             " << orders << "                   $" << saladCost << endl;


    cout << "--------------------------------------------------------- \n";

    cout << "\n Total Order:                                    $" << totalCost << endl;

    cout << "--------------------------------------------------------- \n";

    cout << "\n Cash:                       $" << amountPaid << endl;
    cout << "\n Change:                     $" << (amountPaid - totalCost) << endl;

    cout << "\n  ****** THANKS ******       " << endl;


    return 0;
}