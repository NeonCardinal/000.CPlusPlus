//Chapter 010, Task 002
//10.11.2023, 01:29
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM = 5;

struct student
{
	int facnumber;
	char name[30];
	double marks[NUM];
};

void readstudent(student&);
void printstudent(const student&);
void sorttable(int, student* []);
double average(double*);

int main()
{
	int n;
	student table[30];
	student* ptable[30];

	cout << setprecision(2) << setiosflags(ios::fixed);

	do
	{
		cout << "n = ";
		cin >> n;
	} while (n < 1 || n > 30);

	for (int i = 0; i < n; i++)
	{
		readstudent(table[i]);
		ptable[i] = &table[i];
	}

	cout << "Table" << endl;

	for (int i = 0; i < n; i++)
	{
		printstudent(table[i]);

		cout << endl;
	}

	sorttable(n, ptable);

	cout << "New table" << endl;

	for (int i = 0; i < n; i++)
	{
		printstudent(*ptable[i]);

		cout << setw(7) << average(ptable[i]->marks) << endl;
	}

	return 0;
}

void readstudent(student& st)
{
	cout << "Student fak number: ";
	cin >> st.facnumber;

	char p[100];
	cin.getline(p, 100);

	cout << "name: ";
	cin.getline(st.name, 40);

	for (int i = 0; i < NUM; i++)
	{
		int cnt = i;
		cout << cnt + 1 << "-th mark: ";
		cin >> st.marks[i];
	}
}

void printstudent(const student& st)
{
	cout << setw(6) << st.facnumber << " " << st.name;

	for (int i = 0; i < NUM; i++)
	{
		cout << setw(6) << st.marks[i];
	}
}

void sorttable(int n, student* a[])
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		double max = average(a[i]->marks);

		for (int j = i + 1; i < n; i++)
		{
			if (average(a[j]->marks) > max)
			{
				max = average(a[j]->marks);
				k = j;
			}
		}

		student* x;
		x = a[i];
		a[i] = a[k];
		a[k] = x;
	}
}

double average(double* a)
{
	double s = 0;

	for (int i = 0; i < NUM; i++)
	{
		s += a[i];
	}

	return s / NUM;
}