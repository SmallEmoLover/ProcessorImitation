#pragma once

#ifndef _QUEUE
#define _QUEUE

#include "Node.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс очереди
*/

class Queue
{
    private:
        //указатели на начало и конец
        Node *first, *last;
        
    public:
        //добавление в очередь
        void queue(Task *data);
        //удаление из очереди
        Task* dequeue();
        //пуста ли очередь
        bool isEmpty();
        //печать
        void print();
        Queue();
};

#endif // !_QUEUE