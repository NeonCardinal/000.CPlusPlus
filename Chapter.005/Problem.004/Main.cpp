//Chapter 006, Task 004
//04.11.2023, 16:48
#include <iostream>

using namespace std;

int main()
{
	int n;
	int cnt = 0;
	int a[20];

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
		cout << "a[" << i << "] = ";
		cin >> a[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}
	}
 
	for (int i = 0; i <= n - 2; i++)
	{
		if (a[i] >= a[i + 1])
		{
			cnt++;
		}
	}

	if (cnt == n - 1)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}