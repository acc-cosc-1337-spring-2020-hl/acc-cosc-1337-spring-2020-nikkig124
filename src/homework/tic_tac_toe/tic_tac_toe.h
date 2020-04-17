
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <string>
#include<vector>
using std::string;

class TicTacToe {

public:
	explicit TicTacToe(int s) : pegs(s*s, " ") {}
    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const{ return player;}

	bool game_over();

	string get_winner() { return winner; }

	virtual void displayboard();

	friend std::ostream& operator<<(std::ostream & out, TicTacToe &game);
	friend std::istream& operator>>(std::istream & in, TicTacToe &game);
	
protected:
	std::vector<string> pegs;

	string player = "";

	virtual bool check_column_win();

	virtual bool check_row_win();

	virtual bool check_diagonal_win();

private:

    void set_next_player();

	bool check_board_full();
	
	void clear_board();

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