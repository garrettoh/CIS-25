#include "Assignment6.h"
#include <iostream>
#include <fstream>

using namespace std;

void Item6::saveToFile() {
    ofstream out("items.txt");
    if (out.is_open()) {
        out << name << ", " << quantity << "\n";
        out.close();
        cout << "Item saved to file.\n";
    } else {
        cout << "Unable to open file for writing.\n";
    }
}

void Item6::loadFromFile() {
    ifstream in("items.txt");
    if (in.is_open()) {
        string line;
        while (getline(in, line)) {
            cout << "File content: " << line << "\n";
        }
        in.close();
    } else {
        cout << "Unable to open file for reading.\n";
    }
}

void runAssignment6() {
    Item6 Screwdriver;
    Screwdriver.name = "Screwdriver";
    Screwdriver.quantity = 32;

    Screwdriver.saveToFile();
    Screwdriver.loadFromFile();
}
