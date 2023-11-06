//Chapter 003, Task 009
//04.11.2023, 01:07
#include <iostream>

using namespace std;

int main()
{
	int k;
	double x;
	double y;

	cout << "x = ";
	cin >> x;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "y = ";
	cin >> y;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	if (x * y == 0)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	if (x * y > 0)
	{
		if (x > 0)
		{
			k = 1;
		}
		else
		{
			k = 3;
		}
	}
	else
	{
		if (x > 0)
		{
			k = 4;
		}
		else
		{
			k = 2;
		}
	}

	cout << "The point is in: " << k << endl;

	return 0;
}