#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Account{
	double balance;
	char name[25];
	typedef struct address
	{
		int houseNo;
		int streetNo;
		char area[25];
		char town[25];
		char city[25];
		char state[25];
		long int pin;
	}ADDRESS;
	public:
	void deposit(Amount);
	void withdrew();
	
};
	
