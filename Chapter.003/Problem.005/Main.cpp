//Chapter 003, Task 005
//03.11.2023, 22:35
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
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	min = a;

	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	cout << "min{" << a << ", " << b << ", " << c << "} = " << min << "\n";

	return 0;
}