//Chapter Simple calculations - exercise, Task 002
//07.12.2023, 21:34
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double vegetablesPrice, fruitPrice, vegetablesWeight, fruitWeight;

	cin >> vegetablesPrice;
	cin >> fruitPrice;
	cin >> vegetablesWeight;
	cin >> fruitWeight;

	double income = vegetablesPrice * vegetablesWeight + fruitPrice * fruitWeight;
	income /= 1.94;

	cout << setprecision(15) << income << endl;

	return 0;
}