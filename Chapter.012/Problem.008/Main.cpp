//Chapter 012, Task 008
//18.11.2023, 19:23
#include <iostream>

using namespace std;

int main()
{
	int** arr = new int* [10];

	if (arr == NULL)
	{
		cout << "Not enough memory!" << endl;
		return 1;
	}

	for (int i = 0; i < 10; i++)
	{
		arr[i] = new int;

		if (arr == NULL)
		{
			cout << "Not enough memory!" << endl;
			return 1;
		}

		*arr[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " " << *arr[i] << ", ";

	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}

	delete[] arr;

	return 0;
}