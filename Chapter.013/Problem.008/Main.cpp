//Chapter 013, Task 008
//25.11.2023, 17:39
#include "../Problem.006/LList.cpp"

int main()
{
	LList<int> l1;

	l1.toend(0);
	l1.interstart();

	elem<int>* p = l1.iter();

	for (int i = 1; i <= 9; i++)
	{
		l1.insertbefore(p, i);
	}

	l1.interstart();
	p = l1.iter();

	int x;

	l1.delete_element(p, x);
	cout << x << " ";

	l1.interstart();
	p = l1.iter();
	l1.delete_element(p, x);
	cout << x << " ";

	return 0;
}