#include "LinkeLIst.h"

using namespace std;

LinkedList::LinkedList()
{
	m_Head = nullptr;
}

Node* LinkedList::GetHead() const
{
	return m_Head;
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

void LinkedList::DeleteFromBack() const
{
	Node* SecondToLast = m_Head;

	//Get the second to last node
	while (SecondToLast->GetNextNode()->GetNextNode() != nullptr)
	{
		SecondToLast = SecondToLast->GetNextNode();
	}

	//Get current last node
	Node* tempNode = SecondToLast->GetNextNode();

	//Make the second to last node the last node
	SecondToLast->SetNextNode(tempNode->GetNextNode());

	// Free memory from that the previous last node used
	delete tempNode;
}

void LinkedList::DeleteFromFront()
{
	if (m_Head != nullptr)
	{

		if (m_Head->GetNextNode() != nullptr)
		{
			//TODO: Read on pointers. is CurrentHead actually getting
			// the object or just the memory adress. If adress then it changed later
			// and we have a memory leak
			
			//Get ref to current head
			Node* CurrentHead = m_Head;

			//Set ref to head
			m_Head = m_Head->GetNextNode();
			delete CurrentHead;
			CurrentHead = nullptr;
		}
		else
		{
			delete m_Head;
			m_Head = nullptr;
		}
	}
	else { cout << "Linked list is empty\n"; }
}

void LinkedList::PrintNodes() const
{
	Node* tempNode = m_Head;

	while (tempNode != nullptr)
	{
		cout << tempNode->GetValue() << endl;
		tempNode = tempNode->GetNextNode();
	}
}

bool LinkedList::isEmpty() const
{
	if (m_Head == nullptr)
	{
		return true;
	}
	return false;
}
