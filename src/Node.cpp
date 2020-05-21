#include "Node.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса списков
*/

//Возвращает указатель на вставленный элемент
Node* Node::insert(Task *data, Node *prev)
{
    Node* cur = new Node(data);
	cur->next = prev->next;
    prev->next = cur;
    return cur;
} 

Task* Node::getData()
{
    return data;
}

Node* Node::getNext()
{
    return next;
}

void Node::setNext(Node *node)
{
    next = node;
}

Node::Node(Task *task)
{
    data = task;
    next = nullptr;
}