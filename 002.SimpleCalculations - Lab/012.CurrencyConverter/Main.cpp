//Chapter Simple calculations - lab, Task 012
//24.11.2023, 17:37
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double amount, newAmount, temp;
	string inCurrecy, outCurrency;

	cin >> amount;
	cin >> inCurrecy;
	cin >> outCurrency;

	if (inCurrecy == "BGN")
	{
		if (outCurrency == "GBP")
		{
			newAmount = amount / 2.53405;
		}
		else if (outCurrency == "EUR")
		{
			newAmount = amount / 1.95583;
		}
		else if (outCurrency == "USD")
		{
			newAmount = amount / 1.79549;
		}
	}
	else if (inCurrecy == "GBP")
	{
		if (outCurrency == "BGN")
		{
			newAmount = amount * 2.53405;
		}
		else if (outCurrency == "EUR")
		{
			temp = amount * 2.53405;
			newAmount = temp / 1.95583;
		}
		else if (outCurrency == "USD")
		{
			temp = amount * 2.53405;
			newAmount = temp / 1.79549;
		}
	}
	else if (inCurrecy == "EUR")
	{
		if (outCurrency == "BGN")
		{
			newAmount = amount * 1.95583;
		}
		else if (outCurrency == "GBP")
		{
			temp = amount * 1.95583;
			newAmount = temp / 2.53405;
		}
		else if (outCurrency == "USD")
		{
			temp = amount * 1.95583;
			newAmount = temp / 1.79549;
		}
	}
	else if (inCurrecy == "USD")
	{
		if (outCurrency == "BGN")
		{
			newAmount = amount * 1.79549;
		}
		else if (outCurrency == "GBP")
		{
			temp = amount * 1.79549;
			newAmount = temp / 2.53405;
		}
		else if (outCurrency == "EUR")
		{
			temp = amount * 1.79549;
			newAmount = temp / 1.95583;
		}
	}

	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << newAmount << " " << outCurrency << endl;

	return 0;
}