//Chapter 007, Task 007
//07.11.2023, 12:32
#include <iostream>
#include <string>

using namespace std;

void readarrstr(int, char[][15]);
bool eqstr(char*, char*);
bool search(int, char[][15], char*);

int main()
{
	int n;
	char word[15];
	char a[20][15];

	cout << "n = ";
	cin >> n;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}
	if (n < 1 || n > 15)
	{
		cout << "Error, incorrect input!" << endl;
		return 1;
	}

	readarrstr(n, a);

	cout << "word = ";
	cin >> word;

	if (search(n, a, word))
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}

void readarrstr(int n, char s[][15])
{
	for (int i = 0; i < n; i++)
	{
		cout << "s[" << i << "] = ";
		cin >> s[i];
	}
}

bool eqstr(char* str1, char* str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	if (*str1 != *str2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool search(int n, char s[][15], char* x)
{
	int i = 0;

	while (!eqstr(s[i], x) && i < n - 1)
	{
		i++;
	}

	return eqstr(s[i], x);
}