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
	//�������� ������ � ��������������
    void addTask(Task *task);
	//��������� ������
	void executeTask();
	TaskDispencer(int num_processors);
};

#endif // !_TASKDISPENCER