#pragma once

#include "Task.h"

class Node
{
    private:
        Task data;
        Node *next;
        
    public:
        Node* insert(Task data, Node *prev);
        Node(Task data);
};