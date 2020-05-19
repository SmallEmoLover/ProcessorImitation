#include "Stack.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса стека
*/

Stack::Stack()
{
    first = nullptr;
}

void Stack::push(Task *data)
{
    if(Stack::isEmpty())
        first = new Node(data);
    else
    {
        Node* tmp = first;
        first = new Node(data);
        first->setNext(tmp);
    }
}

Task* Stack::pop()
{
    Task* result = first->getData();
    Node *cur = first;
    first = cur->getNext();
    delete cur;
    return result;
}

bool Stack::isEmpty()
{
    if (first == nullptr)
        return true;
    else
        return false;
}