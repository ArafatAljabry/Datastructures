#include "stack.h"

#include <iostream>

stack::stack()
{
}

int stack::RemoveFromTop()
{
    int tempValue = m_data.back();
    m_data.pop_back();
    
    return tempValue;
}

void stack::AddToTop(int value)
{
    m_data.push_back(value);
}

bool stack::IsEmpty() const
{
    if (m_data.empty())
    {
        return true;
    }
    
    return false;
}

void stack::showStack() const
{
    for (int i : m_data)
    {
        std::cout << i << ", ";
    }
}

