//Chapter 008, Task 004
//07.11.2023, 21:40
#include <iostream>
#include <math.h>

using namespace std;

typedef double (*f_type)(double);
f_type table(char ch);

int main()
{
	char ch;

	cout << "ch = ";
	cin >> ch;
	if (ch < 'a' || ch > 'd')
	{
		cout << "Error, incorrect input!" << endl;
	}
	else
	{
		double x;

		cout << "x = ";
		cin >> x;

		cout << table(ch)(x) << endl;
	}

	return 0;
}

f_type table(char ch)
{
	switch (ch)
	{
	case 'a':
		return sin;
		break;
	case 'b':
		return cos;
		break;
	case 'c':
		return exp;
		break;
	case 'd':
		return log;
		break;
	default:
		cout << "Error" << endl;
		return tan;
		break;
	}
}