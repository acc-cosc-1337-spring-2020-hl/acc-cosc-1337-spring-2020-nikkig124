#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <vector>

using std::make_unique;
using std::unique_ptr;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test get balance") {
	//BankAccount account(150);
	unique_ptr<BankAccount> s = make_unique<CheckingAccount>(150);
	REQUIRE(s->get_balance() == 150);
}

TEST_CASE("test deposit") {
	unique_ptr<BankAccount> s = make_unique<CheckingAccount>(150);
	REQUIRE(s->get_balance() == 150);

	s->deposit(50);

	REQUIRE(s->get_balance() == 200);

	
	//REQUIRE(account.get_balance() == 200);
	REQUIRE_THROWS_AS(s->deposit(-50), InvalidAmountException);

}

TEST_CASE("test withdraw") {
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(150);
	REQUIRE(s->get_balance() == 150);

	s->withdraw(50);

	REQUIRE(s->get_balance() == 100);

	REQUIRE_THROWS_AS(s->withdraw(200), InvalidAmountException);

	REQUIRE_THROWS_AS(s->withdraw(-200), InvalidAmountException);

}

TEST_CASE("test open account") {
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(0);

	REQUIRE(s->get_balance() == 0);

	REQUIRE_THROWS_AS(s->open(15), InvalidAmountException);

	s->open(150);

	REQUIRE(s->get_balance() == 150);
}

TEST_CASE("test open on account that is open") {
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(150);

	REQUIRE(s->get_balance() == 100);

	REQUIRE_THROWS_AS(s->open(150), InvalidAmountException);


}

TEST_CASE("test rate") {
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(150);

	REQUIRE(s->get_rate() == 0.025);
}