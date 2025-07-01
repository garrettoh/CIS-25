#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item{
	public: 
		string name;
		int quantity;

		void display (){
		cout << "Item: " << name << "Quantity: " << quantity << "\n";
	}

	
};

void searchItem(const vector<Item>& inventory, string searchName){
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
	const int size = 5;
	vector<Item> inventory[size];

	for (int i = 0; i < size; i++){
		cout << "Enter the name for your item " << (i + 1) << ": ";
		cin >> inventory[i].name;
	}

}
