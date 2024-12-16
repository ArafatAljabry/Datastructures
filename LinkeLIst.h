/*
 *Class for creating single-linked linked list, to be used in conjunction with the node class
 */

#pragma once
#include <iostream> // Used in cpp file
#include "Node.h"

class LinkedList
{

public:
	LinkedList();
	
	Node* m_Head;

	void AddToFront(int value);

	void AddToBack(int value);

	void DeleteFromBack();
	
	void DeleteFromFront();

	void PrintNodes();
};