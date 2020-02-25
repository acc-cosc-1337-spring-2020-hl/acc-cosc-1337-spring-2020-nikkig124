//write include statements
#include "vectors.h"
#include <iostream>
#include <vector>
//write using statements
using std::cin;
using std::cout;
using std::vector;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main()
{
	vector<int> vec = { 8, 4, 20, 88, 66, 99 };

	int choice = 1;

	while (choice == 1 || choice == 2) {
		cout << "Press 1 for get Max from Vector, or Press 2 for Get Primes or press any other key to quit \n";
		cin >> choice;
		if (choice == 1) {
			int max = get_max_from_vector(vec);
			cout << "\n Max number from vector is : " << max + "\n";
		}
		else {
			int num;
			cout << "\n Enter a number \n";

			cin >> num;
			vector<int> primes = vector_of_primes(num);
			cout << "\n list of primes: " << num << "\n";

		}
	}


	return 0;
}