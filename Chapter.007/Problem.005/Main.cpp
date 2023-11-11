//Chapter 007, Task 005
//05.11.2023, 21:27
#include <iostream>
#include <iomanip>

using namespace std;

void printarr(int, int[]);
void readarr(int, int[]);
void sortarr(int, int[]);
void mergearrs(int, int[], int, int[], int&, int[]);

int main()
{
	int n;
	int m;
	int a[20];
	int b[30];
	int c[50];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	readarr(n, a);
	cout << endl;

	printarr(n, a);
	cout << endl;

	sortarr(n, a);
	cout << endl;

	printarr(n, a);
	cout << endl;

	cout << "m = ";
	cin >> m;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	readarr(m, b);
	cout << endl;

	printarr(m, b);
	cout << endl;

	sortarr(m, b);
	cout << endl;

	printarr(m, b);
	cout << endl;

	int p;
	mergearrs(n, a, m, b, p, c);

	printarr(p, c);

	return 0;
}

