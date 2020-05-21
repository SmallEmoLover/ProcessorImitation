#include "Stack.h"
#include <iostream>

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

Stack::~Stack()
{
	while (true)
	{
		Node* cur = first;
		if (first == nullptr)
			return;
		first = first->getNext();
        delete cur->getData();
		delete cur;
	}
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

void Stack::print()
{
    if (isEmpty())
    {
        std::cout << "Empty :c\n";
        return;
    }

    Node* cur = first;
    while(cur != nullptr)
    {
        std::cout << cur->getData()->getName() << " ";
        cur = cur->getNext();
    }
}