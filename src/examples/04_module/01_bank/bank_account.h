//bank_account.h
#include <string>
using std::string;

class BankAccount
{
public:
	BankAccount(int b) : balance{b} {};
	int get_balance() const { return balance; }
	void deposit(int amount);
	void withdraw(int amount);
	

private:
	int balance{ 0 };
};

class InvalidAmountException
{
public: 
	InvalidAmountException(std::string msg) : message{ msg } {}
	std::string get_message() const { return message; }
private: 
	std::string message;

};