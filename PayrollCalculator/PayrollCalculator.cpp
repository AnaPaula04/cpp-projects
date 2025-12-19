// Programmer�s name:  ANA MCCULLAGH
// Course Number:  CIS142
// Date:  Fall/2022
// Description: Develop software for HR department to calculate employees weekly salary.
// Files: Enum - Structure - Array.cpp
// ********************************************************
// Enum - Structure - Array.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//declare struct array  
int main()
{
	enum Level {ENGINEER, MANAGER, DIRECTOR};
	    
	struct Employee
	{
		string name;
		string EmployeeID;
		Level poslevel;
		float hourlyRate;
		float workingHours;
		float weeklySalary;
		float overTimePay;
	};


	Employee empRecord[3]; 

	int index = 0;
	int level;
	char answer;

	//display message to user to enter name
	do
	{
		cout << "Please enter employee's name: " << endl;
        cin >>empRecord[index].name ;
		cout << "Please enter employee's ID: " << endl;
		cin >> empRecord[index].EmployeeID;
		cout << "Please enter employee's Level (0: ENGINEER, 1: MANAGER, 2: DIRECTOR) : " << endl;
	    cin >> level;
		empRecord[index].poslevel = Level(level);    
		cout << "Please enter employee's hourly rate: " << endl;
		cin >> empRecord[index].hourlyRate;

		cout << "Please enter employee's working hours: " << endl;
		cin >> empRecord[index].workingHours;

		empRecord[index].overTimePay = 0;

  //calculate weekly salery
		switch (empRecord[index].poslevel)
		{
		case ENGINEER:			
			
			if (empRecord[index].workingHours <= 40)
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * empRecord[index].workingHours;
			else {
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * (empRecord[index].workingHours - (empRecord[index].workingHours - 40));
				empRecord[index].overTimePay = empRecord[index].hourlyRate * (empRecord[index].workingHours - 40) * 1.15;
			}
						
			break;

		case MANAGER:
			if (empRecord[index].workingHours <= 40)
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * empRecord[index].workingHours;
			else {
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * (empRecord[index].workingHours - (empRecord[index].workingHours - 40));
				empRecord[index].overTimePay = empRecord[index].hourlyRate * (empRecord[index].workingHours - 40) * 1.20;
			}

			break;
		
		case DIRECTOR:
			empRecord[index].weeklySalary = empRecord[index].hourlyRate * empRecord[index].workingHours;
			if (empRecord[index].workingHours <= 40)
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * empRecord[index].workingHours;
			else {
				empRecord[index].weeklySalary = empRecord[index].hourlyRate * (empRecord[index].workingHours - (empRecord[index].workingHours - 40));
				empRecord[index].overTimePay = empRecord[index].hourlyRate * (empRecord[index].workingHours - 40) * 1.30;
			}

			break;
		}

		index++;
		cout << "Are you continued (Y/N)? ";
		cin >> answer;
		answer = toupper(answer);
	} while (answer != 'N');

	///display employee record
	cout << endl << setw(80) << setfill('*') << endl;
	cout << "\nEmployee Information:" << endl;

	for (int i = 0; i < index; i++)
	{
		cout << "\nEmployee Name: " << empRecord[i].name << endl;
		cout << "Employee ID " << empRecord[i].EmployeeID << endl;
		cout << "Employee Level: " << empRecord[i].poslevel << endl;
		cout << "Employee Weekly Pay: " << (empRecord[i].weeklySalary + empRecord[i].overTimePay)<< endl;
	
	}

	return 0;
}

