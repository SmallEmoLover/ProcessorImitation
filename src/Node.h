#pragma once

#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс списков
*/

class Task;

class Node
{
    private:
        Task *data;
        Node *next;
        
    public:
        //Вставка в список после данного
        Node* insertAfter(Task *data);
        //Получение данных
        Task* getData();
        //Получение следующего элемента списка
        Node* getNext();
        //Изменение указателя на следующий элемент
        void setNext(Node* node);
        Node(Task *task);
};