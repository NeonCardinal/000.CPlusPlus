//Chapter Simple calculations - lab, Task 002
//22.11.2023, 23:28
#include <iostream>

using namespace std;

int main()
{
	double inches;

	cout << "Inches = ";
	cin >> inches;

	double centimeters = inches * 2.54;

	cout << "Centimeters = " << centimeters << endl;

	return 0;
}