//Chapter 006, Task 012
//04.11.2023, 23:45
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n;
	char a[20][10];
	char s[200];

	cout << "n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		strcat(s, a[i]);
	}

	cout << s << endl;

	return 0;
}