/*
 *Class for creating single-linked linked list, to be used in conjunction with the node class
 */

#pragma once
#include <iostream> // Used in cpp file
#include "Node.h"

class LinkedList
{
	Node* m_Head;

public:
	LinkedList();
	//~LinkedList();

	/**
	 * Returns the member pointer m_Head, the head of the linked list.
	 * @return pointer to m_Head; The head.
	 */
	Node* GetHead() const;

	/**
	 * Given an integer, creates a new node object and point it to the current head.
	 * Then sets the newly created object to be the head
	 * @param Integer value 
	 */
	void AddToFront(int value);

	/**
	 * Creates a new node and sets it at the end, making sure the current last node
	 * points to the new last node. If the list is empty, adds it to the front
	 * (Which would be the same as adding to the back)
	 * @param Integer value 
	 */
	void AddToBack(int value);
	
	/**
	 * Deletes the last item and sets the second to last item as the new last item
	 */
	void DeleteFromBack() const;

	/**
	 * Deletes the current head of the list and sets the next item as the new head
	 */
	void DeleteFromFront();

	/**
	 * Prints the values of the nodes
	 */
	void PrintNodes() const;

	/**
	 *  True if its empty and false if its not.
	 * @return Bool
	 */
	bool isEmpty() const;
};