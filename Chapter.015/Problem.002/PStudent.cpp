//Chapter 015, Task 002
//24.12.2023, 16:58
#include <iostream>
#include "../Problem.001/Main.cpp"

using namespace std;

class PStudent : Student
{
private:
	double tax;
public:
	void ReadPStudent(const char*, const char*, long, double, double);
	void PrintPStudent() const;
};

void PStudent::ReadPStudent(const char* str, const char* num, long facnum, double g, double t)
{
	ReadStudent(str, num, facnum, g);
	tax = t;
}

void PStudent::PrintPStudent() const
{
	cout << "Tax: " << tax << endl;
}
