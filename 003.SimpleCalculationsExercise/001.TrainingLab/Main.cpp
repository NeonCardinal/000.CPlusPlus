//Chapter Simple calculations - exercise, Task 001
//07.12.2023, 21:26
#include <iostream>

using namespace std;

int main()
{
	double len, width;

	cin >> len;
	cin >> width;

	len *= 100;
	width *= 100;

	int cols = ((int)(width - 100) / 70);
	int rows = (int)(len) / 120;
	int seats = cols * rows - 3;

	cout << seats << endl;

	return 0;
}