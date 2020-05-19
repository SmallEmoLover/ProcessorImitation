#pragma once

#ifndef _TASK
#define _TASK

#include "Processor.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс задач
*/

//TODO: деконструкторы

class Processor;

class Task
{
    private:
        int time;
		Processor *processor;

    public:
        void execute();
        void changeTime(int newTime);
        void stop();
        Task(int time, Processor *processor);
};

#endif // !_TASK