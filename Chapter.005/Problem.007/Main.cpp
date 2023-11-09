//Chapter 006, Task 007
//04.11.2023, 22:23
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int m;
	int n;
	int a[10][20];
	int b[10][20];

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
	if (m < 1 || m > 20)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << ", " << j << "] = ";
			cin >> a[i][j];
			if (!cin)
			{
				cout << "Error, bad input!" << endl;
				return 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			b[i][j] = a[i][j] + 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << setw(5) << b[i][j];
		}

		cout << endl;
	}

	return 0;
}