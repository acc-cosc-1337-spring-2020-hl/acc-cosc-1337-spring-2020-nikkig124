#include<string>
#include<iostream>
#include "for_ranged.h"

using std::string;

int main() 
{
	string str = "Hello";
	loop_string_by_index(str);

	loop_string_w_auto(str);
	return 0;
}