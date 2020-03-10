//bank_account.h
#include <string>
#include <iostream>
using std::string;

class BankAccount
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{b} {};
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b);
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b);
	friend std::istream& operator>>(std::istream& in, BankAccount& b);

private:
	int balance{ 0 };
	const int min_open_balance = 25;
	static double rate;
	//get from API in the real world
	static double init_rate() { return .025; }
};

class InvalidAmountException
{
public: 
	InvalidAmountException(std::string msg) : message{ msg } {}
	std::string get_message() const { return message; }
private: 
	std::string message;

};