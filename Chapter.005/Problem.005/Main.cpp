//Chapter 006, Task 005
//04.11.2023, 21:20
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int a[100];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 0 || n > 100)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		int min = a[i];
		int k = i;

		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < min)
			{
				min = a[j];
				k = j;
			}
		}

		int x = a[i];
		a[i] = a[k];
		a[k] = x;
	}

	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i];
	}

	cout << endl;

	return 0;
}