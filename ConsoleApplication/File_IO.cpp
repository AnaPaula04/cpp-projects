////********************************************************
// Programmer's name:  ANA MCCULLAGH
// Course Number:  CIS142
// Date:  September 30, 2022
// Assignment:  Lab 2 
// Description:  File I/O
// Files: FileI/O.cpp
// ******************************************************** 

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//decalre all variables
	int num1, num2, num3, num4, num5, num6;
	
	int sum;
	float average;

	ifstream inFile;
	ofstream outFile;

	//open files
	inFile.open("Numbers.txt");
	outFile.open("Result.txt");

	//read data from number.txt 
	inFile >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    //calculate sum and average
	sum = num1 + num2 + num3 + num4 + num5 + num6; 
	average = float(sum) / 6.0;
	
	outFile << "The six numbers : " << num1 << ' ' << num2 << ' ' << num3 << ' ' << num4 << ' ' << num5 << ' ' << num6 << '\n';
	outFile << "Sum of Six numbers : " << sum <<'\n';
	outFile << "The average of six numbers : " << setw(5) << fixed << setprecision(2) << average;

	//close both files
	inFile.close();
	outFile.close();
		
	return 0;
}
