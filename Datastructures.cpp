// Datastructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "LinkeLIst.h"
#include "queue.h"
#include "stack.h"


int main()
{
	/*
	 * Testing single-linked list
	 */

	/*
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

	*/

	
	/*
	 *  Testing Queue. Uses linkedlist to define the queue
	 */

	/*
	queue myQueue;

	//Add values to queue
	myQueue.enqueue(1);
	myQueue.enqueue(2);
	myQueue.enqueue(3);
	
	//Look at values in queue
	std::cout << "Look at values in queue" << std::endl;
	myQueue.showQueue();

	//Remove and show value from queue (First value)
	std::cout << "Remove and show value from queue (First value)" << std::endl;
	Node tempNode = myQueue.dequeue();
	std::cout << tempNode.GetValue() << std::endl;

	//Show queue after dequeueing
	std::cout << "Show queue after dequeueing" << std::endl;
	myQueue.showQueue();

	//Add new values
	myQueue.enqueue(4);
	myQueue.enqueue(5);
	
	//See queue after adding new values
	std::cout << "See queue after adding new values" << std::endl;
	myQueue.showQueue();

	*/
	
	/*
	 * Test Stack class
	 */
	stack myStack;

	//Show empty stack
	cout << "Show empty stack" << endl;
	myStack.showStack();

	//Add items to stack
	myStack.AddToTop(1);
	myStack.AddToTop(2);
	myStack.AddToTop(3);

	//Show stack with items
	cout << "show stack with items" << endl;
	myStack.showStack();

	//Remove from top
	int removedItem = myStack.RemoveFromTop();
	cout << "\n removed item: " << removedItem << endl;

	//Show stack after removing from top
	cout << "\n Show stack after removing from top" << endl;
	myStack.showStack();

	//Add new items
	cout << "\n Add new items" << endl;
	myStack.AddToTop(4);
	myStack.AddToTop(5);

	//Show stack with new items
	cout << "\n Show stack with new items" << endl;
	myStack.showStack();
	
	return 0;
}
