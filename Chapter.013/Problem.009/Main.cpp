//Chapter 013, Task 009
//25.11.2023, 17:55
#include "../Problem.006/LList.cpp"

int main()
{
	int x;
	LList<int> list;

	list.toend(1);
	list.interstart();

	elem<int>* p = list.iter();

	for (int i = 2; i <= 10; i++)
	{
		list.toend(i);
	}

	list.print();

	list.interstart();
	p = list.iter();

	list.delete_element(p, x);
	cout << "x = " << x << endl;

	list.interstart();
	p = list.iter();
	list.delete_element(p, x);
	cout << "x = " << x << endl;

	list.interstart();
	p = list.iter();
	list.delete_element(p, x);
	cout << "x = " << x << endl;

	return 0;
}