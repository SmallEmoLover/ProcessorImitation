#pragma once

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
		int num_processors;

	public:
		//Добавить новую задачу в распределитель
		void addTask(Task *task);
		//Распределить задачу
		void dispenceTask();
        //Печать состояния системы
		void printState();
        //Остановить текущую задачу процессора
		void stopTask(int processor);
        //Получить текущую задачу процессора
		Task *getCurrentTask(int processor);

		TaskDispencer(int num_processors);
		~TaskDispencer();
};