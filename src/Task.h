#pragma once

#include <string>

using namespace std;

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс задач
*/

class Task
{
    private:
        //Процент выполнения
        int percent;
        //Тип задачи
		int type;
        //Имя
        string name;

    public:
        //изменить процент выполнения
        void setPercent(int percent);
        //изменить имя
        void setName(string name);
        //возвращает тип
        int getType();
        //возвращает процент выполнения
        int getPercent();
        //возвращает имя
        string getName();

        Task(int type);
        Task(int type, string name);
};