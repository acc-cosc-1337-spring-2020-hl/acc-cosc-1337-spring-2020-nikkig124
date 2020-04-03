//#ifndef TIC_TAC_TOE_H

#include <string>
#include<vector>
using std::string;

class TicTacToe {

public:
    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const{ return player;}

	bool game_over();
	void display_board() const;

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
};

class XOException{

public:
    XOException(string msg) : message{ msg } {}
    string get_message() const { return message; }
private:
    string message;

};