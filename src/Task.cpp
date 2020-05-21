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

Task::Task(int type, string name)
{
    percent = 0;
    Task::type = type;
    Task::name = name;
}

void Task::setPercent(int percent)
{
    Task::percent = percent;
	if (Task::percent > 100)
		Task::percent = 100;
	if (Task::percent < 0)
		Task::percent = 0;
}

void Task::setName(string name)
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

string Task::getName()
{
    return name;
}