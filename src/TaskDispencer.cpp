#include "TaskDispencer.h"

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