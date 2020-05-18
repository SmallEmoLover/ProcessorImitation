#pragma once

#include "Node.h"
#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс стека
*/

class Stack
{
    private:
        Node* first;

    public:
        //добавить элемент
        void push(Task data);
        //взять элемент
        Task pop();
        //пуст ли стек
        bool isEmpty();
        Stack();
};