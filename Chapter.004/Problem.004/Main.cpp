//Chapter 004, Task 004
//04.11.2023, 15:13
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	enum Weekday {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

	Weekday d;
	double s = 0.00;

	for (d = MONDAY; d <= SUNDAY; d = (Weekday)(d + 1))
	{
		double t;

		cout << "t = ";
		cin >> t;

		s += t;
	}

	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << setw(10) << s / 7 << endl;

	return 0;
}