//Chapter 013, Task 003
//19.11.2023, 21:32
#include <iostream>
#include "linkedqueue.cpp"

using namespace std;

typedef linkedqueue<int> IntQueue;
typedef linkedqueue<IntQueue> QueueQueue;

void linkedqueue<IntQueue>::print()
{
	IntQueue x;

	while (deleteelem(x))
	{
		x.print();
	}

	cout << endl;
}

int main()
{
	QueueQueue qq;

	for (int i = 0; i < 5; i++)
	{
		IntQueue q;

		for (int j = i; j <= 2 * i; j++)
		{
			q.insert(j);
		}

		qq.insert(q);
	}

	qq.print();

	return 0;
}