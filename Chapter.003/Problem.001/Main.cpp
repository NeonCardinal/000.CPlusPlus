//Chapter 003, Task 001
//03.11.2023, 21:42
#include <iostream>

using namespace std;

int main()
{
	double a;
	double b;
	double x;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	
	x = a;
	a = b;
	b = x;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}