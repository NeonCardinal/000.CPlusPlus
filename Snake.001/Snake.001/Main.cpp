//Console game fun
//10.11.2023, 21:43
#include <iostream>
#include <Windows.h>

using namespace std;

bool gameOver;
const int WIDTH = 70;
const int HEIGHT = 25;

void Setup();
void Draw();

int main()
{
	while (!gameOver)
	{
		//Sleep(1000);
		Draw();
	}

	return 0;
}

void Setup()
{
	gameOver = false;
}

void Draw()
{
	system("cls");

	for (int i = 0; i < WIDTH + 1; i++)
	{
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (j == 0)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}

			if (j == WIDTH - 1)
			{
				cout << "#";
			}
		}

		cout << endl;
	}

	for (int i = 0; i < WIDTH + 1; i++)
	{
		cout << "#";
	}
	cout << endl;
}