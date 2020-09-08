#ifndef SAVINGS_H
#define SAVINGS_H
#include "BankAccount.h"
#include <iostream>
using namespace std;

class Savings : public BankAccount {
public: 
	Savings();
	Savings(int d, int c, double r);
	void update();
};
#endif