////********************************************************
// Programmers name:  ANA MCCULLAGH
// Course Number:  CIS142
// Date:  October 1, 2022
// Assignment:  Lab 5
// Description:  Using do-while loop to develop a C++ program
// Files: LoopSwitch.cpp
// ********************************************************
//
//
//  LoopSwitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main()
{
    char selection;
    int area;
    int base;
    int height;
    int length;
    int width;
    int side;
    float radius;

    do
    {
        cout << " A. Area of a Triangle" << endl;
        cout << " B. Area of a Retangle" << endl;
        cout << " C. Area of a Square" << endl;
        cout << " D. Area of a Circle" << endl;
        cout << " Q. Quit" << endl;

        cout << " Please enter your selection: ";
        cin >> selection;

        selection = toupper(selection);

        switch (selection)
        {
        case 'A':
            cout << "Please enter the base of a Triangle: ";
            cin >> base;
            cout << "Please enter the height of a Triangle: ";
            cin >> height;
            cout << "Area of Triagle is " << .5 * base * height << endl;

            break;
        case 'B':
            cout << "Please enter the length of a Rectangle: ";
            cin >> length;
            cout << "Please enter the width of a Rectangle: ";
            cin >> width;
            cout << "Area of Rectangle is " << length * width << endl;
            break;

        case 'C':
            cout << "Please enter the side of a Square: ";
            cin >> side;
            cout << "Area of Square is " << side * side << endl;

            break;

        case 'D':
            cout << "Please enter the radius of a Circle: ";
            cin >> radius;
            cout << "Area of  Circle is " << pow(radius, 2) * 3.141592 << endl;

            break;

        case 'Q':
            cout << "Thank you for using the program.";

            break;

        default:
            cout << "You have a wrong selection, please try again! ";

            break;
        }
    } while (selection != 'Q');

    return 0;
}
