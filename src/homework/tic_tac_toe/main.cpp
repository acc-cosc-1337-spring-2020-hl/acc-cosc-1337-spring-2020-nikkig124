#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string;
using std::make_unique;

int main() 
{
	int choice = 0;
	//TicTacToeManager game_manager;
	TicTacToeManager game_manager;
    do {
		//TicTacToe game;
		//TicTacToe3 game3;
		//TicTacToe4 game4;

		unique_ptr<TicTacToe> game;
	
		string x_prompt = "X's TURN \n";
		string o_prompt = "Os TURN\n";
		string first_player;
		int size;
		cout << "enter 4 for 4x4 game or any other key for default 3x3 game \n";
		cin >> size;
		int index = 0;
		if (size == 4) {
			
			unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
			
		}
		else { 
			unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
		}



		bool first_player_success = false;
		while(!first_player_success){
			try {
				cout<< "Enter X or O to choose the first player \n";
				cin >> first_player;
				game->start_game(first_player);
				first_player_success = true;
			}catch (XOException &ex){
				cout << ex.get_message() << "\n";
				cout << "try again \n";
			}
		}

		while (!game->game_over()) {
			
			if (game->get_player() == "X") {
				cout << x_prompt;
			}
			else {
				cout << o_prompt;
			}
			bool mark_board_success = false;

			while (!mark_board_success) {

				try {
					cin >> *game;
					mark_board_success = true;

				}
				catch (XOException &ex) {
					cout << ex.get_message() << "\n";
					cout << "try again \n";
				}

				cout << *game;
				
				if (game->game_over()) {
					cout << "winner :" << game->get_winner()<<"\n";
				}
			}
		}
		game_manager.save_game(game);
		cout << game_manager;
		*game;
        cout << "\n";
        cout << "Enter 0 to continue the game \n";
        cin >> choice;
		if (choice != 0) {
			cout << game_manager;
		}
        cout << "\n";

    } while( choice == 0 );

	return 0;
}