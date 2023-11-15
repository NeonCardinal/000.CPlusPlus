//Chapter 011, Task 004
//14.11.2023, 21:18
#include <iostream>

using namespace std;

int n;
bool way = false;
char mat[20][20];

void init();
void writelab();
void labyrinth(int, int);

int main()
{
	init();
	labyrinth(0, 0);

	if (!way)
	{
		cout << "no" << endl;
	}

	return 0;
}

void init()
{
	do
	{
		cout << "n = ";
		cin >> n;
	} while (n < 1 || n > 20);

	do
	{
		cout << "labyrinth: " << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << "mat{" << i << ", " << j << "} = ";
				cin >> mat[i][j];
			}
		}
	} while (mat[0][0] != '0');
}

void writelab()
{
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mat[i][j] << " ";
		}

		cout << endl;
	}
}

void labyrinth(int k, int l)
{
	if (k == n - 1 && l == n - 1)
	{
		mat[k][l] = '*';
		way = true;
		writelab();
	}
	else
	{
		if (k >= 0 && k <= n - 1 && l >= 0 && l <= n - 1)
		{
			if (mat[k][l] == '0')
			{
				mat[k][l] = '*';
				labyrinth(k + 1, l);
				labyrinth(k, l + 1);
				labyrinth(k - 1, l);
				labyrinth(k, l - 1);
				mat[k][l] = '0';
			}
		}
	}
}
