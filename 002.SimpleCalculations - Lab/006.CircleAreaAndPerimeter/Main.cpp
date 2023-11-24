//Chapter Simple calculations - lab, Task 006
//24.11.2023, 13:56
#include <iostream>

using namespace std;

const double PI = 3.14159265359;

int main()
{
	double r;

	cout << "Enter circle radius: r = ";
	cin >> r;

	double area = PI * r * r;
	double perimeter = 2 * PI * r;

	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;

	return 0;
}