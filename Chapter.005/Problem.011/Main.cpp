//Chapter 006, Task 011
//04.11.2023, 23:37
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[20];
	char b[20];

	cout << "a = ";
	cin >> a;

	int n = strlen(a);

	for (int i = n - 1; i >= 0; i--)
	{
		b[n - i - 1] = a[i];
	}

	b[n] = '\0';

	if (!strcmp(a, b))
	{
		cout << "palidrome" << endl;
	}
	else
	{
		cout << "not palidrome" << endl;
	}

	return 0;
}