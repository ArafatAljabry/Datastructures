#pragma once

// QUESTION: Can i inherit from linked list since im using everything there anyways?
/*
 * Using a single-linked list as a queue, functions pretty much derive from
 * LinkedLIst.h, see there for further understanding. 
 */
#include "LinkeLIst.h"

class queue
{
    LinkedList data;
public:
    queue();
    //~queue();

    /**
     *  Adds the value to the back of the list
     * @param Integer - a 
     */
    void enqueue(int a);

    /**
     * Gets the value of the first item in the queue 
     * and deletes the current head
     * @return Node - Object at the front of the queue
     */
    Node dequeue();

    /**
     * Shows each item in the queue
     */
    void showQueue() const;

    /**
     * Returns true if its empty and false if it is not
     * @return Bool
     */
    bool is_empty() const;
};
