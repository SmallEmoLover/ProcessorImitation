#pragma once

#include "Node.h"
#include "Task.h"

class Stack
{
    private:
        Node* first;
        
    public:
        void push(Task data);
        Task pop();
        bool isEmpty();
};