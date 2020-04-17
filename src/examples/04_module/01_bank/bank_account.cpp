#include "bank_account.h"
#include <iostream>


int BankAccount::get_balance() const
{
	return balance;
}


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

	if (amount >= min_balance_to_open) {
		deposit(amount);
	}
	else {
		throw InvalidAmountException("Opening Deposit must be at least $25");
	}
}

double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
    std::cout << "\nBalance is: " << b.balance<<"\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
    out << "\nBalance is: " << b.balance << "\n";

    return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
    int amount;
    std::cout << "Enter amount to deposit: ";
    in >> amount;
    b.deposit(amount);

    return in;
}
