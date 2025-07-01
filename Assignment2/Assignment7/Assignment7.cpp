#include "Assignment7.h"
// #include <memory>
void runAssignment7() {
// having some issues with the program crashing because of memory but it works fine on its own executeable just not in the menu im assuming a linking problem still
	// still todo is find the linking problem so the program doesn't crash if you press 7 to open this assingment
	// COMMENTING OUT BECAUES OF MEMORY CORRUPTION program returns: free(): invalid size aborted (core dumped) IM GOING TO USE SMART POINTERS INSTEAD
    Item7* item1 = new Perishable("milk", 10);
    Item7* item2 = new NonPerishable("canned beans", 20);
	// std::unique_ptr<Item> item1 = std::make_unique<Perishable>("Milk", 10);
	// std::unique_ptr<Item> item2 = std::make_unique<NonPerishable>("Canned Beans", 20);

	item1->display();
	item2->display();

    delete item1;
    delete item2;

}
