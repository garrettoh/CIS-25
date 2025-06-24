#include <iostream>
#include <memory>
#include <string>

class Item {
protected:
    std::string name;
    int quantity;
public:
    Item(std::string n, int q) : name(n), quantity(q) {}
    virtual void display() = 0;
    virtual ~Item() {}
};

class Perishable : public Item {
public:
    Perishable(std::string n, int q) : Item(n, q) {}
    void display() override { std::cout << name << " (Perishable), Qty: " << quantity << "\n"; }
};

class NonPerishable : public Item {
public:
    NonPerishable(std::string n, int q) : Item(n, q) {}
    void display() override { std::cout << name << " (Non-Perishable), Qty: " << quantity << "\n"; }
};

int main() {
    std::unique_ptr<Item> item1 = std::make_unique<Perishable>("Milk", 10);
    std::unique_ptr<Item> item2 = std::make_unique<NonPerishable>("Canned Beans", 20);

    item1->display();
    item2->display();

    return 0;
}
