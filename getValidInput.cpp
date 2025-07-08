//
// Created by gart on 6/18/2025.
//
#include <iostream>
#include <string>
#include <sstream>
#include "getValidInput.h"
using namespace std;

bool isValidInt(const string& str, int& out) {
    istringstream ss(str);
    ss >> out;

    if (ss.fail() || !ss.eof()) {
        return false;
    }
    return true;
}


//
int getValidInput(int min, int max) {
    string inputStr;
    int input;

    while (true) {
        getline(cin, inputStr);

        if (!isValidInt(inputStr, input)) {
            cout << "Invalid input. Please enter a number between " << min << " and " << max << ": ";
            continue;
        }

        if (input < min || input > max) {
            cout << "Out of range. Enter between " << min << " and " << max << ": ";
            continue;
        }

        return input;
    }
}
