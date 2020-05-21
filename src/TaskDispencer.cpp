#include "TaskDispencer.h"
#include <iostream>

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса распределителя задач
*/

TaskDispencer::TaskDispencer(int num_processors)
{
	TaskDispencer::num_processors = num_processors;
    tasks = new Queue();
    processors = new Processor[num_processors];
}

TaskDispencer::~TaskDispencer()
{
	delete[] processors;
	delete tasks;
}

void TaskDispencer::addTask(Task *task)
{
	if (task->getType() < 0 || task->getType() > num_processors)
	{
		std::cout << "\nWrong task type\n";
		return;
	}
	tasks->queue(task);
}

void TaskDispencer::dispenceTask()
{
	if (tasks->isEmpty())
		return;
	
	Task *cur = tasks->dequeue();
    processors[cur->getType()].newTask(cur);
}

void TaskDispencer::printState()
{
	std::cout << "\n\nDispencer queue: ";
	tasks->print();
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n\nProcessor " << i + 1 << " state:\n";
		processors[i].printState();
	}
}

Task* TaskDispencer::getCurrentTask(int processor)
{
	if (processor < 0 || processor > num_processors)
	{
		std::cout << "Wrong processor number";
		return nullptr;
	}
	return processors[processor].getCurrentTask();
}

void TaskDispencer::stopTask(int processor)
{
	if (processor < 0 || processor > num_processors)
	{
		std::cout << "Wrong processor number";
		return;
	}
	processors[processor].stopTask();
}