a.out: BankAccount.o main.o
	g++ BankAccount.o main.o

BankAccount.o: BankAccount.h BankAccount.cpp
	g++ -c BankAccount.cpp

main.o: BankAccount.h main.cpp
	g++ -c main.cpp

clean:
	rm *.o a.out
