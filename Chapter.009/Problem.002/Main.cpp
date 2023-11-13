//Chapter 009, Task 002
//07.11.2023, 21:55
#include <iostream>

using namespace std;

int gcd(int, int);

int main()
{
	int a;
	int b;

	cout << "a = ";
	cin >> a;
	if (!cin || a < 1)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	cout << "b = ";
	cin >> b;
	if (!cin || b < 1)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	cout << "gcd(" << a << ", " << b << ") = " << gcd(a, b) << endl;

	return 0;
}

int gcd(int a, int b)
{
	if (a == b)
	{
		return a;
	}
	
	if (a > b)
	{
		return gcd(a - b, b);
	}

	return gcd(a, b - a);
}