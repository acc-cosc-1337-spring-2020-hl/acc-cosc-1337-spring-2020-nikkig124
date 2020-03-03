#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{	
	if (amount > 0) {
		balance += amount;
	}
	else {
		throw InvalidAmountException("amount must be greater than 0");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0) {
		throw InvalidAmountException("amount must be greater than 0");
	}
	else if (amount > balance ) {
		throw InvalidAmountException("Insufficient Funds");
	}
	else {
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (balance > 0) {
		throw InvalidAmountException("Account already open, use deposit");
	}

	if (amount >= min_open_balance) {
		deposit(amount);
	}
	else {
		throw InvalidAmountException("Opening Deposit must be at least $25");
	}
}