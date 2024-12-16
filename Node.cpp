#include "Node.h"

Node::Node(int value, Node* NextNode)
{
    m_value = value;
    m_NextNode = NextNode;
}


Node* Node::GetNextNode(){ return m_NextNode; }


int Node::GetValue(){ return m_value; }

void Node::SetValue(int newValue) { m_value = newValue; }

void Node::SetNextNode(Node* newNode) { m_NextNode = newNode; }

