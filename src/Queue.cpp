#include "Queue.h"
#include "Node.h"
#include <iostream>

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса очереди
*/

Queue::Queue()
{
    first = last = nullptr;
}

bool Queue::isEmpty()
{
    if(first == nullptr)
        return true;
    else
        return false;
}

void Queue::queue(Task *data)
{
    if (Queue::isEmpty())
        first = last = new Node(data);
    else
        last = last->insert(data, last);
}

Task* Queue::dequeue()
{
    Task* result = first->getData();
    Node* cur = first;
    if (first == last)
        first = last = nullptr;
    else
        first = cur->getNext();
    delete cur;
    return result;
}

void Queue::print()
{
    if (isEmpty())
    {
        std::cout << "Empty :c\n";
        return;
    }

    Node* cur = first;
    while(cur != nullptr)
    {
        std::cout << cur->getData()->getName();
        cur = cur->getNext();
    }
}