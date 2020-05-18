#include "Node.h"

/*
    Кулаков Д.С. :с
    ИВТ-13БО
    Лабораторная по имитированию работы процессора
    Реализация класса списков
*/

Node* Node::insert(Task data, Node *prev)
{
    Node* cur = new Node(data);
    prev->next = cur;
    cur->next = nullptr;
    return cur;
} 

Task Node::getData()
{
    return Node::data;
}

Node* Node::getNext()
{
    return Node::next;
}

void Node::setNext(Node *node)
{
    Node::next = next;
}

Node::Node(Task task)
{
    data = task;
    Node::next = nullptr;
}