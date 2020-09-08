#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
using namespace std;

class BankAccount
{
public:
	void set(int dollars, int cents, double rate);

	void set(int dollars, double rate);

	const double getBalance();

	const double getRate();

	void deposit(double);

	void withdraw(double);

	virtual void update() = 0;

	static int getAcount();

	void output(ostream& outs);

	BankAccount();
	BankAccount(int dollars, int cents, double rate);
	virtual ~BankAccount();
private:
	double* balance;
	double* interestRate;
	static int count;
	double fraction(double precent);
};

#endif