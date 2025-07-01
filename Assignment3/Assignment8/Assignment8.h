#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
class BankAccount {
	protected:
		double balance;
		double amount;
	public:

		string item;
		
		void purchase();
		void deposit(double amount);
		void balanceGetter();
		void balanceSetter();
		
};

void runAssignment8();
