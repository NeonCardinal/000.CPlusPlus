//Chapter 007, Task 009
//07.11.2023, 18:26
#include <iostream>

using namespace std;

void printarr(int, int[]);
int* readarr(int, int[]);

int main()
{
	int n;
	int arr[10];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	int* p = readarr(n, arr);

	printarr(n, p);

	return 0;
}

int* readarr(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	return arr;
}

void printarr(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}