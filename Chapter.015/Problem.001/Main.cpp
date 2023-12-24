//Chapter 015, Task 001
//10.12.2023, 21:53
#include <iostream>
#include <string>

using namespace std;

class People
{
private:
	char* name;
	char* egn;
public:
	void ReadPeople(const char*, const char*);
	void PrintPeople() const;
};

void People::ReadPeople(const char* str, const char* num)
{
	name = new char[strlen(str + 1)];
	strcpy(name, str);
	egn = new char[11];
	strcpy(egn, num);
}

void People::PrintPeople() const
{
	cout << "Imena: " << name << endl;
	cout << "Egn: " << egn << endl;
}

class Student : People
{
private:
	long facnom;
	double usp;
public:
	void ReadStudent(const char*, const char*, long, double);
	void PrintStudent() const;
};

void Student::ReadStudent(const char* str,  const char* num, long factnum, double uspe)
{
	ReadPeople(str, num);
	facnom = factnum;
	usp = uspe;
}

void Student::PrintStudent() const
{
	PrintPeople();
	cout << "facul. nomer: " << facnom << endl;
	cout << "uspeh: " << usp << endl;
}

int main()
{
	Student stud;
	stud.ReadStudent("Pesho Peshov", "8618161325", 42444, 6);
	stud.PrintStudent();

	return 0;
}