//Chapter Simple calculations, Task 008
//24.11.2023, 14:05
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, h;

	cin >> a;
	cin >> h;

	double area = a * h / 2;

	cout << setprecision(2) << setiosflags(ios::fixed);
	cout << "Area = " << area << endl;

	return 0;
}