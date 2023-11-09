//Chapter 005, Task 001
//04.11.2023, 15:42
#include <iostream>

using namespace std;

int main()
{
	int n;
	double x[100];

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
		cout << "x[" << i << "] = ";
		cin >> x[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << x[i] << " ";
	}

	return 0;
}