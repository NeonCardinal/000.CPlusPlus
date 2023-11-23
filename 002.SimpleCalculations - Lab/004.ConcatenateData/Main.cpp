//Chapter Simple calculations - lab, Task 004
//23.11.2023, 13:24
#include <iostream>

using namespace std;

int main()
{
	int age;
	string firstname, lastname, town;

	cin >> firstname;
	cin >> lastname;
	cin >> age;
	cin >> town;

	cout << "You are " << firstname << " " << lastname << ", a " << age << "-years old person from " << town << "." << endl;

	return 0;
}