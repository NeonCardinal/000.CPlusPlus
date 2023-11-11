//Chapter 007, Task 004
//05.11.2023, 21:08
#include <iostream>

using namespace std;

int gcd(int, int);
void readarr(int, int[]);
void printarr(int, int[]);

int main()
{
	int n;
	int a[20];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	readarr(n, a);
	printarr(n, a);

	int x = a[0];

	for (int i = 0; i < n; i++)
	{
		x = gcd(x, a[i]);
	}

	cout << "gcd = " << x << endl;

	return 0;
}

int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	return a;
}

void readarr(int n, int a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return;
		}
	}
}

void printarr(int n, int a[])
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}