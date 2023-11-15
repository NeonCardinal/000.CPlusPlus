//Chapter 011, Task 005
//14.11.2023, 21:45
#include <iostream>

using namespace std;

char m[20][20];
char p[20][20];
int n;
int b = 0;
int bmin = 0;
bool way = false;

void init();
void opt();
void writelab();
void labyrinth(int, int);

int main()
{
	init();
	labyrinth(0, 0);
	writelab();

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
				cin >> m[i][j];
			}
		}
	} while (m[0][0] != '0');
}

void opt()
{
	if (b < bmin || bmin == 0)
	{
		bmin = b;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				p[i][j] = m[i][j];
			}
		}
	}
}

void writelab()
{
	if (!way)
	{
		cout << "no way" << endl;
	}
	else
	{
		cout << "yes" << endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << p[i][j] << " ";
			}

			cout << endl;
		}
	}
}

void labyrinth(int k, int l)
{
	if (k == n - 1 && l == n - 1)
	{
		way = true;
		m[k][l] = '*';
		opt();
	}
	else
	{
		if (k >= 0 && k <= n - 1 && l >= 0 && l <= n - 1)
		{
			if (m[k][l] == '0')
			{
				m[k][l] = '*';
				b++;
				labyrinth(k + 1, l);
				labyrinth(k, l + 1);
				labyrinth(k - 1, l);
				labyrinth(k, l - 1);
				m[k][l] = '0';
				b--;
			}
		}
	}
}