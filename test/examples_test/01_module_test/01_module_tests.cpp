#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Square Number Funct Test") {
	REQUIRE (square_number(0) == 0);
	REQUIRE(square_number(5) == 25);
	REQUIRE(square_number(-2) == 4);
	//REQUIRE(square_number(-2) == 8);
}

