//Chapter 009, Task 003
//07.11.2023, 22:01
#include <iostream>

using namespace std;

double pow(double, int);

int main()
{
	int k;
	double a;

	cout << "a = ";
	cin >> a;
	if (!cin)
	{
		cout << "Error!" << endl;
		return 1;
	}
	cout << "k = ";
	cin >> k;
	if (!cin)
	{
		cout << "Error!" << endl;
		return 1;
	}

	cout << "pow(" << a << ", " << k << ") = " << pow(a, k) << endl;

	return 0;
}

double pow(double a, int k)
{
	if (k == 0)
	{
		return 1;
	}

	if (k > 0)
	{
		return a * pow(a, k - 1);
	}

	return 1.00 / pow(a, -k);
}