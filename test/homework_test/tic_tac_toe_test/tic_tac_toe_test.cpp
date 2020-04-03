#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test start game function") {
    TicTacToe game;

    REQUIRE(game.get_player() == "");

    REQUIRE_THROWS_AS(game.start_game("W"), XOException);

    game.start_game("O");

    REQUIRE(game.get_player() == "O");

    game.mark_board(6);

    REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test mark board function"){
    TicTacToe game;

    REQUIRE_THROWS_AS(game.mark_board(1), XOException);

    game.start_game("X");
    REQUIRE(game.get_player() == "X");

    REQUIRE_THROWS_AS(game.mark_board(10), XOException);

    game.mark_board(3);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(1);

    
}


TEST_CASE("Check 1 to 9 diagional win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(1);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X

	REQUIRE(game.game_over() == true);
}
TEST_CASE("Check 3 to 7 diagional win") {
	TicTacToe game;

	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Check first column win") {
		TicTacToe game;

		game.start_game("X");
		//X O O
		//X X
		//X O
		game.mark_board(1);//X
		REQUIRE(game.game_over() == false);
		game.mark_board(2);//O
		REQUIRE(game.game_over() == false);
		game.mark_board(4);//X
		REQUIRE(game.game_over() == false);
		game.mark_board(3);//O
		REQUIRE(game.game_over() == false);
		game.mark_board(7);//X

		REQUIRE(game.game_over() == true);
}
TEST_CASE("Check secind column win") {
	TicTacToe game;

	game.start_game("X");
	//O X O
	//X X
	//X O
	game.mark_board(2);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Check third column win") {
	TicTacToe game;

	game.start_game("X");
	//O X O
	//X X
	//X O
	game.mark_board(3);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Check first row win") {
	TicTacToe game;

	game.start_game("X");
	//X X X
	//X O O
	//O O X
	game.mark_board(1); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(2); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Check second row win") {
	TicTacToe game;

	game.start_game("X");
	//X X X
	//X O O
	//O O X
	game.mark_board(4); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(1); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(6); //X

	REQUIRE(game.game_over() == true);
}

TEST_CASE("Check third row win") {
	TicTacToe game;

	game.start_game("X");
	//X X X
	//X O O
	//O O X
	game.mark_board(7); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(5); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(8); //X
	REQUIRE(game.game_over() == false);
	game.mark_board(3); //O
	REQUIRE(game.game_over() == false);
	game.mark_board(9); //X

	REQUIRE(game.game_over() == true);
}




