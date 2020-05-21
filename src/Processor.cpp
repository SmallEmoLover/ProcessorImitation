#include "Processor.h"
#include <iostream>

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

Task* Processor::getCurrentTask()
{
	return currentTask;
}

void Processor::printState()
{
	if (isFree)
		std::cout << "Processor is free";
	else
	{
		std::cout << "Current task: " << getCurrentTask()->getName();
		std::cout << " complete: " << getCurrentTask()->getPercent() << "%";
		std::cout << "\nStack: ";
		tasks->print();
	}
}