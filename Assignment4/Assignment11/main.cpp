#include "classes.h"

int main(){
	std::cout << "Printing all three access levels Manager, Employee, User: \n";

	Manager manager1;
	manager1.accessLevel();

	Employee employee1;
	employee1.accessLevel();

	User user1;
	user1.accessLevel();

	return 0;
}
