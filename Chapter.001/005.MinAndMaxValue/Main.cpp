//Chapter 001, Task 005
//29.10.2023, 18:04
#include <iostream>

using namespace std;

int main()
{
	int a, b, min, max;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;

	return 0;
}