#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify gross pay function") {
	REQUIRE(gross_pay(10, 20) == 200);
    REQUIRE(gross_pay(100, 40) == 4000);
    REQUIRE(gross_pay(75, 30) == 2250);
}
