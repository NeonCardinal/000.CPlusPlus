//Chapter 012, Task 012
//18.11.2023, 22:00
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
	friend rat operator+(rat const&, rat const&);
	friend rat operator-(rat const&, rat const&);
	friend rat operator*(rat const&, rat const&);
	friend rat operator/(rat const&, rat const&);
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

rat operator+(rat const& r1, rat const& r2)
{
	rat r(r1.numer * r2.denom + r2.numer * r1.denom, r1.denom * r2.denom);

	return r;
}

rat operator-(rat const& r1, rat const& r2)
{
	rat r(r1.numer * r2.denom - r2.numer * r1.denom, r1.denom * r2.denom);

	return r;
}

rat operator*(rat const& r1, rat const& r2)
{
	rat r(r1.numer * r2.numer, r1.denom * r2.denom);

	return r;
}

rat operator/(rat const& r1, rat const& r2)
{
	rat r(r1.numer * r2.numer, r1.numer * r2.denom);

	return r;
}