#pragma once

#include <string>

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс задач
*/

//TODO: деконструкторы

class Task
{
    private:
        //Процент выполнения
        int percent;
        //Тип задачи
		int type;
        //Имя
        std::string name;

    public:
        void setPercent(int percent);
        void setName(std::string name);
        int getType();
        int getPercent();
        std::string getName();
        Task(int type);
        Task(int type, std::string name);
};