//Chapter 006, Task 004;
//05.11.2023, 18:58
#include <iostream>

using namespace std;

int main()
{
	char str[] = "C++ Language";
	char* pstr = str;

	while (*pstr)
	{
		cout << *pstr;
		pstr++;
	}

	return 0;
}