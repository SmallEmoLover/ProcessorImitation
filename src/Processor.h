#pragma once

#ifndef _PROCESSOR
#define _PROCESSOR

#include "Stack.h"
#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс процессора
*/

class Task;
class Stack;

class Processor
{
    private:
        Stack *tasks;
        bool isFree;
        Task *currentTask;
    public:
        //Добавление новой задачи
        void newTask(Task *task);
        //При остановке задачи
        void onStopTask();
        Processor();
};

#endif //!_PROCESSOR