#include "bank_account.h"
#include <iostream>

using std::cout;

int main()
{
	BankAccount account(10);

	int balance = account.get_balance();

	cout << "balance: " << balance;
	return 0;
}