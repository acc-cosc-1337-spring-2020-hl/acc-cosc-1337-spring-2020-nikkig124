#include "for_ranged.h"

using std::vector;
using std::cout;

/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses an indexed for loop to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/

void loop_string_by_index(const string & str)
{
	for (int i = 0; i < str.length(); ++i) {
		cout << str[i] << "\n";
	}
}



/*
Write code for loop_string_w_index that accepts a string parameter.
The function uses a for ranged loop using auto to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/
void loop_string_w_auto(const string & str2)
{
	for (auto i : str2) {
		cout << i << "\n";
	}
}



