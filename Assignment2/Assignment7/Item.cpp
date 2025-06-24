#include "Assignment7.h"

Item::Item(string n, int q) : name(n), quantity(q) {}

Perishable::Perishable(string n, int q) : Item(n, q) {}

void Perishable::display() {
    cout << name << " (Perishable), Qty: " << quantity << "\n";
}

NonPerishable::NonPerishable(string n, int q) : Item(n, q) {}

void NonPerishable::display() {
    cout << name << " (Non-Perishable), Qty: " << quantity << "\n";
}
