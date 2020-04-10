//customer.cpp
#include "customer.h"
//#include<iostream>

std::ostream& operator<<(std::ostream& out, const Customer& c)
{
	for (auto& bank_account : c.accounts) {
		out << "balance: " << *bank_account << "\n";
	}
	return out;
}