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
		if (loop < 6)
		{
			cout << "New tasks: ";
			for (int i = 0; i < rand() % 4 + 1; i++)
			{
				Task *current = new Task(rand() % 3, randomName() + ".exe");
				cout << current->getName() << " ";
				R->addTask(current);

				//cout << "Processor 1: Current task = " << R->getCurrentTask(0)->getName();
			}
		}
		R->dispenceTask();
		R->printState();
		Sleep(3000);
		for (int i = 0; i < 3; i++)
		{
			Task *cur = R->getCurrentTask(i);
			if (cur != nullptr)
			{
				cur->setPercent(cur->getPercent() + rand() % 15 + 15);
				if (cur->getPercent() >= 100)
					R->stopTask(cur->getType());
			}
		}
		system("cls");
		R->printState();
		Sleep(3000);
		system("cls");
	}
	


	
	return 0;
}

string randomName()
{
	string name;
	for (int i = 0; i < rand() % 4 + 1; i++)
		name += (char)(rand() % 25 + 97);

	return name;
}
