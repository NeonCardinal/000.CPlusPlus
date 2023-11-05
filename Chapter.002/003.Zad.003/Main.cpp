//Chapter 002, Task 003
//31.10.2023, 18:39
#include <iostream>
#include <math.h>

using namespace std;;

int main()
{
	bool b;
	double x;

	cout << "x = ";
	cin >> x;

	b = x < ceil(x);

	cout << "x = ";
	cin >> x;

	b = b && (x < floor(x));

	cout << "b = " << b << endl;

	return 0;
}