#pragma once

#include "Stack.h"
#include "Task.h"

class Processor
{
    private:
        Stack tasks;
        bool isFree;

    public:
        void newTask(Task task);
        Processor();
};