//Chapter 011, Task 002
//13.11.2023, 23:22
#include <iostream>
#include <string>

using namespace std;

char ch;
int i, len;
char s[100];

char getchara();
bool expr();
bool term();
bool digit();

int main()
{
	char t[100];

	cout << "Enter an expression: ";
	cin.getline(t, 100);

	len = strlen(t);
	i = -1;

	for (int j = 0; j < len; j++)
	{
		if (t[j] != ' ')
		{
			i++;
			s[i] = t[j];
		}
	}

	len = i + 1;
	i = -1;

	if (expr() && i + 1 == len)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}

bool digit()
{
	return ch >= '0' && ch <= '9';
}

bool term()
{
	if (!digit())
	{
		return false;
	}

	ch = getchara();

	if (ch != '*' && ch != '/')
	{
		i--;
		return true;
	}

	return term();
}

bool expr()
{
	if (!term())
	{
		return false;
	}

	ch = getchara();

	if (ch != '+' && ch != '-')
	{
		return true;
	}

	return expr();
}

char getchara()
{
	i++;
	if (i == len)
	{
		return ' ';
	}
	else
	{
		return s[i];
	}
}