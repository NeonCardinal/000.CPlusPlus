//Chapter 004, Task 002
//04.11.2023, 15:04
#include <iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if (ch < 'a' || ch > 'z')
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	cout << (char)(ch - 'a' + 'A') << endl;

	return 0;
}