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
    tasks = new Queue();
    processors = new Processor[num_processors];
}

void TaskDispencer::addTask(Task *task)
{
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
	std::cout << "\n\nDispencer tasks: ";
	tasks->print();
	for (int i = 0; i < 3; i++)
	{
		std::cout << "\n\nProcessor " << i + 1 << " state:\n";
		processors[i].printState();
	}
}

Task* TaskDispencer::getCurrentTask(int processor)
{
	return processors[processor].getCurrentTask();
}

//TODO: Принимать задачу
void TaskDispencer::stopTask(int processor)
{
	processors[processor].checkTask();
}