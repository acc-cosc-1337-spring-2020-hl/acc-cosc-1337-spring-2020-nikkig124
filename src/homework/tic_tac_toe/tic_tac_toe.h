#include "bank_account.h"
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <string>
#include<vector>
using std::string;

class TicTacToe {

public:
    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const{ return player;}

	bool game_over();

	string get_winner() { return winner; }

	friend std::ostream& operator<<(std::ostream & out, TicTacToe &game);
	friend std::istream& operator>>(std::istream & in, TicTacToe &game);

private:
    void set_next_player();

    string player = "";
	
	std::vector<string> pegs{ 9, " " };

	bool check_board_full();
	
	void clear_board();


	bool check_column_win();

	bool check_row_win();

	bool check_diagonal_win();

	void set_winner();
	
	string winner= "C";

	bool tie = false;
};

class XOException{

public:
    XOException(string msg) : message{ msg } {}
    string get_message() const { return message; }
private:
    string message;

};
#endif // TIC_TAC_TOE_H