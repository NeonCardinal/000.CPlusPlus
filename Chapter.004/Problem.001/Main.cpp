//Chapter 003, Task 001
//04.11.2023, 14:59
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char op = '+';
	double result = 0.00;

	do
	{
		double arg;
		cin >> arg;

		switch (op)
		{
		case '+':
			result += arg;
			break;
		case '-':
			result -= arg;
			break;
		case '*':
			result *= arg;
			break;
		case '/':
			result /= arg;
			break;
		}

		cin >> op;
	} while (op != '=');

	cout << setprecision(5) << setiosflags(ios::fixed);
	cout << setw(15) << result << endl;

	return 0;
}