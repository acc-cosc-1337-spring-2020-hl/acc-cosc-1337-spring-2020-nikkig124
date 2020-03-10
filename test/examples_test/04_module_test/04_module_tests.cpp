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

TEST_CASE("test open account") {
	BankAccount newAccount;

	REQUIRE(newAccount.get_balance() == 0);

	REQUIRE_THROWS_AS(newAccount.open(15), InvalidAmountException);

	newAccount.open(150);

	REQUIRE(newAccount.get_balance() == 150);
}

TEST_CASE("test open on account that is open") {
	BankAccount account(100);

	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.open(150), InvalidAmountException);


}

TEST_CASE("test rate") {
	BankAccount account(100);

	REQUIRE(account.get_rate() == 0.025);
}