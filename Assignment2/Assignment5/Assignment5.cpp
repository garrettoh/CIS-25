#include <iostream>
#include <string>
#include <vector>
#include "Assignment5.h"
/*
 * Using vectors is more manageable than using arrays because of not having to free the memory after the fact
 * Using an array I would simply do the same thing and supply a size parameter in the binary search function and have that be the size of the array
 * I would also use new[] and delete to manually manage the memory 
 * */
using namespace std;

struct Item5 {
	string name;
	int id;
};
int binarySearch(vector<Item5>& items, int targetId){
	int left = 0; 
	int right = items.size() - 1;

	while(left<= right){
		int mid = (left+right)/2;

		if (items[mid].id == targetId){
			return mid;
		} else if(items[mid].id < targetId){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	return -1;
}
void runAssignment5(){
	
	vector<Item5> Items;
	//Constructing using the vector
	Items.push_back({"Banana", 1});
	Items.push_back({"Milkshake", 2});
	Items.push_back({"Strawberry", 3});
	//Constructing using the constructor
	Item5 Tulip;
	Tulip.name = "Tulip";
	Tulip.id = 4;
	Items.push_back(Tulip);

	int searchId;
	cout << "Enter an ID to search: ";
	cin >> searchId;
	
	int index = binarySearch(Items, searchId);

	if (index != -1 ){
		cout << "Item found: " << Items[index].name << " (ID: " << Items[index].id << ")\n";
	} else {
		cout << "Item with ID " << searchId << "was not found.\n";
	}
}
