//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cin;
using std::cout;
using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
    char progRunning;

    do {
        string dna;
        int choice;
        cout << "Enter 1 to get GC content, or 2 to get DNA Complement \n";
        cin >> choice;

        cout << "\n Enter DNA string, only A,T,G,C \n";
        cin >> dna;

        if (choice == 1) {
            double result = get_gc_content(dna);
            cout << "\n the GC content is: " << result << "\n";
        } else if (choice == 2) {
            string complement = get_dna_complement(dna);
            cout << "\n the complement is:" << complement << "\n";
        }
        cout << "\n Enter Y to try again \n";
        cin >> progRunning;
    }while (progRunning == 'Y' || progRunning == 'y');

	return 0;
}