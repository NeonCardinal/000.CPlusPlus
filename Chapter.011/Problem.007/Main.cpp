//Chapter 011, Task 007
//14.11.2023, 23:37
#include <iostream>

using namespace std;

int arr[10][10] = { 0 };
int n, s = -1, smin = 0;
int x[100], xmin[100];
bool way = false;
void writeway()
{
	if (!way) cout << "no way \n";
	else
	{
		cout << "yes \ n";
		for (int i = 0; i <= smin - 1; i++)
			cout << xmin[i] << " ";
		cout << endl;
	}
}
void opt()
{
	if (s + 1 < smin || smin == 0)
	{smin = s + 1;
	for (int i = 0; i <= smin - 1; i++)
		xmin[i] = x[i];
	}
}
bool member(int x, int n, int* a)
{
	if (n == 1) return a[0] == x;
	return x == a[0] || member(x, n - 1, a + 1);
}
void foundminway(int i, int j)
{
	if (i == j)
	{
		way = true;
		s++; x[s] = i;
		opt();
	}
	else
	{
		s++; x[s] = i;
		for (int k = 0; k <= n - 1; k++)
			if (arr[i][k] == 1 && !member(k, s + 1, x))
			{
				arr[i][k] = 0; arr[k][i] = 0;
				foundminway(k, j);
				s--;
				arr[i][k] = 1; arr[k][i] = 1;
			}
	}
}
int main()
{
	int i;
	do
	{
		cout << "n= ";
		cin >> n;
	} while (n < 1 || n > 10);
	for (i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		{
			cout << "connection between " << i << " and "
				<< j << " 0/1? ";
			cin >> arr[i][j];
				arr[j][i] = arr[i][j];
		}
	int j;
	do
	{
		cout << "start and final towns: ";
		cin >> i >> j;
	} while (i < 0 || i > 9 || j < 0 || j > 9);
	foundminway(i, j);
	writeway();
	return 0;
}