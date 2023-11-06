//Chapter 003, Task 006
//03.11.2023, 22:41
#include <iostream>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double min;

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
		cout << "Error, bad input!" << endl;
		return 1;
	}

	min = a;

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	cout << "min{" << a << ", " << b << ", " << c << "} = " << min << endl;

	return 0;
}