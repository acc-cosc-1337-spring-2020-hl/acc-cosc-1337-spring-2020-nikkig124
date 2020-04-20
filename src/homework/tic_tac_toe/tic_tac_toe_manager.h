//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
#include <memory>
using std::vector;
using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
	void save_game(unique_ptr<TicTacToe>& b);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager &manager);
	vector<unique_ptr<TicTacToe>> games;
private:
	
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};
#endif // !TIC_TAC_TOE_MANAGER_H

