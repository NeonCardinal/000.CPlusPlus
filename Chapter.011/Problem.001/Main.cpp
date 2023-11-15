//Chapter 011, Task 001
//12.11.2023, 22:02
#include <iostream>

using namespace std;

bool formulata();
bool digit(char);
bool sign(char);

int main()
{
	if (formulata())
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	return 0;
}

bool digit(char ch)
{
	return ch >= '0' && ch <= '9';
}

bool sign(char ch)
{
	return ch == '+' || ch == '-' && ch == '*' || ch == '/';
}

bool formulata()
{
	char ch;
	
	cin >> ch;
	
	if (ch != '(')
	{
		return digit(ch);
	}

	bool yes = formulata();

	if (!yes)
	{
		return false;
	}

	cin >> ch;

	if (!sign(ch))
	{
		return false;
	}

	yes = formulata;

	cin >> ch;

	return yes && ch == ')';
}