//Chapter 012, Task 006
//15.11.2023, 22:54
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class product
{
private:
	char name[20];
	double price;
	int score;
public:
	void read();
	void print() const;
	bool is_better_from(product const&) const;
	double get_price() const;
	int get_score() const;
};

void sorttable(int, product* []);

int main()
{
	int n;
	product table[300] ;
	product* ptable[300];

	do
	{
		cout << "number of products: ";
		cin >> n;
	} while (n < 1 || n > 300);

	for (int i = 0; i < n; i++)
	{
		table[i].read();
		ptable[i] = &table[i];
	}

	cout << "Table: " << endl;

	for (int i = 0; i < n; i++)
	{
		table[i].print();
		cout << endl;
	}

	sorttable(n, ptable);

	cout << "New table: " << endl;

	for (int i = 0; i < n; i++)
	{
		ptable[i]->print();

		cout << setw(7) << ptable[i]->get_score() / ptable[i]->get_price() << endl;
	}

	return 0;
}

void product::read()
{
	cout << "name = ";
	cin >> name;
	cout << "price = ";
	cin >> price;
	cout << "score = ";
	cin >> score;
}

void product::print() const
{
	cout << setw(25) << name << setw(10) << price << setw(12) << score << endl;
}

bool product::is_better_from(product const& x) const
{
	return score / price > x.score / x.price;
}

double product::get_price() const
{
	return price;
}

int product::get_score() const
{
	return score;
}

void sorttable(int n, product* a[])
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		product* max = a[i];

		for (int j = i + 1; j < n; j++)
		{
			if (a[j]->is_better_from(*max))
			{
				max = a[j];
				k = j;
			}
		}

		max = a[i];
		a[i] = a[k];
		a[k] = max;
	}
}