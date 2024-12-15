// Datastructures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Node
{
public:
	
	/**
	 * \brief  Create a new Node to the linked list
	 * \param value  Value that the Node holds
	 * \param NextNode The next node in the list
	 */
	Node(int value, Node* NextNode)
	{
		m_value = value;
		m_NextNode = NextNode;
	}


	/**
	 * \brief Returns the next node in the linked list from this node
	 * \return Pointer to a node
	 */
	Node* GetNextNode(){ return m_NextNode; }

	
	/**
	 * \brief Value that the node holds
	 * \return  integer value
	 */
	int GetValue(){ return m_value; }


	/**
	 * \brief Updates the value with a new one
	 * \param newValue New integer value to switch out the old with
	 */
	void SetValue(int newValue) { m_value = newValue; }


	/**
	 * \brief  Updates the node that comes next with a new one
	 * \param newNode The new node that comes next
	 */
	void SetNextNode(Node* newNode) { m_NextNode = newNode; }
private:
	int m_value;
	Node* m_NextNode;

};


class LinkedList
{
public:
	LinkedList()
	{
		m_Head = nullptr;
	}
private:
	Node* m_Head;

	void AddToFront(int value)
	{
		Node* tempValue = new Node(value,m_Head);
		m_Head = tempValue;
	}

	void AddToBack(int value)
	{
		Node* CurrentLastValue = m_Head;
		while(CurrentLastValue->GetNextNode() != nullptr)
		{
			CurrentLastValue = CurrentLastValue->GetNextNode();
		}

		Node* TempNode = new Node(value, CurrentLastValue->GetNextNode());
		CurrentLastValue->SetNextNode(TempNode);
	}

	void DeleteFromBack()
	{
		Node* tempNode;
		Node* SecondToLast;

		//Get the second to last node
		while(SecondToLast->GetNextNode()->GetNextNode() !=nullptr)
		{
			SecondToLast = SecondToLast->GetNextNode();
		}

		//Get last node
		tempNode = SecondToLast->GetNextNode();

		//Make the second to last node the last node
		SecondToLast->SetNextNode(tempNode->GetNextNode());

		// Free memory from the previous last node
		delete tempNode;


	}
	void DeleteFromFront()
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
			}
		}
		else { std::cout << 'Linked list is empty'; }
			
	}
};
int main()
{

	return 0;
}