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
using std::unique_ptr;

int main()
{

	//unique_ptr<BankAccount> s = make_unique<SavingsAccount>(200);
	//CheckingAccount* c(100);
	//unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);

	//vector<unique_ptr<BankAccount>> acts;//{ std::move(s), std::move(c) };
	//acts.push_back(std::move(s));
	//acts.push_back(std::move(c));
	
	//for (auto account_ref : acts) {
	
	//}

	//SavingsAccount s(200);
	//CheckingAccount c(100);

	//get balance is virtual in the abstract class
	//vector<reference_wrapper<BankAccount>> acts{ s,c };

	//for (auto account_ref : acts) {
	//	cout << account_ref.get().get_balance() << "\n";
	//}

	//referece for stack objects
	//pointer for heap objects

	/*	BankAccount* accont = new BankAccount(100);

	accont->get_balance();

	delete accont;
	*/




}