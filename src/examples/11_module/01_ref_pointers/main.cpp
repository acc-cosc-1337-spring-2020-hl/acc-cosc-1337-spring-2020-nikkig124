#include "ref_pointers.h"
#include<iostream>

int main() 
{
	int r = 0, p = 0;

	int &r_ref = r;
	//address of r_ref is the same address of r
	std::cout << "address of r: " << &r << "\n";
	std::cout << "address of r_ref: " << &r_ref << "\n";
	std::cout << "address r_ref points to: " << &r_ref << "value ref :" << r_ref << "\n";

	int* p_ptr = &p;
	//pointer address is different that p
	std::cout << "address of p: " << &p << "\n";
	std::cout << "address of p_prt: " << &p_ptr<<"\n";
	std::cout << "address p_ptr points: " << p_ptr << "value points to " << *p_ptr << "\n";
	return 0;
}