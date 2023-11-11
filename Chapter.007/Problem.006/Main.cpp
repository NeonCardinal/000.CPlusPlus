//Chapter 007, Task 006
//07.11.2023, 00:05
#include <iostream>
#include <iomanip>

using namespace std;

void readmat(int, int[][10]);
void printmat(int, int[][10]);
void transform(int, int[][10]);

int main()
{
	int n;
	int a[10][10];

	cout << "n = ";
	cin >> n;
	if(!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 1 || n > 10)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	readmat(n, a);
	cout << endl;

	printmat(n, a);
	cout << endl;

	transform(n, a);
	printmat(n, a);

	return 0;
}

void readmat(int n, int mat[][10])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "mat[" << i << ", " << j << "] = ";
			cin >> mat[i][j];
		}
	}
}

void printmat(int n, int mat[][10])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << mat[i][j];
		}

		cout << "\n";
	}
}

void transform(int n, int mat[][10])
{
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			mat[i][j] = mat[i][j] - 5;
		}
	}

	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j <= n - 1; j++)
		{
			mat[i][j] = mat[i][j] + 5;
		}
	}
}