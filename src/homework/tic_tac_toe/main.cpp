#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
    TicTacToe game;
    string x_prompt = "X's TURN \n";
    string o_prompt = "Os TURN\n";
    string first_player;
    int choice = 0;



    bool first_player_success = false;
    while(!first_player_success){
        try {
            cout<< "Enter X or O to choose the first player \n";
            cin >> first_player;
            game.start_game(first_player);
            first_player_success = true;
        }catch (XOException &ex){
            cout << ex.get_message() << "\n";
            cout << "try again \n";
        }
    }

	//implemetn game over and display board
    do {
        int board_selection=0;

        if(game.get_player()=="X"){
            cout << x_prompt;
        }else {
            cout<< o_prompt;
        }

        bool mark_board_success = false;

        while (!mark_board_success){

            try {
                cout << "Mark the board using 1-9 \n";
                cin >> board_selection;
                game.mark_board(board_selection);
                mark_board_success = true;
				game.display_board();

            } catch (XOException &ex) {
                cout << ex.get_message() << "\n";
                cout << "try again \n";
            }
        }
        cout << "\n";
        cout << "Enter 0 to continue the game \n";
        cin >> choice;
        cout << "\n";

    } while( choice == 0 );

	return 0;
}