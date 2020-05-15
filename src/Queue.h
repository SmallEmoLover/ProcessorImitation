#pragma once

#include "Node.h"
#include "Task.h"

class Queue
{
    private:
        Node *first, *last;
        
    public:
        void queue(Task data);
        Task dequeue();
        bool isEmpty();
        Queue();
};