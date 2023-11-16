//Chapter 012, Task 003
//15.11.2023, 21:32
#include <iostream>
#include <math.h>

using namespace std;

class point
{
private:
	double x;
	double y;
public:
	point(double = 0, double = 0);
	void read();
	void move(double, double);
	void print() const;

	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
};

point::point(double a, double b)
{
	x = a;
	y = b;
}

void point::read()
{
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
}

void point::move(double a, double b)
{
	x += a;
	y += b;
}

void point::print() const
{
	cout << "point(" << x << ", " << y << ")" << endl;
}

double dist(point X, point Y)
{
	return sqrt(pow(Y.get_x() - X.get_y(), 2) + 
	pow(Y.get_y() - X.get_y(), 2));
}

int main()
{
	int n;
	point table[20];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		table[i].read();
	}

	for (int i = 0; i < n; i++)
	{
		table[i].print();
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		table[i].move(2, 4);
		table[i].print();
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			cout << dist(table[i], table[j]) << endl;
		}
	}

	return 0;
}