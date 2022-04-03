#ifndef NODE_HH
#define NODE_HH
#include <iostream>

class Node
{
public:
protected:
    uint priority;
    char message;
    Node *next;
public:
    Node(const int & priority_, const char & item_):
        priority(priority_),
        message(item_),
        next(nullptr)
        {}

    Node(const int & priority_, const char & item_, Node* next_):
        priority(priority_),
        message(item_),
        next(next_)
        {}

    uint get_priority(){return priority;};
    char get_message(){return message;};

    void set_next(Node* next_){next = next_;};
    Node* get_next(){return next;};
};

#endif
