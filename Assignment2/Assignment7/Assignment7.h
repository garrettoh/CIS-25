#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using namespace std;

class Item {
protected:
    string name;
    int quantity;

public:
    Item(string n, int q);
    virtual void display() = 0;
    virtual ~Item() {}
};

class Perishable : public Item {
public:
    Perishable(string n, int q);
    void display() override;
};

class NonPerishable : public Item {
public:
    NonPerishable(string n, int q);
    void display() override;
};
void runAssignment7();
#endif
