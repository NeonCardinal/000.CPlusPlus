//Chapter 012, Task 013
//18.11.2023, 22:20
#include <iostream>

using namespace std;

class rat
{
private:
	int numer;
	int denom;
public:
	rat(int = 0, int = 1);
	~rat();
	void read();
	int get_numer() const;
	int get_denom() const;
	void print() const;
	rat operator+(rat const&) const;
	rat operator-(rat const&) const;
	rat operator*(rat const&) const;
	rat operator/(rat const&) const;
};

int main()
{
	rat p(1, 3), q(2, 5), r(p + q);

	r.print();

	r = p - q - q;

	r.print();

	return 0;
}

rat::rat(int a, int b)
{
	numer = a;
	denom = b;
	cout << "construct!" << endl;
}

rat::~rat()
{
	cout << "destruct number: " << numer << "/" << denom << endl;
}

void rat::read()
{
	cout << "numer: ";
	cin >> numer;

	do
	{
		cout << "denom: ";
		cin >> denom;
	} while (denom < 1);
}

void rat::print() const
{
	cout << "result: " << numer << "/" << denom << endl;
}

int rat::get_numer() const
{
	return numer;
}

int rat::get_denom() const
{
	return denom;
}

rat rat::operator+(rat const& r1) const
{
	rat r(numer * r1.denom + r1.numer * denom, denom * r1.denom);

	return r;
}

rat rat::operator-(rat const& r1) const
{
	rat r(numer * r1.denom - denom * r1.numer, denom * r1.numer);

	return r;
}

rat rat::operator*(rat const& r1) const
{
	rat r(numer * r1.numer, denom * r1.denom);

	return r;
}

rat rat::operator/(rat const& r1) const
{
	rat r(numer * r1.denom, denom * r1.numer);

	return r;
}