//Chapter 007, Task 008
//07.11.2023, 12:51
#include <iostream>
#include <iomanip>

using namespace std;

void readmat(int, int, int[][30]);
void printmat(int, int, int[][30]);
void multimat(int, int, int, int[][30], int[][30], int[][30]);

int main()
{
	int n;
	int m;
	int k;
	int a[10][30];
	int b[20][30];
	int c[10][30];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 1 || n > 10)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}
	cout << "m = ";
	cin >> m;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (m < 1 || m > 30)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}
	cout << "k = ";
	cin >> k;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (k < 1 || k > 30)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	readmat(n, m, a);
	printmat(n, m, a);
	cout << endl;

	readmat(m, k, b);
	cout << endl;
	printmat(m, k, b);
	cout << endl;

	multimat(n, m, k, a, b, c);
	printmat(n, k, c);

	cout << endl;

	return 0;
}

void readmat(int n, int m, int a[][30])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "mat[" << i << ", " << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void printmat(int n, int m, int a[][30])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(5) << a[i][j];
		}

		cout << endl;
	}
}

void multimat(int n, int m, int k, int a[][30], int b[][30], int c[][30])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i][j] = 0;
			for (int p = 0; p < m; p++)
			{
				c[i][j] += a[i][p] * b[p][j];
			}
		}
	}
}