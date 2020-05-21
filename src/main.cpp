#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include "Task.h"
#include "TaskDispencer.h"

using namespace std;

//Генерация псевдослучайных имён задач
string randomName();

int main()
{
	srand(time(0));

	TaskDispencer *R = new TaskDispencer(3);
	for(int loop = 0; ; loop++)
	{
		//Какое-то время добавляем случайно сгенерированные задачи
		if (loop < 4)
		{
			cout << "New tasks: ";
			for (int i = 0; i < rand() % 4 + 1; i++)
			{
				int type = rand() % 3;
				Task *current = new Task(type, randomName() + to_string(type + 1) + ".exe");
				cout << current->getName() << " ";
				R->addTask(current);
			}
			R->printState();
			Sleep(3000);
		}
		R->dispenceTask();
		//Повышаем задачам процент выполнения
		for (int i = 0; i < 3; i++)
		{
			Task *cur = R->getCurrentTask(i);
			if (cur != nullptr)
			{
				cur->setPercent(cur->getPercent() + rand() % 15 + 25);
				if (cur->getPercent() == 100)
					R->stopTask(cur->getType());
			}
		}
		system("cls");
		R->printState();
		Sleep(3000);
		system("cls");
		//Если задач не осталось - выходим
		if (R->getCurrentTask(0) == nullptr && R->getCurrentTask(1) == nullptr && R->getCurrentTask(2) == nullptr)
			break;
	}
	
	delete R;

	return 0;
}

string randomName()
{
	string name;
	for (int i = 0; i < rand() % 4 + 1; i++)
		name += (char)(rand() % 25 + 97);

	return name;
}
