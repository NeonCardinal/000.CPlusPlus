//Chapter 002, Task 002
//31.10.2023, 18:04
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a = 209.65;
	double b = 63.75658;

	cout << setprecision(3) << setiosflags(ios::fixed);
	cout << setw(10) << a << endl;
	cout << setw(10) << b << endl;
	cout << resetiosflags(ios::fixed);
	cout << setw(20) << a << endl;
	cout << setw(20) << b << endl;

	return 0;
}