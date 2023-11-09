//Chapter 006, Task 010
//04.11.2023, 23:21
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[10];
	char b[4];

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	strcat_s(a, b);

	cout << a << endl;
	cout << strlen(a) << endl;

	return 0;
}