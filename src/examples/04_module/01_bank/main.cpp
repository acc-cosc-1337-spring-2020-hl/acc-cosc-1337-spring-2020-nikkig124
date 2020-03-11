#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <iostream>
#include <vector>

using std::unique_ptr;
using std::vector;
using std::cout;
using std::reference_wrapper;
using std::make_unique;

int main()
{
	SavingsAccount s(200);
	CheckingAccount c(100);

	//get balance is virtual in the abstract class
	vector<reference_wrapper<BankAccount>> acts{ s,c };

	for (auto account_ref : acts) {
		cout << account_ref.get().get_balance() << "\n";
	}
}