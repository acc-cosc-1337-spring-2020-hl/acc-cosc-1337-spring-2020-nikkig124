//Write the include statement for decisions.h here
#include "decision.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>

//Write namespace using statements for cout and cin
using std::cin;
using std::cout;

int main() 
{
	//create a double variable named hours
	int hours;
	//create a double variable named hourly_rate
	int hourly_rate;

	//Prompt user for keyboard input for hours and hourly_rate
	cout << "Enter hourly rate: ";
	cin >> hourly_rate;
	//save the input to variables hours and hourly_rate
	cout << "Enter hours worked: ";
	cin >> hours;

	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable
	double gross_salary = gross_pay(hours, hourly_rate);
	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   
	cout << "Gross Pay: " << gross_salary;

	return 0;
}

