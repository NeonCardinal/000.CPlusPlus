//Chapter 011, Task 006
//14.11.2023, 22:50
#include <iostream>

using namespace std;

int n;
int s = -1;
bool way = false;
int x[100];
int arr[10][10] = { 0 };

void writeway();
bool member(int, int, int*);
void foundallway(int, int);

int main()
{
	do
	{
		cout << "n = ";
		cin >> n;
	}
	while(n < 0 || n > 10);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			cout << "connection between " << i << " and " << j << " 0/1? ";
			cin >> arr[i][j];
			arr[j][i] = arr[i][j];
		}
	}

	int i, j;

	do
	{
		cout << "start and filnal towns: ";
		cin >> i >> j;
	} while (i < 0 || i > 9 || j < 0 || j > 9);

	foundallway(i, j);

	if (!way)
	{
		cout << "no" << endl;
	}

	return 0;
}

void writeway()
{
	for (int i = 0; i <= s; i++)
	{
		cout << x[i] << " ";
	}

	cout << endl;
}

bool member(int x, int n, int* a)
{
	if (n == 1)
	{
		return a[0] == x;
	}

	return a[0] == x || member(x, n - 1, a + 1);
}

void foundallway(int i, int j)
{
	if (i == j)
	{
		way = true;
		s++;
		x[s] == i;
		writeway();
	}
	else
	{
		s++;
		x[s] = i;

		for (int k = 0; k < n; k++)
		{
			if (arr[i][k] == 1 && !member(k, s + 1, x))
			{
				arr[i][k] = 0;
				arr[k][i] = 0;
				foundallway(k, j);
				arr[i][k] = 1;
				arr[k][i] = 1;
				s--;
			}
		}
	}
}