//Chapter 006, Task 006
//04.11.2023, 21:35
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int m;
	int p1 = 0;
	int p2 = 0;
	int p3 = -1;
	int a[20];
	int b[10];
	int c[30];

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

	cout << "m = ";
	cin >> m;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (m < 0 || m > 10)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "] = ";
		cin >> b[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}
	}

	while (p1 <= n - 1 && p2 <= m - 1)
	{
		if (a[p1] <= b[p2])
		{
			p3++;
			c[p3] = a[p1];
			p1++;
		}
		else
		{
			p3++;
			c[p3] = b[p2];
			p2++;
		}
	}

	if (p1 > n - 1)
	{
		for (int i = p2; i <= m - 1; i++)
		{
			p3++;
			c[p3] = b[i];
		}
	}
	else
	{
		for (int i = p1; i <= n - 1; i++)
		{
			p3++;
			c[p3] = a[i];
		}
	}

	for (int i = 0; i <= p3; i++)
	{
		cout << setw(10) << c[i];
	}

	cout << endl;

	return 0;
}