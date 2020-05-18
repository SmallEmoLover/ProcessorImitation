#pragma once

#include "Task.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Класс списков
*/

class Node
{
    private:
        Task data;
        Node *next;
        
    public:
        //Вставка в список после prev
        Node* insert(Task data, Node *prev);
        //Получение данных
        Task getData();
        //Получение следующего элемента списка
        Node* getNext();
        Node(Task task);
};