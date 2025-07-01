#include <fstream>
#include <iostream>
#include <string>

using namespace std;


class BankAccount {

	protected:
		double balance; 
		
	public:
		BankAccount(){
		balance = 0.0;

	}

	void deposit(double amount){
		balance += amount;
		saveTransaction("Deposit", amount);
	}



	void saveTransaction(string type, double amount){
		ofstream file("transactions.txt", ios::app);
		if (file.is_open()){
			file << type << ": $" << amount << "\n";
			file.close();
		}
	}
	void displayBalance(){
		cout << "Current Balance: $" << balance << "\n";
	}
	void makePurchase(string item, double cost){
		if (cost > balance){
			cout << "Insufficient funds for " << item << "\n";

		} else { 
			balance -= cost;
			saveTransaction("Purchase -" + item, cost);
		}
	}
};


	void runAssignment8(){
		BankAccount account1;
		account1.deposit(100.00);
		account1.makePurchase("Coffee", 4.50);
		account1.makePurchase("Book", 25.00);
		account1.displayBalance();
		
		
	
	
}
