#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string;

int main() 
{
	int choice = 0;
	//TicTacToeManager game_manager;
	TicTacToeManager game_manager;
	TicTacToe3 game3;
	TicTacToe4 game4;
	vector<reference_wrapper<TicTacToe>> main_games{ game3, game4 };
    do {
		//TicTacToe game;
		TicTacToe3 game3;
		TicTacToe4 game4;
		vector<reference_wrapper<TicTacToe>> main_games{ game3, game4 };
		string x_prompt = "X's TURN \n";
		string o_prompt = "Os TURN\n";
		string first_player;
		int size;
		cout << "enter 4 for 4x4 game or any other key for default 3x3 game \n";
		cin >> size;
		if (size == 4) {

			game_manager.games.push_back(main_games.at(1));
		}
		else { 
			TicTacToe3 game3;
			//cout << game;
			//game_manager.games.push_back(game3);
			game_manager.games.push_back(main_games.at(0));
		}
	
		reference_wrapper<TicTacToe> gameref = game_manager.games.back();


		bool first_player_success = false;
		while(!first_player_success){
			try {
				cout<< "Enter X or O to choose the first player \n";
				cin >> first_player;
				gameref.get().start_game(first_player);
				first_player_success = true;
			}catch (XOException &ex){
				cout << ex.get_message() << "\n";
				cout << "try again \n";
			}
		}

		while (!gameref.get().game_over()) {
			
			if (gameref.get().get_player() == "X") {
				cout << x_prompt;
			}
			else {
				cout << o_prompt;
			}
			bool mark_board_success = false;

			while (!mark_board_success) {

				try {
					cin >> gameref.get();
					mark_board_success = true;

				}
				catch (XOException &ex) {
					cout << ex.get_message() << "\n";
					cout << "try again \n";
				}

				cout << gameref.get();
				
				if (gameref.get().game_over()) {
					cout << "winner :" << gameref.get().get_winner()<<"\n";
				}
			}
		}
		game_manager.save_game(gameref.get());
		cout << game_manager;
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