#ifndef ASSIGNMENT6_H
#define ASSIGNMENT6_H

#include <string>

class Item6 {
public:
    std::string name;
    int quantity;

    void saveToFile();
    void loadFromFile();
};

// This function will be called from main.cpp
void runAssignment6();

#endif // ASSIGNMENT6_H
