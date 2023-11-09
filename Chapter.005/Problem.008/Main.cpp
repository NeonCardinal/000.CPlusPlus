//Chapter 006, Task 008
//04.11.2023, 22:33
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int a[10][10];

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

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
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

	for (int j = 0; j < n; j++)
	{
		int s = 0;

		for (int i = 0; i < n; i++)
		{
			s += a[i][j];
			cout << setw(5) << j << setw(5) << s << endl;
		}
	}

	return 0;
}