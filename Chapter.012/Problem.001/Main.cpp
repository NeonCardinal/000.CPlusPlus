//Chapter 012, Task 001
//15.11.2023, 20:46
#include <iostream>

using namespace std;

struct rat
{
private:
	/// <summary>
	/// test
	/// </summary>
	int numer;
	int denom;
public:
	rat();
	rat(int, int);
	void read();
	int get_numer() const;
	int get_denom() const;
	void print_rat() const;
};

rat sum(rat const&, rat const&);
rat sub(rat const&, rat const&);
rat prod(rat const&, rat const&);
rat quot(rat const&, rat const&);

int main()
{
	rat p(1, 4), q(1, 2);

	p.print_rat();
	q.print_rat();

	cout << "sum: ";
	sum(p, q).print_rat();

	cout << "subtraction: ";
	sub(p, q).print_rat();

	cout << "product: ";
	prod(p, q).print_rat();

	cout << "quotient: ";
	quot(p, q).print_rat();

	return 0;
}

rat::rat()
{
	numer = 0;
	denom = 1;
}

rat::rat(int x, int y)
{
	numer = x;
	denom = y;
}

void rat::read()
{
	cout << "numer = ";
	cin >> numer;

	do
	{
		cout << "denom";
		cin >> denom;
	} while (denom == 0);
}

int rat::get_numer() const
{
	return numer;
}

int rat::get_denom() const
{
	return denom;
}

void rat::print_rat() const
{
	cout << numer << "/" << denom << endl;
}

rat sum(rat const& r1, rat const& r2)
{
	rat r(r1.get_numer() * r2.get_denom() + 
		r2.get_numer() * r1.get_denom(),
		r1.get_denom() * r2.get_denom());

	return r;
}

rat sub(rat const& r1, rat const& r2)
{
	rat r(r1.get_numer() * r2.get_denom() -
		r2.get_numer() * r1.get_denom(),
		r1.get_denom() * r2.get_denom());

	return r;
}

rat prod(rat const& r1, rat const& r2)
{
	rat r(r1.get_numer() * r2.get_numer(),
		r1.get_denom() * r2.get_denom());

	return r;
}

rat quot(rat const& r1, rat const& r2)
{
	rat r(r1.get_numer() * r2.get_denom(),
		r1.get_denom() * r2.get_numer());

	return r;
}
