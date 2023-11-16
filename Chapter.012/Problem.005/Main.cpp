//Chapter 012, Task 005
//15.11.2023, 22:39
#include <iostream>

using namespace std;

void f(double, int = 10, string = "example1");

int main()
{
	double x = 1.5;
	int y = 5;
	string z = "example2";

	f(x, y, z);
	f(x, y);
	f(x);

	return 0;
}

void f(double x, int y, string z)
{
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
}