#include "tic_tac_toe.h"

using std::string;

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
}

void  TicTacToe::mark_board(int position){
    if (player == ""){
        throw XOException("Must start the game first");
    } else if (position < 1 || position > 9) {
        throw XOException("entry must be 1 - 9");
    }

   set_next_player();

}

void TicTacToe::set_next_player() {
    if (player == "X"){
        player = "O";
    } else {
        player ="X";
    }
}