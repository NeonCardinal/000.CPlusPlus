//Chapter 007, Task 002
//05.11.2023, 20:08
#include <iostream>
#include <iomanip>

using namespace std;

void swapi(double* x, double* y)
{
	double work = *x;
	*x = *y;
	*y = work;
}

int main()
{
	double a;
	double b;
	double c;
	double d;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;

	cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

	swapi(&a, &b);
	swapi(&c, &d);

	cout << "After swapi: a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

	return 0;
}