/*
 *  Defines a node, used with single linked list
 */
#pragma once

class Node
{
public:
    int m_value;
    Node* m_NextNode;
	
    /**
     * \brief  Constructor for a new Node to the linked list
     * \param value  Value that the Node holds
     * \param NextNode The next node in the list
     */
    Node(int value, Node* NextNode);
    //~Node();

    /**
     * \brief Returns the node this node is pointing to
     * \return Pointer to a node
     */
    Node* GetNextNode();
    
    /**
     * \brief Value that the node holds
     * \return  integer value
     */
    int GetValue();
    
    /**
     * \brief Updates the value with a new one
     * \param newValue New integer value to switch out the old with
     */
    void SetValue(int newValue);
    
    /**
     * \brief  Updates the node that comes next with a new one
     * \param newNode The new node that comes next
     */
    void SetNextNode(Node* newNode);
};