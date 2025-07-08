#include <iostream>
#include "Assignment3/Assignment9/Assignment9.h"
#include "getValidInput.h"
#include "Assignments.h"
using namespace std;

void pauseAndClear() {
    cout << "\nPress Enter to return to the menu...";
    cin.ignore(); 
    cin.get();
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void showMainMenu()
{
    cout << "\n\n\n1. Assignment 1: Getting Started with C++ (Hello World!)\n";
    cout << "2. Assignment 2: Input and Output Variables\n";
    cout << "3. Assignment 3: Debugging and Logic\n";
    cout << "4. Assignment 4: Functions and Loops\n";
    cout << "5. Assignment 5: Pointers and memory\n";
    cout << "6. Assignment 6: Strings and classes\n";
    cout << "7. Assignment 7: OOP Principles\n";
    cout << "8. Assignment 8: Bank Account Simulation\n";
    cout << "9. Assignment 9: Inventory management with arrays(vectors)\n";
    cout << "10. Exit the Program\n";
    cout << "\n\n\n";
    cout << "Your choice: ";
}



int main() {
 

    	cout << "Welcome to the Main Menu for the week 1 Assignment\n\n";
    	cout << "I have about 8 YoE Programming and work in Cybersecurity \nso I thought It'd be interesting to implement user input validation\n\n";
    	cout << "Please select an assignment 1-4 by responding with the respective key\n";
	int choice;
    do {
        showMainMenu();
        choice = getValidInput(1, 10);
        switch (choice) {
            case 1:
                runAssignment1();
		pauseAndClear();
                break;
            case 2:
                runAssignment2();
		pauseAndClear();
                break;
            case 3:
                runAssignment3();
		pauseAndClear();
                break;
            case 4:
                runAssignment4();
		pauseAndClear();
                break;
            case 5:
                runAssignment5();
		pauseAndClear();
                break;
            case 6:
                runAssignment6();
		pauseAndClear();
                break;
            case 7:
                runAssignment7();
		pauseAndClear();
                break;
	    case 8:
		runAssignment8();
		pauseAndClear();
		break;
	    case 9:
		runAssignment9();
		pauseAndClear();
		break;
            case 10:
                cout << "Goodbye!\n";
        }
    } while (choice !=10);

    return 0;
}
