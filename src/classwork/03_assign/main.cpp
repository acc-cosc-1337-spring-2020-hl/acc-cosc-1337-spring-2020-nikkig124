#include "loops.h"

//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;

	do {
		int num;

		cout << "enter a number" << "\n";

		cin >> num;

		int fact = calculate_factorial(num);

		cout <<"factorial is: " << fact << "\n";

		cout << "press 1 to continue, 0 to quit: ";
		cin >> choice;

	} while (choice == 1);


	return 0;
}