#include "TaskDispencer.h"

TaskDispencer::TaskDispencer(int num_processors)
{
    tasks = new Queue();
    processors = new Processor[num_processors];
}

void TaskDispencer::addTask(Task *task)
{
	tasks->queue(task);
}

void TaskDispencer::executeTask()
{
	if (tasks->isEmpty())
		return;
	
	tasks->dequeue()->execute();
}