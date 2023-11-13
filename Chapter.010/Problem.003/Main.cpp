//Chapter 010, Task 003
//11.11.2023, 17:12
#include <iostream>

using namespace std;

struct rat
{
	int num;
	int dem;
};

void makerat(rat&, int, int);
int numer(rat&);
int denom(rat&);
rat sumrat(rat&, rat&);
rat subrat(rat&, rat&);
rat multrat(rat&, rat&);
rat quotrat(rat&, rat&);
void printrat(rat&);

void makerat(rat& r, int x, int y)
{
	r.num = x;
	r.dem = y;
}

int numer(rat& r)
{
	return r.num;
}

int denom(rat& r)
{
	return r.dem;
}

rat sumrat(rat& r1, rat& r2)
{
	rat r;

	makerat(r, numer(r1) * denom(r2) + numer(r2) * denom(r1), denom(r1) * denom(r2));

	return r;
}

rat subrat(rat& r1, rat& r2)
{
	rat r;

	makerat(r, numer(r1) * denom(r2) - numer(r2) * denom(r1), denom(r1) * denom(r2));

	return r;
}

rat multrat(rat& r1, rat& r2)
{
	rat r;

	makerat(r, numer(r1) * numer(r2), denom(r1) * denom(r2));

	return r;
}

rat quotrat(rat& r1, rat& r2)
{
	rat r;

	makerat(r, numer(r1) * denom(r2), denom(r1) * numer(r2));

	return r;
}

void printrat(rat& r)
{
	cout << numer(r) << "/" << denom(r) << endl;
}

int main()
{
	rat r, r1, r2;

	makerat(r1, 1, 2);
	makerat(r2, 3, 4);

	r = sumrat(r1, r2);
	printrat(r);

	r = subrat(r1, r2);
	printrat(r);

	r = multrat(r1, r2);
	printrat(r);

	r = quotrat(r1, r2);
	printrat(r);

	return 0;
}