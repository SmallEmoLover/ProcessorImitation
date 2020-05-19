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
    Task::name = "Unnamed";
}

Task::Task(int type, std::string name)
{
    percent = 0;
    Task::type = type;
    Task::name = name;
}

void Task::setPercent(int percent)
{
    Task::percent = percent;
}

void Task::setName(std::string name)
{
    Task::name = name;
}

int Task::getType()
{
    return type;
}

int Task::getPercent()
{
    return percent;
}

std::string Task::getName()
{
    return name;
}