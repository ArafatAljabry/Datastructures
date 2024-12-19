#pragma once
#include <vector>

using namespace std;
class stack
{
    vector<int> m_data;
public:
    stack();
    /**
     * Removes the item at the top of the stack. 
     * @return integer value of the item at the top.
     */
    int RemoveFromTop();

    /**
     * Adds value to the top of the stack. No return value.
     * @param Integer value.
     */
    void AddToTop(int value);

    /**
     * Individualy prints out the values from the stack.
     * Without removing or changing anything in the stack.
     */
    void showStack() const;

    /**
     *  Checks if there are items in the stack. Returns true if its empty, false if its not.
     * @return Bool. 
     */
    bool IsEmpty() const;
        
};

