#include "Savings.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

Savings::Savings(){
	cout << "Default Savings Constructor called" << endl;
}
Savings::Savings(int d, int c, double rate){
	cout << "Overloaded Savings Constructor called" << endl;
}
void Savings::update(){
		cout << "update() called in savings" << endl;
		double temp_balance = getBalance();
		temp_balance *= getRate();
		set(temp_balance, getRate());
}