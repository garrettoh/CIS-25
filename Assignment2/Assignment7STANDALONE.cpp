#include <iostream>
#include <string>
using namespace std;
class Item{
protected:
	string name;
	int quantity;
public:
	//Constructor using an initializer list 
	Item(string n, int q) : name(n), quantity(q) {}

	virtual void display() = 0;
	virtual ~Item() {}
};

class Perishable : public Item {
public:
	Perishable(string n, int q) : Item(n,q){}
	void display() override {
		cout << name << " (Perishable), Qty: " << quantity << "\n";
	}
};

class NonPerishable : public Item {
public:
	NonPerishable(string n, int q) : Item(n,q){}
	void display() override {
		cout << name << " (Non-Perishable), Qty: " << quantity << "\n";
	}
};
int main(){
	Item* item1 = new Perishable("Milk", 10);
	Item* item2 = new NonPerishable("Canned Beans", 20);

	item1->display();
	item2->display();

	delete item1;
	delete item2;
	return 0;
}
