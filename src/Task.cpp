#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса задач
*/

Task::Task(int type)
{
    percent = 0;
    Task::type = type;
}

void Task::setPercent(int percent)
{
    Task::percent = percent;
}

int Task::getType()
{
    return type;
}

int Task::getPercent()
{
    return percent;
}