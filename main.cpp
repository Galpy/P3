	#include <iostream>
	#include "BankAccount.h"
	#include "Checking.h"
	#include "Savings.h"
	using namespace std;

	int main() {
		BankAccount *checkArr[3];
		for (int i = 0; i < 3;i++){
			int dollars = (i*200) + 200;
			int cents = (i*20) + 10;
			double rate = 5.0;
			*checkArr[i] = Checking(dollars, cents, rate);
			//checkArr[i]->update();
			//checkArr[i]->output(cout);
		}
		BankAccount* savArr[3]; 
		for (int i = 0; i < 3; i++){
			int dollars = (i*200) + 200;
			int cents = 50 + (i*20);
			double rate = 3.0;
			//savArr[i] = new Savings(dollars, cents, rate);
			//savArr[i]->update();
			//savArr[i]->output(cout);
		}
		for (int i = 0; i < 3;i++){
			//delete checkArr[i];
		}
		for (int i = 0; i < 3; i++){
			//delete savArr[i];
		}
	return 0;	
	}
