//Chapter 015, Task 003
//24.12.2023, 18:10
#include <iostream>
#include <string>

using namespace std;

class People
{
protected:
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
	cout << "Egn: " << egn;
}

class Student : public People
{
protected:
	long facnom;
	double usp;
public:
	void ReadStudent(const char*, const char*, long, double);
	void PrintStudent() const;
};

void Student::ReadStudent(const char* str, const char* num, long fnom, double grade)
{
	name = new char[strlen(str + 1)];
	strcpy(name, str);
	egn = new char[11];
	strcpy(egn, num);
	facnom = fnom;
	usp = grade;
}

void Student::PrintStudent() const
{
	cout << "Imena: " << name << endl;
	cout << "Egn: " << egn << endl;
	cout << "Fakulteten nomer: " << facnom << endl;
	cout << "Uspeh: " << usp << endl;
}

class PStudent : public Student
{
protected:
	double tax;
public:
	void ReadPStudent(const char*, const char*, long, double, double);
	void PrintPStudent() const;
};

void PStudent::ReadPStudent(const char* str, const char* num, long fnom, double g, double t)
{
	name = new char[strlen(str + 1)];
	strcpy(name, str);
	egn = new char[11];
	strcpy(egn, num);
	facnom = fnom;
	usp = g;
	tax = t;
}

void PStudent::PrintPStudent() const
{
	cout << "Imena: " << name << endl;
	cout << "Egn: " << egn << endl;
	cout << "Fak. nomer: " << facnom << endl;
	cout << "Uspeh: " << usp << endl;
	cout << "Tax: " << tax << endl;
}

int main()
{
	PStudent st;

	st.ReadPStudent("Peshko", "1234567890", 0123456, 4.577, 256.00);
	st.PrintPStudent();

	return 0;
}