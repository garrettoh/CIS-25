#include "Item.h"

Item::Item(){
	name = "Unknown";
	quantity = 0;
}

Item::Item(const string& itemName, int itemQuantity)
 : name(itemName), quantity(itemQuantity) {}
void Item::display() const{
	cout << "Item name: " << name << ", Quantity: " << quantity << "\n\n";
}

Item Item::createFromInput(){
	string inputName;
	int inputQuantity;

	cout << "Enter item name: ";
	getline(cin,inputName);
	cout << "\nEnter quantity: ";
	cin >> inputQuantity;

	cin.ignore();

	return Item(inputName,inputQuantity);
}

