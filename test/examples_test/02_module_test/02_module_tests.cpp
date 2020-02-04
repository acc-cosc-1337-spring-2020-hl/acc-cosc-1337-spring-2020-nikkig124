#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function") {
	REQUIRE(is_even(10) == true);
	REQUIRE(is_even(15) == false);
}

TEST_CASE("Test generation") {
	REQUIRE(get_generation(1991) == "Millenial");
	REQUIRE(get_generation(1957) == "Boomer");
	
}
