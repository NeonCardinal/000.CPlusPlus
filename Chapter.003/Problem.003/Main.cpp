//Chapter 003, Task 003
//03.11.2023, 21:56
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int i;
	int b;
	double x;
	cout << "x > 0? ";
	cin >> x;

	i = floor(x * 10);
	b = i % 10;

	cout << "x = " << x << endl;
	cout << "b = " << b << endl;

	return 0;
}