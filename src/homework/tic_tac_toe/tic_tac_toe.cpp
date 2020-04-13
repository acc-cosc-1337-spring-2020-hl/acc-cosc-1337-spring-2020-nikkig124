#include "tic_tac_toe.h"
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
    } else if (position < 1 || position > 9) {
        throw XOException("entry must be 1 - 9");
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
	string last_player;

	for (int i = 0; i < 3; i++) {
		if (player == pegs[i] && player == pegs[i + 3] && player == pegs[i + 6]) {
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{

	for (int i = 0; i < 9; i += 3) {
		if (player == pegs[i] && player == pegs[i + 1] && player == pegs[i + 2]) {
				return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{

	
		
	if (pegs[0] == player && pegs[8] == player && pegs[4] == player) {
		return true;
	}
	
	if (pegs[2] == player && pegs[6] == player && pegs[4] == player){
		return true;
	}
	
	return false;
}

void TicTacToe::set_winner()
{ 
	winner = player;
}

std::ostream & operator<<(std::ostream & out, TicTacToe & game)
{
	out << "\n";

	for (std::size_t i = 0; i < 9; i += 3) {
		out << game.pegs[i] << " | " << game.pegs[i + 1] << " | " << game.pegs[i + 2] << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & game)
{
	int board_selection;
	cout << "Mark the board using 1-9 \n";
	in >> board_selection;
	game.mark_board(board_selection);
	return in;
}
