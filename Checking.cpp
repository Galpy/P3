#include "Checking.h"
#include "BankAccount.h"
#include <iostream>
using namespace std;

Checking::Checking(){
	cout << "Default Checking Constructor called" << endl;
}

Checking::Checking(int d, int c, double rate){
	cout << "Overloaded Checking Constructor called" << endl;
}
void Checking::update(){
        cout << "update() called in checking" << endl;
		double temp_balance = getBalance();
		if (temp_balance > 1000) {
			temp_balance = temp_balance * getRate();
		}	
		set(temp_balance, getRate());
}