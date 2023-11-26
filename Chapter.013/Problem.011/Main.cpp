//Chapter 013, Task 011
//26.11.2023, 13:23
#include "../Problem.010/CirList.cpp"

typedef CirList<int> IntList;

void create(int m, IntList& list)
{
	for (int i = 1; i <= m; i++)
	{
		list.ToEnd(i);
	}
}

void josiff(int n, IntList list)
{
	list.IterStart();

	elem<int>* p = list.Iter(), * q;

	while (p != p->link)
	{
		q = p;

		for (int i = 1; i <= n - 1; i++)
		{
			q = q->link;
		}

		p = q->link;

		int x;
		list.DeleteElement(q, x);

		cout << x << " ";
	}

	cout << p->inf << endl;
}

int main()
{
	IntList list;

	create(10, list);
	list.Print();

	josiff(2, list);

	return 0;
}