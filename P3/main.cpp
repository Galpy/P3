#include <iostream>
#include "BankAccount.h"
using namespace std;

int main() {
	BankAccount *checking_acc = new Checking(500, 50, 1.5);
	checking_acc->update();
return 0;
}
