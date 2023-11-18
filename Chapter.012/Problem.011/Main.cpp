//Chapter 012, Task 011
//18.11.2023, 19:51
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

char s[40];

class product
{
private:
	char* name;
	double price;
	int score;
public:
	product();
	~product();
	void print() const;
	bool is_better_score(product const&) const;
	char* get_name() const;
	double get_price() const;
	int get_score() const;
};

void sorttable(int, product* []);

int main()
{
	int size;

	cout << setprecision(4) << setiosflags(ios::fixed);
	cout << "size = ";
	cin >> size;

	product* table = new product[size];
	product** ptable = new product * [size];

	cout << "Table: " << endl;

	for (int i = 0; i < size; i++)
	{
		table[i].print();

		cout << endl;

		ptable[i] = &table[i];
	}

	sorttable(size, ptable);

	cout << "New table: " << endl;

	for (int i = 0; i < size; i++)
	{
		ptable[i]->print();

		cout << setw(7) << ptable[i]->get_score() / ptable[i]->get_price() << endl;
	}

	delete[size] table;
	delete[] ptable;

	return 0;
}

product::product()
{
	cout << "name: ";
	cin >> s;
	name = new char[strlen(s) + 1];
	strcpy(name, s);
	cout << "price: ";
	cin >> price;
	cout << "score: ";
	cin >> score;
}

product::~product()
{
	delete name;
}

void product::print() const
{
	cout << setw(25) << name << setw(10) << price << setw(12) << score << endl;
}

bool product::is_better_score(product const& pt) const
{
	return score / price > pt.score / pt.price;
}

char* product::get_name() const
{
	return name;
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
			if (a[j]->is_better_score(*max))
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