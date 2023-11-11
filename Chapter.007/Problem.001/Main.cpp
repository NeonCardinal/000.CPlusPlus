//Chapter 007, Task 001
//05.11.2023, 19:56
#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}

		return x;
	}
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int r;
	int s;

	cout << "a, b, c, d = ";
	cin >> a >> b >> c >> d;
	if (!cin || a < 1 || b < 1 || c < 1 || d < 1)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	r = gcd(a, b);
	cout << "gdc(a, b) = " << r << endl;

	s = gcd(c, d);
	cout << "gcd(c, d) = " << s << endl;

	cout << "gcd(a, b, c, d) = " << gcd(r, s) << endl;

	return 0;
}