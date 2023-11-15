//Chapter 011, Task 003
//14.11.2023, 00:10
#include <iostream>
#include <string>

using namespace std;

char ch;
int i, len;
char s[100];

char getchara();
bool expr(double&);
bool expr1(double&, char, double&);
bool term(double&);
bool term1(double&, char, double&);
bool digit(double&);

int main()
{
	cout << "Input an expression! ";
	char t[100];

	cin.getline(t, 100);
	len = strlen(t);
	i = -1;

	for (int j = 0; j <= len - 1; j++)
		if (t[j] != ' ')
		{
			i++;
			s[i] = t[j];
		}
	len = i + 1;
	i = -1;
	double m;
	if (expr(m) && i + 1 == len) cout << m << endl;
	else cout << "no \n";
	return 0;
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

bool term(double& x)
{
	if (!digit(x))
	{
		return false;
	}

	ch = getchara();

	if (ch == ' ' || ch == '+' || ch == '-')
	{
		i--;
		return false;
	}

	if (ch != '*' && ch != '/')
	{
		return false;
	}

	return term1(x, ch, x);
}

bool term1(double& x, char c, double& res)
{
	if (!digit(res))
	{
		return false;
	}

	switch (c)
	{
	case '*':
		res = x * res;
		break;
	case '/':
		res = x / res;
	}

	ch = getchara();

	if (ch == ' ' || ch == '+' || ch == '-')
	{
		i--;
		return false;
	}

	if (ch != '*' && ch != '/')
	{
		return false;
	}

	return term1(res, ch, res);
}

bool expr(double& res)
{
	if (!term(res))
	{
		return false;
	}

	ch = getchar();

	if (ch == ' ') 
	{ 
		i--;
		return true;
	}
	if (ch != '+' && ch != '-')
	{
		return false;
	}

	return expr1(res, ch, res);
}

bool expr1(double& x, char c, double& res)
{
	if (!term(res))
	{
		return false;
	}

	switch (ch)
	{
	case '+':
		res = x + res; 
		break;
	case '-':
		res = x - res;
	}
	ch = getchar();

	if (ch == ' ') 
	{ 
		i--; 
		return true; 
	}
	if (ch != '+' && ch != '-')
	{
		return false;
	}

	return expr1(res, c, res);
}

bool digit(double& x)
{
	ch = getchar();
	x = (int)(ch - 48);

	return ch >= '0' && ch <= '9';
}