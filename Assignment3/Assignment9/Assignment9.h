#ifndef ITEMINVENTORY_H
#define ITEMINVENTORY_H

#include <string>
#include <vector>
using namespace std;

class Item10 {
public:
    string name;
    int quantity;

    void display();
};

void searchItem(const vector<Item10>& inventory, string searchName);
void runAssignment9();

#endif
