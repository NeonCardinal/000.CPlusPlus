//Chapter 001, Task 003
//29.10.2023, 17:44
#include <iostream>

using namespace std;

const double PI = 3.14159265;

int main()
{
	double r;

	cout << "r = ";
	cin >> r;

	double p = 2 * PI * r;
	double s = PI * r * r;

	cout << "p = " << p << endl;
	cout << "s = " << s << endl;

	return 0;
}