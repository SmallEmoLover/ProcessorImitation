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

Processor::~Processor()
{
	delete tasks;
	if (currentTask != nullptr)
		delete currentTask;
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

void Processor::stopTask()
{
	if (currentTask != nullptr)
		delete currentTask;
	if (tasks->isEmpty())
	{
		isFree = true;
		currentTask = nullptr;
	}
    else
        currentTask = tasks->pop();
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