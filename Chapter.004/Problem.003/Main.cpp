//Chapter 004, Task 003
//04.11.2023, 15:08
#include <iostream>

using namespace std;

int main()
{
	for (char ch = '0'; ch <= '9'; ch++)
		cout << ch << '\t' << (int)ch << endl;
	for (char ch = 'A'; ch <= 'Z'; ch++)
		cout << ch << '\t' << (int)ch << endl;
	for (char ch = 'a'; ch <= 'z'; ch++)
		cout << ch << '\t' << (int)ch << endl;

	return 0;
}