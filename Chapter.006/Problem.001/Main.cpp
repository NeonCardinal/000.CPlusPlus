//Chapter 006, Task 001
//05.11.2023, 15:15
#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	int* pn = &n;

	cout << "n = " << n << ", pn = " << *pn << endl;
	cout << "&n= " << &n << " pn= " << pn << '\n';

	int m = *pn;
	*pn = 20;

	cout << "n= " << n << '\n';

	return 0;
}