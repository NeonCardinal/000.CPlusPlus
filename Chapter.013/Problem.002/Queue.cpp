#include <iostream>

using namespace std;

const int SIZE = 100;

template <class T>
class queue
{
private:
	int front, rear, n;
	T* a;
	void delqueue();
	void copy(queue const&);
public:
	queue(); //конструктор
	queue(queue const&); //конструктор за присвояване
	~queue(); //деструктор
	queue& operator=(queue const&);
	void inserelement(T const&);
	int deleteelement(T&);
	void print();
	void printWHdel();
};

template <class T>
queue<T>::queue()
{
	a = new T[SIZE];
	n = 0;
	front = 0;
	rear = 0;
}

template <class T>
queue<T>::queue(queue<T> const& r)
{
	copy(r);
}

template <class T>
queue<T>::~queue()
{
	delqueue();
}

template <class T>
queue<T>& queue<T>::operator=(queue<T> const& r)
{
	if (this != &r)
	{
		delqueue();
		copy(r);
	}

	return *r;
}

template <class T>
void queue<T>::inserelement(T const& x)
{
	if (n == SIZE)
	{
		cout << "Impossible!" << endl;
	}
	else
	{
		a[rear] = x;
		n++;
		rear++;
		rear = rear % SIZE;
	}
}

template <class T>
int queue<T>::deleteelement(T& x)
{
	if (n > 0)
	{
		x = a[front];
		n--;
		front++;
		front = front % SIZE;
		return 1;
	}
	else
	{
		return 0;
	}
}

template <class T>
void queue<T>::delqueue()
{
	delete[] a;
}

template <class T>
void queue<T>::copy(queue<T> const& r)
{
	a = new T[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		a[i] = r.a[i];
	}

	n = r.n;
	front = r.front;
	rear = r.rear;
}

template <class T>
void queue<T>::print()
{
	T x;

	while (deleteelement(x))
	{
		cout << x << " ";
	}

	cout << endl;
}