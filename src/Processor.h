#pragma once

#include "Stack.h"
#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс процессора
*/

class Processor
{
    private:
        Stack *tasks;
        bool isFree;
        Task *currentTask;
    public:
        //Добавление новой задачи
        void newTask(Task *task);
        //Остановка текущей задачи
        void stopTask();
        //Печать состояния
		void printState();
        //Возвращает текущую задачу
		Task* getCurrentTask();

        Processor();
		~Processor();
};