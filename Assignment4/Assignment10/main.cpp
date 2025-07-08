#include "Item.h"
#include <string>

int main(){
	Item item1("Screwdriver", 5);
	Item item2;
	cout << "You start with 5 screwdrivers and some weird item that doesn't work?\n";
	item1.display();
	item2.display();
	

	cout << "You're now going to choose 2 new items!";
	Item item3 = Item::createFromInput();
	Item item4 = Item::createFromInput();

	cout << "New Items!\n";
	item3.display();
	item4.display();
	return 0;
}
