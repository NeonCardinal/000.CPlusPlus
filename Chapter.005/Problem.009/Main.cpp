//Chapter 006, Task 009
//04.11.2023, 22:45
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int m = -1;
	int n;
	int a[10][10];
	int b[100];

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

	//Vyvejdane na matricata
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << ", " << j << "] = ";
			cin >> a[i][j];
			if (!cin)
			{
				cout << "Error, bad input!";
				return 1;
			}
		}
	}

	//izvejdane na redovete na a
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}

		cout << endl;
	}

	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			m++;
			b[m] = a[i][j];
		}

		m++;
	}

	for (int i = 0; i < m; i++)
	{
		cout << setw(5) << b[i];
	}

	cout << endl;

	for (int i = 0; i < m - 1; i++)
	{
		int k = i;
		int min = b[i];

		for (int j = 0; j < m; j++)
		{
			if (b[j] < min)
			{
				min = b[j];
				k = j;
			}
		}

		int x = b[i];
		b[i] = b[k];
		b[k] = x;
	}

	for (int i = 0; i < m; i++)
	{
		cout << setw(5) << b[i];
	}

	cout << endl;

	m = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			m++;
			a[i][j] = b[m];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j];
		}

		cout << endl;
	}

	return 0;
}