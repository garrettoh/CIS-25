#include <iostream>
#include "../getValidInput.h"
using namespace std;
void runAssignment2() {
    string itemName;
    int quantity;
    float cost;

    cout << "Enter item name: ";
    cin >> itemName;
    cout << "Enter quantity ( Between 1 and 50 ): ";
    quantity = getValidInput(1, 50);
    cout << "Enter cost: ";
    cin >> cost;

    cout << "Total cost for " << itemName << ": $" << (quantity * cost) << endl;
}
