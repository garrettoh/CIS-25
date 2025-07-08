//
// Created by gart on 6/18/2025.
//

#include <iostream>
#include "../../getValidInput.h"
using namespace std;
void runAssignment3() {
    cout << "Part one is the entire assignment already\n";
    cout << "Part two is Output of highest of 3 inputs using if statements which is very ineffecient but we shall do it anyway \n";

    int a, b, c;
    int largestNum;

    cout << "Enter 3 numbers (Between 1 and 5000): ";
    a = getValidInput(1, 5000);
    b = getValidInput(1, 5000);
    c = getValidInput(1, 5000);
    if (a > b && a > c) {
        largestNum = a;
    } else if (b > a && b > c) {
        largestNum = b;
    } else {
        largestNum = c;
    }
    cout << "The largest number is " << largestNum << endl;
}

