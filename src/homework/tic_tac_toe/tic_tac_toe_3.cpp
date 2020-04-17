#include "tic_tac_toe_3.h"
#include<iostream>
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/

bool TicTacToe3::check_column_win()
{
	string last_player;

	for (int i = 0; i < 3; i++) {
		if (player == pegs[i] && player == pegs[i + 3] && player == pegs[i + 6]) {
			return true;
		}
	}
	return false;
}

bool TicTacToe3::check_row_win()
{

	for (int i = 0; i < 9; i += 3) {
		if (player == pegs[i] && player == pegs[i + 1] && player == pegs[i + 2]) {
			return true;
		}
	}
	return false;
}

bool TicTacToe3::check_diagonal_win()
{
	if (pegs[0] == player && pegs[8] == player && pegs[4] == player) {
		return true;
	}

	if (pegs[2] == player && pegs[6] == player && pegs[4] == player) {
		return true;
	}

	return false;
}

std::ostream & operator<<(std::ostream & out, TicTacToe3 & game)
{
	out << "\n";
	for (int i = 0; i < 9; i += 3) {
		out << game.pegs[i] << " | " << game.pegs[i + 1] << " | " << game.pegs[i + 2] << "\n ";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe3 & game)
{
	int board_selection;

	std::cout << "Mark the board using the keypad \n";
	in >> board_selection;
	game.mark_board(board_selection);
	return in;
}