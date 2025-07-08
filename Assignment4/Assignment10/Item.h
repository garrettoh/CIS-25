#pragma once
#include <iostream>
#include <string>
using namespace std;
class Item {
	private:
		string name;
		int quantity;
	public:
		Item(); // default incase user doens't input any value
		Item(const string& itemName, int itemQuantity); // for when user inputs value
		void display() const;


		static Item createFromInput();

};
