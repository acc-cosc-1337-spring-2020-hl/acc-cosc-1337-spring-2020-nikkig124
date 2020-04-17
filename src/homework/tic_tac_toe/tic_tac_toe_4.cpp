#include "tic_tac_toe_4.h"
#include<iostream>

using std::cout;


/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

bool TicTacToe4::check_column_win()
{
	string last_player;

	for (int i = 0; i < 4; i++) {
		if (player == pegs[i] && player == pegs[i + 4] && player == pegs[i + 8] && player == pegs[i + 12]) {
			return true;
		}
	}
	return false;
}

bool TicTacToe4::check_row_win()
{

	for (int i = 0; i < 16; i += 4) {
		if (player == pegs[i] && player == pegs[i + 1] && player == pegs[i + 2] && player == pegs[i + 3]) {
			return true;
		}
	}
	return false;
}

bool TicTacToe4::check_diagonal_win()
{
	//0123
	//4567
	//8901
	//2345
	if (pegs[0] == player && pegs[5] == player && pegs[10]== player && player == pegs[15]) {
		return true;
	}

	if (pegs[3] == player && pegs[6] == player && pegs[9] == player && player == pegs[12]) {
		return true;
	}

	return false;
}

std::ostream & operator<<(std::ostream & out, TicTacToe4 & game)
{
	out << "\n";
	for (int i = 0; i < game.pegs.size(); i += 4) {
		out << game.pegs[i] << " | " << game.pegs[i + 1] << " | " << game.pegs[i + 2] << " | " << game.pegs[i + 3] << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe4 & game)
{
	int board_selection;

	cout << "Mark the board using the keypad \n";
	in >> board_selection;
	game.mark_board(board_selection);
	return in;
}
