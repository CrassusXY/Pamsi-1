#ifndef PRIORITYQUE_HH
#define PRIORITYQUE_HH
#include <iostream>
#include "node.hh"

class Priority_queue
{
protected:
    Node *head;
    uint length;
public:
    Priority_queue();
    bool is_empty();
    uint size();
    int pop();
    int push(const uint & priority, const char & item);
    void print();
};

#endif