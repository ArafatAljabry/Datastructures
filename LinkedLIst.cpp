#include "LinkeLIst.h"

using namespace std;

LinkedList::LinkedList()
{
	m_Head = nullptr;
}


void LinkedList::AddToFront(int value)
{
	Node* tempValue = new Node(value, m_Head);
	m_Head = tempValue;
}

void LinkedList::AddToBack(int value)
{
	// If used while the list is empty,adds to the front.(Which is the same, since its empty)
	if (m_Head == nullptr)
	{
		AddToFront(value);
		return;
	}

	Node* CurrentLastValue = m_Head;

	//Get the last node
	while (CurrentLastValue->GetNextNode() != nullptr)
	{
		CurrentLastValue = CurrentLastValue->GetNextNode();
	}

	Node* TempNode = new Node(value, CurrentLastValue->GetNextNode());
	CurrentLastValue->SetNextNode(TempNode);
}

void LinkedList::DeleteFromBack()
{
	Node* SecondToLast = m_Head;

	//Get the second to last node
	while (SecondToLast->GetNextNode()->GetNextNode() != nullptr)
	{
		SecondToLast = SecondToLast->GetNextNode();
	}

	//Get last node
	Node* tempNode = SecondToLast->GetNextNode();

	//Make the second to last node the last node
	SecondToLast->SetNextNode(tempNode->GetNextNode());

	// Free memory from the previous last node
	delete tempNode;
}

void LinkedList::DeleteFromFront()
{
	if (m_Head != nullptr)
	{
		Node* CurrentHead = m_Head;

		if (m_Head->GetNextNode() != nullptr)
		{
			m_Head = m_Head->GetNextNode();
			delete CurrentHead;
		}
		else
		{
			m_Head = nullptr;
			delete CurrentHead;
			CurrentHead = nullptr;
		}
	}
	else { std::cout << "Linked list is empty"; }
}

void LinkedList::PrintNodes()
{
	Node* tempNode = m_Head;

	while (tempNode != nullptr)
	{
		std::cout << tempNode->GetValue();
		tempNode = tempNode->GetNextNode();
	}
}
