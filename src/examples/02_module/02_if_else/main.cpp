//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	int year;

	cout << "enter a number: ";
	//assign the number to the value variable
	cin >> year;

	cout << get_generation(year);
	
	
	return 0;
}