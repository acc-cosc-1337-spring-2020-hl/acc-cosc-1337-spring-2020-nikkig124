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
	display_board();

}

void  TicTacToe::mark_board(int position){
    if (player == ""){
        throw XOException("Must start the game first");
    } else if (position < 1 || position > 9) {
        throw XOException("entry must be 1 - 9");
	}
	else {
		pegs[position - 1] = player;
		set_next_player();
	}

   

}

bool TicTacToe::game_over()
{
	if (check_diagonal_win() ||
		check_column_win() ||
		check_row_win() || check_board_full()) {
		return true;
	}
	
	return false;
}

void TicTacToe::display_board() const
{
	cout << "\n";

	for (std::size_t i = 0; i < 9; i += 3) {
		cout << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << "\n";
	}
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
	if (player == "X") {
		last_player = "O";
	}
	else {
		last_player = "X";
	}

	for (int i = 0; i < 3; i++) {
		if (last_player == pegs[i] && last_player == pegs[i + 3] && last_player == pegs[i + 6]) {
			set_winner();
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	string last_player;
	if (player == "X") {
		last_player = "O";
	}
	else {
		last_player = "X";
	}

	for (int i = 0; i < 9; i += 3) {
		if (last_player == pegs[i] && last_player == pegs[i + 1] && last_player == pegs[i + 2]) {
			set_winner();
				return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	string last_player;
	if (player == "X") {
		last_player = "O";
	}
	else {
		last_player = "X";
	}
	//string middle_peg = pegs[4];
	//0,2,4,6,8
	//for (int i = 0; i < 9; i+=2) {
		
	if (pegs[0] == last_player && pegs[8] == last_player && pegs[4] == last_player) {
		set_winner();
		return true;
	}
	
	if (pegs[2] == last_player && pegs[6] == last_player && pegs[4] == last_player){
		set_winner();
		return true;
	}
	
	return false;
}

void TicTacToe::set_winner()
{ 
	
	if (player == "X") {
		winner = "O";
	}
	else if (player == "0"){
		winner = "X";
	}
}


