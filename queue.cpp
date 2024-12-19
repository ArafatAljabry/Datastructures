#include "queue.h"

queue::queue()
{
}

void queue::enqueue(int a)
{
    data.AddToBack(a);
}

Node queue::dequeue()
{
    Node tempNode = *data.GetHead();
    data.DeleteFromFront();

    return tempNode;
}

void queue::showQueue() const
{
    data.PrintNodes();
}

bool queue::is_empty() const
{
    if (data.isEmpty())   
    {
        return true;
    }
        return false;
}
