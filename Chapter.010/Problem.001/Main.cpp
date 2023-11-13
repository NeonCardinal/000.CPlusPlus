//Chapter 010, Task 011
//10.11.2023, 00:41
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM = 5;

struct student
{
	int facnum;
	char name[40];
	double marks[NUM];
};

void readstudent(student&);
void printstudent(const student&);
void sorttable(int, student[]);
double average(double*);

int main()
{
	int n;
	student table[30];

	cout << setprecision(2) << setiosflags(ios::fixed);

	do
	{
		cout << "n = ";
		cin >> n;
	} while (n < 1 || n > 30);

	for (int i = 0; i < n; i++)
	{
		readstudent(table[i]);
	}

	cout << "Table: " << endl;

	for (int i = 0; i < n; i++)
	{
		printstudent(table[i]);
	}

	sorttable(n, table);
	cout << "New table:" << endl;
	
	for (int i = 0; i < n; i++)
	{
		printstudent(table[i]);

		cout << setw(7) << average(table[i].marks) << endl;
	}

	return 0;
}

void readstudent(student& st)
{
	cout << "Student fak number: ";
	cin >> st.facnum;

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
	cout << setw(6) << st.facnum << " " << st.name;

	for (int i = 0; i < NUM; i++)
	{
		cout << setw(6) << st.marks[i];
	}
}

void sorttable(int n, student st[])
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		double max = average(st[i].marks);

		for (int j = i + 1; j < n; j++)
		{
			if (average(st[j].marks) > max)
			{
				max = average(st[j].marks);
				k = j;
			}
		}

		student x = st[i];
		st[i] = st[k];
		st[k] = x;
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