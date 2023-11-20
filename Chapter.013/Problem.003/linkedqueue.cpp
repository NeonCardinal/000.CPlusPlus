#include <iostream>

using namespace std;

template <class T>
struct elem
{
	T inf;
	elem* link;
};

template <class T>
class linkedqueue
{
private:
	elem<T>* front, * rear;
	void delqueue();
	void copy(linkedqueue const&);
public:
	linkedqueue();
	linkedqueue(linkedqueue const&);
	~linkedqueue();
	linkedqueue& operator=(linkedqueue const&);
	void insert(T const&);
	int deleteelem(T&);
	void print();
	bool empty() const;
};

template <class T>
linkedqueue<T>::linkedqueue()
{
	front = NULL;
	rear = NULL;
}

template <class T>
linkedqueue<T>::linkedqueue(linkedqueue const& r)
{
	copy(r);
}

template <class T>
linkedqueue<T>::~linkedqueue()
{
	delqueue();
}

template <class T>
linkedqueue<T>& linkedqueue<T>::operator=(linkedqueue const& r)
{
	if (this != &r)
	{
		delqueue();
		copy(r);
	}

	return *this;
}

template <class T>
void linkedqueue<T>::delqueue()
{
	T x;
	while (deleteelem(x));
}

template <class T>
void linkedqueue<T>::copy(linkedqueue const& r)
{
	rear = NULL;

	if (r.rear)
	{
		elem<T>* p = r.front;

		while (p)
		{
			insert(p->inf);
			p = p->link;
		}
	}
}

template <class T>
void linkedqueue<T>::insert(T const& x)
{
	elem<T>* p = new elem<T>;
	p->inf = x;
	p->link = NULL;

	if (rear)
	{
		rear->link = p;
	}
	else
	{
		front = p;
	}

	rear = p;
}

template <class T>
int linkedqueue<T>::deleteelem(T& x)
{
	elem<T>* p;

	if (!rear)
	{
		return 0;
	}
	
	p = front;
	x = p->inf;

	if (p == rear)
	{
		rear = NULL;
		front = NULL;
	}
	else
	{
		front = p->link;
	}

	delete p;

	return 1;
}

template <class T>
void linkedqueue<T>::print()
{
	T x;

	while (deleteelem(x))
	{
		cout << x << " ";
	}

	cout << endl;
}

template <class T>
bool linkedqueue<T>::empty() const
{
	return rear == NULL;
}