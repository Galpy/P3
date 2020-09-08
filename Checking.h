#ifndef CHECKING_H 
#define CHECKING_H
#include "BankAccount.h"
#include <iostream>
using namespace std;

class Checking : public BankAccount{
public: 
    Checking();
    Checking(int d, int c, double r);
    void update();
};
#endif