//Chapter 003, Task 011
//04.11.2023, 13:34
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	double x, y;

	cout << "=============================================" << endl;
	cout << "|             y = x - 5                -> 1 |" << endl;
	cout << "|             y = sin(x)               -> 2 |" << endl;
	cout << "|             y = cos(x)               -> 3 |" << endl;
	cout << "|             y = exp(x)               -> 4 |" << endl;
	cout << "=============================================" << endl;
	cout << "1, 2, 3 or 4 = ";
	cin >> i;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	if (i == 1 || i == 2 || i == 3 || i == 4)
	{
		cout << "x = ";
		cin >> x;
		if (!cin)
		{
			cout << "Error, bad input!" << endl;
			return 1;
		}

		switch (i)
		{
		case 1:
			y = x - 5;
			break;
		case 2:
			y = sin(x);
			break;
		case 3:
			y = cos(x);
			break;
		case 4:
			y = exp(x);
			break;
		}

		cout << "y = " << y << endl;
	}
	else
	{
		cout << "Error, bad choise!" << endl;
		return 1;
	}

	return 0;
}