#include<iostream>
#include "do_while.h"
#include "while.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
	int choice;
	do {
		int num;

		cout << "enter a number" << "\n";

		cin >> num;
		
		cout << sum_of_squares(num) << "\n";

		cout << "press 1 to continue, 0 to quit: ";
		cin >> choice;
		
	} while (choice == 1);

	
}



//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/02_module/03_switch
folder.

*/

