#include "Queue.h"
#include "Node.h"

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

void Queue::queue(Task data)
{
    if (Queue::isEmpty())
        first = last = new Node(data);
    else
        last = last->insert(data, last);
}

Task Queue::dequeue()
{
    if (Queue::isEmpty())
    {
        //TODO: вывод ошибки
    }
    Task result = first->getData();
    Node* cur = first;
    if (first == last)
        first = last = nullptr;
    else
        first = cur->getNext();
    delete cur;
    return result;
}