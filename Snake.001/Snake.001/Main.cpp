//Console game fun
//10.11.2023, 21:43
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

const int width = 80;
const int height = 20;
int x, y;
int fruitX, fruitY;
int score;
int snakeTailX[100], snakeTailY[100];
int snakeTailLen;
enum snakesDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
snakesDirection sDir;
bool isGameOver;

void GameInit()
{
	isGameOver = false;
	sDir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void RenderGame(string playerName)
{
    system("cls");

	for (int i = 0; i <= width + 1; i++)
	{
		cout << "=";
	}
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= width; j++)
		{
			if (j == 0 || j == width)
			{
				cout << "|";
			}

			if (i == y && j == x)
			{
				cout << "O";
			}
			else if (i == fruitY && j == fruitX)
			{
				cout << "#";
			}
			else
			{
				bool pTail = false;

				for (int k = 0; k < snakeTailLen; k++)
				{
					if (snakeTailX[k] == j && snakeTailY[k] == i)
					{
						cout << "o";
						pTail = true;
					}
				}

				if (!pTail)
				{
					cout << " ";
				}
			}
		}

		cout << endl;
	}

	for (int i = 0; i <= width + 1; i++)
	{
		cout << "=";
	}
	cout << endl;

	cout << playerName << "'s score: " << score << endl;
}

void UpdateGame()
{
	int prevX = snakeTailX[0];
	int prevY = snakeTailY[0];
	int prev2X, prev2Y;
	snakeTailX[0] = x;
	snakeTailY[0] = y;

	for (int i = 1; i < snakeTailLen; i++)
	{
		prev2X = snakeTailX[i];
		prev2Y = snakeTailY[i];
		snakeTailX[i] = prevX;
		snakeTailY[i] = prevY;
	}

	switch (sDir)
	{
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}

	if (x >= width || x < 0 || y >= height || y < 0)
	{
		isGameOver = true;
	}

	for (int i = 0; i < snakeTailLen; i++)
	{
		if (snakeTailX[i] == x && snakeTailY[i] == y)
		{
			isGameOver = true;
		}
	}

	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
		snakeTailLen++;
	}
}

void UserInput()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			sDir = LEFT;
			break;
		case 'd':
			sDir = RIGHT;
			break;
		case 'w':
			sDir = UP;
			break;
		case 's':
			sDir = DOWN;
			break;
		case 'x':
			isGameOver = true;
			break;
		}
	}
}

int main()
{
	GameInit();

	while (!isGameOver)
	{
		RenderGame("Eraser");
		UserInput();
		UpdateGame();

		Sleep(150);
	}

	return 0;
}