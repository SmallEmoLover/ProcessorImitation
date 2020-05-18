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
        Task currentTask;
        //При остановке задачи
        void onStopTask();
    public:
        //Добавление новой задачи
        void newTask(Task task);
        Processor();
};