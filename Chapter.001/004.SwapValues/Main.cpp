//Chapter 001, Task 004
//29.10.2023, 18:00
#include <iostream>

using namespace std;

int main()
{
	int a, b, temp;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	cout << "Before: a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "After: a = " << a << ", b = " << b << endl;

	return 0;
}