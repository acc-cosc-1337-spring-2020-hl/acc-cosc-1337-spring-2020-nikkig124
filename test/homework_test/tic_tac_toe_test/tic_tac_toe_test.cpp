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

    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test check game over function") {
	TicTacToe game;

	game.start_game("X");

	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(8);
	game.mark_board(7);
	game.mark_board(9);


	REQUIRE(game.game_over() == true);
}