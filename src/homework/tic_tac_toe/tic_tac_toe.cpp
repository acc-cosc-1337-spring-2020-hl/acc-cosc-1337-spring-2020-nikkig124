#include "tic_tac_toe.h"
#include <math.h>
#include <iostream>
using std::string;
using std::cout;

void TicTacToe::start_game(string first_player){
	
    if(first_player == "X"){
        player = "X";
    }
    else if (first_player == "O") {
        player ="O";
    }
    else{
        throw XOException("Entry must be X or O");
    }
	clear_board();
}

void  TicTacToe::mark_board(int position){
    if (player == ""){
        throw XOException("Must start the game first");
    } else if (position < 1 || position > pegs.size()) {
        throw XOException("entry must be on the board");
	}
	else {
		pegs[position - 1] = player;

		if (!game_over()) {
			set_next_player();
		}
		else if (!tie) {
			set_winner();
		}
	}
}

bool TicTacToe::game_over()
{
	if (check_diagonal_win() ||
		check_column_win() ||
		check_row_win()) {
		return true;
	}
	else if (check_board_full()) {
		tie = true;
		return true;
	}
	
	return false;
}

void TicTacToe::displayboard()
{
}

void TicTacToe::set_next_player() {
    if (player == "X"){
        player = "O";
    } else {
        player ="X";
    }
}

bool TicTacToe::check_board_full()
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i] == " ") return false;
	}

	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs) {
		peg = " ";
	}
	
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::set_winner()
{ 
	winner = player;
}

std::ostream & operator<<(std::ostream & out, TicTacToe & game)
{
	out << "\n";
	for (int i = 0; i < game.pegs.size(); i += 3) {
		
	out << game.pegs[i] << " | " << game.pegs[i + 1] << " | " << game.pegs[i + 2] << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & game)
{
	int board_selection;
	
	cout << "Mark the board using the keypad \n";
	in >> board_selection;
	game.mark_board(board_selection);
	return in;
}
