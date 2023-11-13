//Chapter 010, Task 004
//11.11.2023, 18:33
#include <iostream>

using namespace std;

struct rat
{
	int num;
	int den;
	void makerat(int, int);
	int numer();
	int denom();
	void printrat();
};

int gcd(int, int);
rat sumrat(rat&, rat&);
rat subrat(rat&, rat&);
rat multrat(rat&, rat&);
rat quotrat(rat&, rat&);

int main()
{
	rat r1, r2;

	r1.makerat(-1, 2);
	r2.makerat(3, 4);

	sumrat(r1, r2).printrat(); // or rat r = sumrat(r1, r2) r.printrat();
	subrat(r1, r2).printrat();
	multrat(r1, r2).printrat();
	quotrat(r1, r2).printrat();

	return 0;
}

void rat::makerat(int a, int b)
{
	if (a == 0)
	{
		num = 0;
		den = b;
	}
	else
	{
		int g = gcd(abs(a), abs(b));

		if (a > 0 && b > 0 || a < 0 && b < 0)
		{
			num = abs(a) / g;
			den = abs(b) / g;
		}
		else
		{
			num = -abs(a) / g;
			den = abs(b) / g;
		}
	}
}

int rat::numer()
{
	return num;
}

int rat::denom()
{
	return den;
}

void rat::printrat()
{
	cout << num << "/" << den << endl;
}

rat sumrat(rat& r1, rat& r2)
{
	rat r;

	r.makerat(r1.numer() * r2.denom() + r2.numer() * r1.denom(), r1.denom() * r2.denom());

	return r;
}

rat subrat(rat& r1, rat& r2)
{
	rat r;

	r.makerat(r1.numer() & r2.denom() - r2.numer() * r1.denom(), r1.denom() * r2.denom());

	return r;
}

rat multrat(rat& r1, rat& r2)
{
	rat r;

	r.makerat(r1.numer() * r2.numer(), r1.denom() * r2.denom());

	return r;
}

rat quotrat(rat& r1, rat& r2)
{
	rat r;

	r.makerat(r1.numer() * r2.denom(), r1.denom() * r2.numer());

	return r;
}

int gcd(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	return a;
}