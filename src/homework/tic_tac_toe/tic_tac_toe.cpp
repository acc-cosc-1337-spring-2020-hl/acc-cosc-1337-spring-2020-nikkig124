#include "tic_tac_toe.h"
#include <iostream>
using std::string;

void TicTacToe::start_game(string first_player){
	clear_board();
    if(first_player == "X"){
        player = "X";
    }
    else if (first_player == "O") {
        player ="O";
    }
    else{
        throw XOException("Entry must be X or O");
    }

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
	return check_board_full();
}

void TicTacToe::display_board() const
{
	for (int i = 1; i <= pegs.size(); i++) {
		if (i % 3) {
			std::cout << "\n";
		}

		std::cout << pegs[i - 1] << " | ";
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
