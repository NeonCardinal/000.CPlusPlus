//Chapter 012, Task 014
//18.11.2023, 22:54
#include <iostream>

using namespace std;

template <class T>
void read(int n, T* a)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

template <class T>
T minarray(int n, T* a)
{
	T min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	return min;
}

int main()
{
	int n;
	int a[10];

	cout << "n = ";
	cin >> n;

	read(n, a);

	cout << minarray(n, a) << endl;

	double b[10];

	read(n, b);

	cout << minarray(n, b) << endl;

	return 0;
}