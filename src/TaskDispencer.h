#pragma once

#ifndef _TASKDISPENCER
#define _TASKDISPENCER

#include "Processor.h"
#include "Queue.h"

/*
    Кулаков Д.С. :с 
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс распределителя задач
*/

class TaskDispencer
{
private:
    Processor *processors;
    Queue *tasks;
public:
	//Добавить новую задачу в распределитель
    void addTask(Task *task);
	//Распределить задачу
	void dispenceTask();
	void printState();
	void stopTask(int processor);
	Task *getCurrentTask(int processor);
	TaskDispencer(int num_processors);
};

#endif // !_TASKDISPENCER