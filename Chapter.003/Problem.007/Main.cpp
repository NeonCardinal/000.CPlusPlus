//Chapter 003, Task 007
//03.11.2023, 22:57
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a;
	int b;
	int c;

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

	if (b < a)
	{
		int x = a;
		a = b;
		b = x;
	}
	if (c < a)
	{
		int x = c;
		c = a;
		a = x;
	}
	if (c < b)
	{
		int x = c;
		c = b;
		b = x;
	}

	cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;

	return 0;
}