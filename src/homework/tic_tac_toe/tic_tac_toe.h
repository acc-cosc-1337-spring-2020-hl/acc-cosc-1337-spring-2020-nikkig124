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

};

class XOException{

public:
    XOException(string msg) : message{ msg } {}
    string get_message() const { return message; }
private:
    string message;

};