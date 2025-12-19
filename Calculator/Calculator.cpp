// Programmer’s name:  ANA MCCULLAGH
// Course Number:  CIS142
// Date:  November 15, 2022
// Assignment:  Lab  6
// Description:  Write a C++ code for the program with functions for the choices.
// Files: Functions.cpp
// ********************************************************
// 
// 
// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void menu();
float add(float, float);
float subtract(float, float);
void multiply(float&, float&);
void divide(float&, float&);

int main()
{
    char selection;
    float firstnum, secondnum;
   
   
    do {
        menu();

        cout << " Please enter your selection: ";
        cin >> selection;

        selection = toupper(selection);

        // while the selection is invalid
        while (selection != 'A' && selection != 'B' && selection != 'C' && selection != 'D' && selection != 'Q') {
            // ask the user to reenter
            cout << "Choice was must be 'A', 'B', 'C', 'D', or 'Q'" << endl;
            cout << "Please reenter: ";
            cin >> selection;
            cout << endl;
            selection = toupper(selection);
        }

        switch (selection)
        {
        case 'A':
            // add two numbers provided by the user
            cout << "Please enter first decimal number: ";
            cin >> firstnum;
            cout << "Please enter second decimal number: ";
            cin >> secondnum;            
            cout << firstnum << " + " << secondnum << " = " << add(firstnum, secondnum) << endl;

            break;
        case 'B':
            // Subtract two numbers provided by the user
            cout << "Please enter first decimal number: ";
            cin >> firstnum;
            cout << "Please enter second decimal number: ";
            cin >> secondnum;
            cout << firstnum << " - " << secondnum << " = " << subtract(firstnum, secondnum) << endl;

            break;

        case 'C':
            // Multiply two numbers provided by the user
            cout << "Please enter first decimal number: ";
            cin >> firstnum;
            cout << "Please enter second decimal number: ";
            cin >> secondnum;
            
            multiply(firstnum, secondnum);
            

            break;

        case 'D':
            // Divde two numbers provided by the user
            cout << "Please enter first decimal number: ";
            cin >> firstnum;
            cout << "Please enter second decimal number: ";
            cin >> secondnum;

            divide(firstnum, secondnum);

            break;

        case 'Q':
            // Quit function
            cout << "Thank you for using this application. Good-bye!" << endl;
            

            break;

        default:
            cout << "You have a wrong selection, please try again! ";

            break;

        }
    } while (selection != 'Q');

    return 0;
}

void menu()
{
    cout << endl;
    cout << " A. Add two decimal numbers" << endl;
    cout << " B. Subtract two decimal numbers" << endl;
    cout << " C. Multiply two decimal numbers" << endl;
    cout << " D. Divide two decimal numbers" << endl;
    cout << " Q. Quit" << endl << endl;

    return;
}
float add(float firstnum, float secondnum)
{
    float sum = firstnum + secondnum;

    return sum;
}

float subtract(float firstnum, float secondnum)
{
    float sum = firstnum - secondnum;

    return sum;
}

void multiply(float& num1, float& num2)
{
    
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}

void divide(float& num1, float& num2)
{
    cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
}



