#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test grade point function") {
    REQUIRE(get_grade_points("A") == 4);
    REQUIRE(get_grade_points("B") == 3);
    REQUIRE(get_grade_points("C") == 2);
    REQUIRE(get_grade_points("D") == 1);
}

TEST_CASE("Test GPA function") {
    REQUIRE(calculate_gpa(3, 3) == 1);
    REQUIRE(calculate_gpa(4, 4) == 1);

}
