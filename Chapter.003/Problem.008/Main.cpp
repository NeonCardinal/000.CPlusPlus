//Chapter 003, Task 008
//03.11.2023, 23:37
#include <iostream>

using namespace std;

int main()
{
	bool x;
	double a;
	double b;
	double c;

	cout << "a = ";
	cin >> a;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "b = ";
	cin >> b;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "c = ";
	cin >> c;
	if (!cin)
	{
		cout << "Error, bad intput!" << endl;
		return 1;
	}

	x = a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= 0;

	if (x)
	{
		cout << 0 << endl;
	}
	else
	{
		if (a == b && b == c)
		{
			cout << 3 << endl;
		}
		else
		{
			if (a == b || a == c || b == c)
			{
				cout << 2 << endl;
			}
			else
			{
				cout << 1 << endl;
			}
		}
	}

	return 0;
}