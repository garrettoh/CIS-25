#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item9{
	public: 
		string name;
		int quantity;

		void display (){
		cout << " Item: " << name << " Quantity: " << quantity << " \n";
	}

	
};

void searchItem(const vector<Item9>& inventory, string searchName){
	bool found = false;
	for (int i = 0; i < inventory.size(); i++){
		if(inventory[i].name == searchName){
			cout << "Found: " << inventory[i].name << " - Quantity: " << inventory[i].quantity << "\n";
			found = true;
			break;
		}
	}
	if (!found){
		cout << "Item not found in inventory. \n";
	}
}


void runAssignment9(){
	vector<Item9> inventory;
	int numItems;

	cout << "How many Items would you like to add? \n";
	cin >> numItems;
	cin.ignore();


	for (int i = 0; i < numItems; i++){
		Item9 temp;
		cout << "Enter the name of the item: " << (i + 1) << ": ";
		getline(cin,temp.name);

		cout << "Enter quantity of " << temp.name << ": ";
		cin >> temp.quantity;
		cin.ignore();

		inventory.push_back(temp);
	}


	string searchName; 
	cout << "Enter the name of the item to search: ";
	getline(cin, searchName);

	searchItem(inventory, searchName);


	char YesorNo;
	cout << "Would you like to see the display of your items? (y/n)";
	cin >> YesorNo;

	if(YesorNo == 'y'){
		cout << "\n Your inv: \n";
		for (int i = 0; i < inventory.size(); i++){
			inventory[i].display();
		}
	} else {
		cout << "GOODBYE!!! ";
	}
}
