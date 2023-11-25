//Chapter 013, Task 005
//25.11.2023, 13:31
#include <iostream>
#include "../Problem.003/linkedqueue.cpp"

using namespace std;

struct people
{
	char name[31];
	int age;
};

typedef linkedqueue<people> pqueue;

void linkedqueue<people>::print() //предефиниране на шаблонната функция
{
	people x;

	while (deleteelem(x))
	{
		cout << x.name << " " << x.age; // << endl;
	}
}

void minqueue(pqueue q, people& min, pqueue& newq)
{
	people x;

	q.deleteelem(min);

	while (q.deleteelem(x))
	{
		if (x.age < min.age)
		{
			newq.insert(min);
			min = x;
		}
		else
		{
			newq.insert(x);
		}
	}
}

void sortqueue(pqueue q, pqueue& nq)
{
	while (!q.empty())
	{
		people min;
		pqueue q1;
		minqueue(q, min, q1);
		nq.insert(min);
		q = q1;
	}
}

pqueue merge(pqueue p, pqueue q)
{
	people x = { "xxx", -1 }, y = { "yyy", -1 };

	p.insert(x);
	q.insert(y);

	pqueue r;

	p.deleteelem(x);
	q.deleteelem(y);

	while (!p.empty() && !q.empty())
	{
		if (x.age <= y.age)
		{
			r.insert(x);
			p.deleteelem(x);
		}
		else
		{
			r.insert(y);
			q.deleteelem(y);
		}
	}

	if (!q.empty())
	{
		do
		{
			r.insert(x);
		} while (q.deleteelem(x) && x.age != -1);
	}
	else
	{
		do
		{
			r.insert(y);
		} while (p.deleteelem(y) && y.age != -1);
	}

	return r;
}

int main()
{
	people s;
	pqueue q1, q2, r, q, p;
	int n;

	cout << "First queue: n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Name: ";
		cin >> s.name;
		cout << "Age: ";
		cin >> s.age;
		q1.insert(s);
	}

	cout << "Second queue: n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Name: ";
		cin >> s.name;
		cout << "Age: ";
		cin >> s.age;
		q2.insert(s);
	}

	sortqueue(q1, p);
	sortqueue(q2, q);
	r = merge(p, q);

	r.print();

	return 0;
}