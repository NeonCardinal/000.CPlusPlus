//Chapter First steps in programmin - lab, Task 004
//20.11.2023, 23:45
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}