//Chapter 006, Task 002
//05.11.2023, 18:28
#include <iostream>

using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i <= 5; i++)
	{
		cout << a[i] << endl;
	}

	cout << endl;

	for (int i = 0; i <= 5; i++)
	{
		cout << *(a + i) << endl;
	}

	cout << endl;

	int* p = a;
	for (int i = 0; i <= 5; i++)
	{
		cout << *p << endl;
		p++;
	}

	return 0;
}