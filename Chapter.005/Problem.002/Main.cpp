//Chapter 006, Task 002
//04.11.2023, 15:54
#include <iostream>

using namespace std;

int main()
{
	int n;
	int x;
	int cnt = 0;
	int array[20];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 0 || n > 20)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}
	}

	cout << "x = ";
	cin >> x;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		if (array[i] == x)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}