#pragma once

#ifndef _TASKDISPENCER
#define _TASKDISPENCER

#include "Processor.h"
#include "Queue.h"

class TaskDispencer
{
private:
    Processor *processors;
    Queue *tasks;
public:
	//Добавить задачу в распределитель
    void addTask(Task *task);
	//Выполнить задачу
	void executeTask();
	TaskDispencer(int num_processors);
};

#endif // !_TASKDISPENCER