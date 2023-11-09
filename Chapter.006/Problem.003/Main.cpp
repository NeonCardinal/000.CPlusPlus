//Chapter 006, Task 003
//05.11.2023, 18:35
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	int k;
	int a[20][100];
	int* p[20];
	int* q[20];

	cout << "n, k = ";
	cin >> n >> k;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << "a[" << i << "] " << "[" << j << "] = ";
			cin >> *(*(a + i) + j);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << setw(10) << *(*(a + i) + j);
		}

		cout << endl;
	}

	cout << endl << endl;

	int m = -1;
	for (int i = 0; i < n; i = i + 2)
	{
		m++;
		*(p + m) = *(a + i);
	}

	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << setw(10) << *(*(p + i) + j) + 1;
		}

		cout << endl;
	}

	cout << endl << endl;

	int l = -1;

	for (int i = 1; i < n; i = i + 2)
	{
		l++;
		q[l] = a[i];
	}

	for (int i = 0; i <= l; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << setw(10) << *(*(q + i) + j) + 2;
		}

		cout << endl;
	}

	if (n % 2 == 0)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cout << setw(10) << *(*(p + i) + j) + *(*(q + i) + j);
			}
		}

		cout << endl;
	}

	return 0;
}