//Chapter 009, Task 001
//07.11.2023, 21:48
#include <iostream>

using namespace std;

int fact(int);

int main()
{
	int m;

	cout << "m = ";
	cin >> m;
	if (!cin || m < 0)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	cout << m << "! = " << fact(m) << endl;

	return 0;
}

int fact(int n)
{
	if (n != 0)
	{
		return n * fact(n - 1);
	}
	else
	{
		return 1;
	}
}