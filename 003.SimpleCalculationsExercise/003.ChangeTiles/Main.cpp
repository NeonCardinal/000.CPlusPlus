//Chapter Simple calculations - exercise, Task 003
//07.12.2023, 21:45
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int ground, wBench, lBench;
	double wTile, lTile;

	cin >> ground;
	cin >> wTile;
	cin >> lTile;
	cin >> wBench;
	cin >> lBench;

	int groundArea = ground * ground;
	int benchArea = wBench * lBench;
	double tileArea = wTile * lTile;
	double area = (groundArea - benchArea) / tileArea;
	double nTime = area * 0.2;

	cout << setprecision(15);
	cout << area << endl;
	cout << nTime << endl;

	return 0;
}