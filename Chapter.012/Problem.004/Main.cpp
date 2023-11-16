//Chapter 012, Task 004
//15.11.2023, 22:01
#include <iostream>

using namespace std;

class point
{
private:
	double x;
	double y;
	double z;
public:
	void read();
	double getX() const;
	double getY() const;
	double getZ() const;
};

class piramid
{
private:
	double a;
	double b;
	double c;
public:
	void read();
	bool isPointIn(point const&) const;
};

void point::read()
{
	cout << "Point: " << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;
}

double point::getX() const
{
	return x;
}

double point::getY() const
{
	return y;
}

double point::getZ() const
{
	return z;
}

void piramid::read()
{
	cout << "a =";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
}

bool piramid::isPointIn(point const& p) const
{
	return (p.getX() >= 0 && p.getY() >= 0 && p.getZ() >= 0
		&& p.getX() / a + p.getY() / b + p.getZ() / c <= 1);
}

int main()
{
	int n;
	int x;
	piramid pd;
	point pt[100];

	cout << "Input piramid: ";
	pd.read();

	cout << "number of points: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "point: " << i << ": ";
		pt[i].read();
	}

	x = 0;

	while (x <= n - 2 && pd.isPointIn(pt[x]))
	{
		x++;
	}

	if (pd.isPointIn(pt[x]))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}