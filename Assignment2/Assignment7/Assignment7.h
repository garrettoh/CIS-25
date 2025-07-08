#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
using namespace std;

class Item7 {
protected:
    string name;
    int quantity;

public:
    Item7(string n, int q);
    virtual void display() = 0;
    virtual ~Item7() {}
};

class Perishable : public Item7 {
public:
    Perishable(string n, int q);
    void display() override;
};

class NonPerishable : public Item7 {
public:
    NonPerishable(string n, int q);
    void display() override;
};
void runAssignment7();
#endif
