//Chapter 008, Task 001
//07.11.2023, 18:41
#include <iostream>
#include <math.h>

using namespace std;

double prod(double, double, double (*)(double), double(*)(double));
double next1(double);
double next2(double);

int main()
{
	cout << prod(1, 2, tan, next1) << endl;
	cout << prod(1, 1.3, atan, next2) << endl;

	return 0;
}

double prod(double a, double b, double (*f)(double), double(*next)(double))
{
	double s = 1.00;

	for (double i = a; i <= b + 1e-14; i = next(i))
	{
		s = s * f(i);
	}

	return s;
}

double next1(double x)
{
	return x + 0.5;
}

double next2(double x)
{
	return x + 0.1;
}