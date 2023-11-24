//Chapter Simple calculations - lab, Task 009
//24.11.2023, 14:09
#include <iostream>
#include <cmath>

using namespace std;

double const PI = 3.1415;

int main()
{
	double rad, deg;

	cin >> rad;

	deg = round(rad * 180 / PI);

	cout << deg << endl;

	return 0;
}