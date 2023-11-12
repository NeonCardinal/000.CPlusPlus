//Chapter 008, Task 002
//07.11.2023, 18:49
#include <iostream>
#include <math.h>

using namespace std;

double accumulate(double (*)(double, double), double, double, double, double (*)(double), double(*)(double));
double pluss(double, double);
double mult(double, double);
double next1(double);
double next2(double);

int main()
{
	double a;
	double b;

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

	cout << accumulate(pluss, 0, a, b, cos, next1) << endl;
	cout << accumulate(mult, 1, a, b, sin, next2) << endl;

	return 0;
}

double accumulate(double (*op)(double, double), double null_val, double a, double b, double(*f)(double), double(*next)(double))
{
	double s = null_val;

	for (double i = a; i <= b + 1e-14; i = next(i))
	{
		s = op(s, f(i));
	}

	return s;
}

double next1(double x)
{
	return x + 1;
}

double next2(double x)
{
	return x + 2;
}

double pluss(double x, double y)
{
	return x + y;
}

double mult(double x, double y)
{
	return x * y;
}