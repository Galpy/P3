a.out: BankAccount.o main.o Savings.o Checking.o
	g++ -g BankAccount.o main.o Savings.o Checking.o

BankAccount.o: BankAccount.h BankAccount.cpp
	g++ -c -g BankAccount.cpp

Checking.o: Checking.h Checking.cpp
	g++ -c -g Checking.cpp

Savings.o: Savings.h Savings.cpp
	g++ -g -c Savings.cpp

main.o: BankAccount.h Checking.h Savings.h main.cpp
	g++ -g -c main.cpp

clean:
	rm *.o a.out
