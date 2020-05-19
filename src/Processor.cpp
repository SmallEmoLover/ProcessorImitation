#include "Processor.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса процессора
*/

Processor::Processor()
{
    currentTask = nullptr;
    tasks = new Stack();
    isFree = true;
}

void Processor::newTask(Task *task)
{
    if(isFree == true)
    {
        currentTask = task;
        isFree = false;
    }
    else
        tasks->push(task);    
}

void Processor::checkTask()
{
    if (currentTask->getPercent() >= 100)
    {
        delete currentTask;
        if (tasks->isEmpty())
            isFree = true;
        else
            currentTask = tasks->pop();
    }
}

