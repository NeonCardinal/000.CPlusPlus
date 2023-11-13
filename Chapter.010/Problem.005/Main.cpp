//Chapter 010, Task 005
//11.11.2023, 19:34
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM = 5;

class Student
{
private:
	int facnumber;
	char name[30];
public:
	double marks[NUM];
	void readstudent();
	void printstudent();
};

void sorttable(int, Student[]);
double average(double*);

int main()
{
	int n;
	Student table[30];

	cout << setprecision(2) << setiosflags(ios::fixed);

	do
	{
		cout << "number of students? ";
		cin >> n;
	} while (n < 1 || n > 30);

	for (int i = 0; i < n; i++)
	{
		table[i].readstudent();
	}

	cout << "Table: " << endl;

	for (int i = 0; i < n; i++)
	{
		table[i].printstudent();
		cout << endl;
	}

	sorttable(n, table);

	cout << "New table: " << endl;

	for (int i = 0; i < n; i++)
	{
		table[i].printstudent();
		cout << setw(7) << average(table[i].marks) << endl;
	}

	return 0;
}

void Student::readstudent()
{
	cout << "fakulteten nomer: ";
	cin >> facnumber;

	char p[100];
	cin.getline(p, 100);

	cout << "name: ";
	cin.getline(name, 40);

	for (int i = 0; i < NUM; i++)
	{
		cout << i << "-th mark: ";
		cin >> marks[i];
	}
}

void Student::printstudent()
{
	cout << setw(6) << facnumber << setw(30) << name;

	for (int i = 0; i < NUM; i++)
	{
		cout << setw(6) << marks[i];
	}
}

void sorttable(int n, Student st[])
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		double max = average(st[i].marks);

		for (int j = i + 1; j < n; j++)
		{
			if (average(st[j].marks) > max)
			{
				max = j;
				k = j;
			}
		}

		Student x = st[i];
		st[i] = st[k];
		st[k] = x;
	}
}

double average(double* d)
{
	double s = 0;

	for (int i = 0; i < NUM; i++)
	{
		s += d[i];
	}

	return s / NUM;
}

