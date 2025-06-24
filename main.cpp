#include <iostream>
#include "getValidInput.h"
#include "Assignments.h"
using namespace std;


void showMainMenu()
{
    cout << "Welcome to the Main Menu for the week 1 Assignment\n\n";
    cout << "I have about 8 YoE Programming and work in Cybersecurity \nso I thought It'd be interesting to implement user input validation\n\n";
    cout << "Please select an assignment 1-4 by responding with the respective key\n";
    cout << "1. Assignment 1: Getting Started with C++ (Hello World!)\n";
    cout << "2. Assignment 2: Input and Output Variables\n";
    cout << "3. Assignment 3: Debugging and Logic\n";
    cout << "4. Assignment 4: Functions and Loops\n";
    cout << "5. Assignment 5: Pointers and memory\n";
    cout << "6. Assignment 6: Strings and classes\n";
    cout << "7. Assignment 7: OOP Principles\n";
    cout << "8. Exit the Program\n";
    cout << "\n";
    cout << "Your choice: ";
}



int main() {
    int choice;
    do {
        showMainMenu();
        choice = getValidInput(1, 8);
        switch (choice) {
            case 1:
                runAssignment1();
                break;
            case 2:
                runAssignment2();
                break;
            case 3:
                runAssignment3();
                break;
            case 4:
                runAssignment4();
                break;
            case 5:
                runAssignment5();
                break;
            case 6:
                runAssignment6();
                break;
            case 7:
                runAssignment7();
                break;
            case 8:
                cout << "Goodbye!";
        }
    } while (choice !=8);

    return 0;
}
