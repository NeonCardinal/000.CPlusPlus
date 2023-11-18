//Chapter 012, Task 009
//18.11.2023, 19:32
#include <iostream>

using namespace std;

int main()
{
	int size; //dyljina na masiva

	do
	{
		cout << "size: ";
		cin >> size;
	} while (size < 1);

	int* arr = new int[size]; // syzdavane na dinamichniq masiv

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}

	//izvejdane na elementite
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	delete arr;

	return 0;
}