//Chapter 012, Task 002
//15.11.2023, 21:20
#include <iostream>

using namespace std;

//test
typedef void MyType;

class pom
{
private:
	int a;
public:
	int b;
	MyType read();
	MyType print() const;
};

int main()
{
	pom x;

	//x.print();

	x.read();
	x.print();

	return 0;
}

void pom::read()
{
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
}

MyType pom::print() const
{
	cout << "a = " << a << ", b = " << b << endl;
}