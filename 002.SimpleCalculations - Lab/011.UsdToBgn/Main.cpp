//Chapter Simple calculations - lab, Task 011
//24.11.2023, 17:23
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double usd, bgn;

	cin >> usd;

	bgn = usd * 1.79549;

	cout << setprecision(2) << setiosflags(ios::fixed) << bgn << " BGN" << endl;

	return 0;
}