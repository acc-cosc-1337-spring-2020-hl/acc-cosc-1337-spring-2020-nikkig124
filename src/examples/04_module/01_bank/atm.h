//atm.h
#include<vector>
#include<iostream>
#include "savings_account.h"
#include "checking_account.h"
#include "customer.h"

#ifndef ATM_H
#define ATM_H
#include<memory>


class ATM
{
public:
	ATM(Customer& c) : customer{ std::move(c) }
	{

	}
	friend std::ostream& operator<<(std::ostream& out, const ATM& a);

private:
	Customer customer;
};

#endif // !ATM_H