//Chapter 003, Task 004
//03.11.2023, 22:24
#include <iostream>

using namespace std;

int main()
{
	int a;
	short h, s, d, e;

	cout << "Enter four digit positive number: ";
	cin >> a;

	h = a / 1000;
	s = a / 100 % 10;
	d = a / 10 % 10;
	e = a % 10;

	cout << (h != s && h != d && h != e && s != d && s != e && d != e) << endl;

	return 0;
}