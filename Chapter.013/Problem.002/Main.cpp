//Chapter 013, Task 002
//19.11.2023, 17:43
#include "Queue.cpp"
#include <iostream>

using namespace std;

int main()
{
	queue<int> qu;

	for (int i = 0; i < 10; i++)
	{
		qu.inserelement(i);
	}

	qu.print();

	qu.print();

	return 0;
}