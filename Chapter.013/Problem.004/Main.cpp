//Chapter 013, Task 004
//19.11.2023, 21:46
#include <iostream>
#include "../Problem.003/linkedqueue.cpp"

using namespace std;

typedef linkedqueue<int> IntQueue;

void read(int n, int* a)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int main()
{
	int n;
	int a;
	int b;
	int arr[100];
	IntQueue q1, q2;

	do
	{
		cout << "n = ";
		cin >> n;
	} while (n < 1 || n > 100);

	read(n, arr);

	cout << "a < b = ";
	cin >> a >> b;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < a)
		{
			cout << arr[i] << " ";
		}
		else if (arr[i] <= b)
		{
			q1.insert(arr[i]);
		}
		else
		{
			q2.insert(arr[i]);
		}
	}

	q1.print();
	q2.print();

	return 0;
}