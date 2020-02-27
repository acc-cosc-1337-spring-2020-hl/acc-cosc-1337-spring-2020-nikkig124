#include "bank_account.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
	BankAccount account(10);

	int balance = account.get_balance();


	cout << "balance: " << balance << "\n";

	try {
		account.withdraw(15);
	}
	catch (InvalidAmountException ex) {
		std::cout << ex.get_message();
	}

	vector<BankAccount> accounts{ BankAccount(100), BankAccount(600), BankAccount(500), BankAccount(350) };
	cout << "\n";
	for (auto act : accounts) {
		cout << act.get_balance() << "\n";
	}

	return 0;
}