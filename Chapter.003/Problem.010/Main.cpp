//Chapter 003, Task 010
//04.11.2023, 13:23
#include <iostream>

using namespace std;

int main()
{
	int i;

	cout << "i = ";
	cin >> i;
	if (!cin)
	{
		cout << "Error, bad input!" << endl;
		return 1;
	}

	switch (i)
	{
	case 0:
		cout << "zero";
		break;
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;
	case 6:
		cout << "six";
		break;
	case 7:
		cout << "seven";
		break;
	case 8:
		cout << "eight";
		break;
	case 9:
		cout << "nine";
		break;
	default:
		cout << "Incorrect input!" << endl;
		break;
	}

	return 0;
}