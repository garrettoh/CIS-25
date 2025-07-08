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
		account1.deposit(3000.32);
		account1.makePurchase("Coffee", 4.50);
		account1.makePurchase("Book", 25.00);
		cout << "You purchased a Book and coffee for school you need to buy one more item what would you like to buy? \n";
		account1.displayBalance();
		string itemName1;
		double itemCost1;
		cout << "You looked around and couldn't find anything whats the name of the item you would like to create: ";
		cin >> itemName1;
		cout << "You looked at " << itemName1 << " but you couldn't find a price how much do you want to pay the weird looking clerk? ";
		cin >> itemCost1;
		
		account1.makePurchase(itemName1, itemCost1);

		account1.displayBalance();
		
		
	
	
}
