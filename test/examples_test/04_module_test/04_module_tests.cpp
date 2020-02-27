#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get balance") {
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("test deposit") {
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	account.deposit(50);

	REQUIRE(account.get_balance() == 200);

	
	//REQUIRE(account.get_balance() == 200);
	REQUIRE_THROWS_AS(account.deposit(-50), InvalidAmountException);

}

TEST_CASE("test withdraw") {
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);

	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.withdraw(200), InvalidAmountException);

	REQUIRE_THROWS_AS(account.withdraw(-200), InvalidAmountException);

}


