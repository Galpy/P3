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
	~BankAccount();
private:
	double* balance;
	double* interestRate;
	static int count;
	double fraction(double precent);
};

class Checking : public BankAccount{
public: 
	void update() {
		cout << "update() called in checking" << endl;
		if (balance > 1000) {
			balance = balance * *interestRate;
		}
	}
	
};
class Savings : public BankAccount {
public: 
	void update() {
		cout << "update() called in savings" << endl;
		balance *= interestRate;
	}
};
#endif
