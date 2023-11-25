//Chapter 013, Task 007
//25.11.2023, 17:24
#include <iostream>
#include "../Problem.006/LList.cpp"

using namespace std;

int main()
{
	LList<int> l1, l2, l3;

	l1.toend(1);
	l1.toend(2);
	l1.toend(3);
	l1.toend(4);

	l2.toend(5);
	l2.toend(6);

	l3 = l1;

	cout << "l1 = ";
	l1.print();
	cout << "l2 = ";
	l2.print();
	cout << "l3 = ";
	l3.print();

	l1.reverse();

	cout << "l1 reversed = ";
	l1.print();

	return 0;
}