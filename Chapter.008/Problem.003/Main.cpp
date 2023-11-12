//Chapter 008, Task 003
//07.11.2023, 21:05
#include <iostream>
#include <math.h>

using namespace std;

typedef double(*type1)(double, double);
typedef double(&type2)(int);
typedef int(*type3)(int);

double x;
double accumulate(type1, double, int, int, type2, type3);
double f(int);
int next(int);
double sum(double, double);

int main()
{
	int n;

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	cout << "x = ";
	cin >> x;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	cout << accumulate(sum, 0, 0, n, f, next) << endl;

	return 0;
}

double f(int i)
{
	int p = 1;

	for (int j = 0; j <= i; j++)
	{
		p *= i;
	}

	return pow(x, i) / p;
}

int next(int x)
{
	return x + 1;
}

double sum(double x, double y)
{
	return x + y;
}

double accumulate(type1 op, double null_val, int a, int b, type2 f, type3 next)
{
	double s = null_val;

	for (int i = a; i <= b; i = next(i))
	{
		s = op(s, f(i));
	}

	return s;
}