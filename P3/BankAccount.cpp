#include <iostream>
#include <cstdlib>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount() {
	*balance = 0;
	*interestRate = 0.0;
	cout << "Constructor called" << endl;
}

BankAccount::BankAccount(int dollars, int cents, double rate) {
	if ((dollars < 0) || (cents < 0) || (rate < 0))
	{
		cout << "Illegal values for mooney or interest rate.\n";
		exit(1);
	}
	*balance = dollars + 0.01 * cents;
	*interestRate = rate;
	cout << "Constructor called" << endl;
}

void BankAccount::set(int dollars, int cents, double rate)
{
	if((dollars < 0) || (cents < 0) || (rate < 0))
	{
		cout << "Illegal values for money or interest rate.\n";
		exit(1);
	}
	*balance = dollars + 0.01 * cents;
	*interestRate = rate;
}

void BankAccount::set(int dollars, double rate)
{
	if ((dollars < 0) || (rate < 0))
	{
		cout << "Illegal values for money or interest rate.\n";
		exit(1);
	}
	*balance = dollars;
	*interestRate = rate;
}

void BankAccount::deposit(double amount)
{
	*balance += amount;
}

void BankAccount::withdraw(double amount)
{
	*balance -= amount;
}

static int BankAccount::getAcount() {
	return count++;
}

double BankAccount::fraction(double percentValue)
{
	return (percentValue/100.0);
}

const double BankAccount::getBalance()
{
	return *balance;
}

const double BankAccount::getRate()
{
	return *interestRate;
}

void BankAccount::output(ostream& outs)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << "Account balance $" << *balance << endl;
	outs << "Interest Rate " << *interestRate << "%" << endl;
}

BankAccount::~BankAccount() {
	cout << "Destructor called" << endl;
}
