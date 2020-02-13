#include "loops.h"
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int calculate_factorial(int num)
{
	int total = 1;
	for (int i = num; i > 0; i--) {
		total *= i;	
	}
	return total;
}
