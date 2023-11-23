//Chapter Simple calculations - lab, Task 005
//23.11.2023, 13:29
#include <iostream>

using namespace std;

int main()
{
	double b1;
	double b2;
	double h;
	
	cin >> b1;
	cin >> b2;
	cin >> h;

	double area = (b1 + b2) * h / 2;

	cout << "Trapeziod area = " << area << endl;

	return 0;
}