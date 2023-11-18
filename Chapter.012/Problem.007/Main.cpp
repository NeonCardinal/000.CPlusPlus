//Chapter 012, Task 007
//18.11.2023, 14:16
#include <iostream>

using namespace std;

const int NUM = 100;

class stack
{
private:
	int n;
	int arr[NUM];

public:
	stack();
	void push(int);
	void pop();
	int top() const;
	bool empty() const;
	void print();
};

stack num_stack(int);

int main()
{
	int n;

	cout << "number: ";
	cin >> n;

	num_stack(n).print();

	return 0;
}

stack::stack()
{
	n = 0;
	arr[0] = 0;
}

void stack::push(int x)
{
	n++;
	arr[n] = x;
}

void stack::pop()
{
	n--;
}

int stack::top() const
{
	return arr[n];
}

bool stack::empty() const
{
	return n == 0;
}

void stack::print()
{
	while (!empty())
	{
		cout << top();
		pop();
	}

	cout << endl;
}

stack num_stack(int x)
{
	stack st;

	while (x)
	{
		st.push(x % 2);
		x /= 2;
	}

	return st;
}