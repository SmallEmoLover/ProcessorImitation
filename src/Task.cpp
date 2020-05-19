#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса задач
*/

Task::Task(int time, Processor *processor)
{
    Task::time = time;
    Task::processor = processor;
}

void Task::execute()
{
    //Тут вроде как выполнение задачи, но так как мы только моделируем работу процессора, то тут ничего нет
    processor->newTask(this);
}

void Task::changeTime(int newTime)
{
    time = newTime;
}

void Task::stop()
{
    processor->onStopTask();
}