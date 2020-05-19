#pragma once

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

    public:
        //Установить процент
        void setPercent(int percent);
        int getType();
        int getPercent();
        Task(int type);
};