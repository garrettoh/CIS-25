#include "../getValidInput.h"
#include <iostream>
using namespace std;
void runAssignment4() {
    cout << "How many times would you like this program to print? ";
    int maxCount = getValidInput(1, 1337);
    for (int counter = 1; counter <= maxCount; counter++) {
          cout << "This has printed " <<  counter  << " Times" << endl;
    }

}