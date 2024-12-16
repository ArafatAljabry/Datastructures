// Datastructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LinkeLIst.h"

int main()
{
	/*
	 * Testing single linked linked list
	 */
	LinkedList myLinkedList;


	myLinkedList.AddToFront(1);
	myLinkedList.AddToBack(2);
	myLinkedList.AddToBack(3);
	myLinkedList.AddToBack(4);
	myLinkedList.PrintNodes();


	myLinkedList.DeleteFromFront();
	std::cout << "\nAfter deleting from front\n";
	myLinkedList.PrintNodes();

	myLinkedList.DeleteFromBack();
	std::cout << "\nAfter deleting from back\n";
	myLinkedList.PrintNodes();
	

	return 0;
}
