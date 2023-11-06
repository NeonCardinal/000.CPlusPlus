//Chapter 003, Task 002
//03.11.2023, 21:47
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a;
	short s, d, e;

	cout << "a - three digit positive number: ";
	cin >> a;

	s = a / 100;
	d = a / 10 % 10;
	e = a % 10;

	cout << setw(10) << "stotici: " << s << endl;
	cout << setw(10) << "desetici: " << d << endl;
	cout << setw(10) << "edinici: " << e << endl;

	return 0;
}