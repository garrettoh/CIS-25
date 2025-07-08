#include "Assignment7.h"

Item7::Item7(string n, int q) : name(n), quantity(q) {}

Perishable::Perishable(string n, int q) : Item7(n, q) {}

NonPerishable::NonPerishable(string n, int q) : Item7(n, q) {}
void Perishable::display() {
    cout << name << " (Perishable), Qty: " << quantity << "\n";
}


void NonPerishable::display() {
    cout << name << " (Non-Perishable), Qty: " << quantity << "\n";
}
