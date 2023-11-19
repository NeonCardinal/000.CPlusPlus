//Chapter 012, Task 015
//18.11.2023, 23:05
#include <iostream>

using namespace std;

template <class T>
struct elem
{
	T inf;
	elem* link;
};

template <class T>
class stack
{
private:
	elem<T>* start;
	void delstack();
	void copy(stack const&);
public:
	stack();
	stack(stack const&);
	~stack();
	stack& operator=(stack const& r);
	void push(T const&);
	int pop(T& x);
	bool empty() const;
	void print();
};

template <class T>
stack<T>::stack()
{
	start = NULL;
}

template <class T>
stack<T>::stack(stack<T> const& st)
{
	copy(st);
}

template <class T>
stack<T>::~stack()
{
	delstack();
}

template <class T>
stack<T>& stack<T>::operator=(stack<T> const& r)
{
	if (this != &r)
	{
		delstack();
		copy(r);
	}

	return *this;
}

template <class T>
void stack<T>::delstack()
{
	elem<T>* p;

	while (start)
	{
		p = start;
		start = start->link;
		delete p;
	}
}

template <class T>
void stack<T>::copy(stack<T> const& r)
{
	if (r.start)
	{
		elem<T>* p = r.start, * q = NULL, * s = NULL;
		start = new elem<T>;
		start->inf = p->inf;
		start->link = q;
		q = start;
		p = p->link;

		while (p)
		{
			s = new elem<T>;
			s->inf = p->inf;
			q->link = s;
			q = s;
			p = p->link;
		}

		q->link = NULL;
	}
	else
	{
		start = NULL;
	}
}

template <class T>
void stack<T>::push(T const& s)
{
	elem<T>* p = start;
	start = new elem<T>;
	start->inf = s;
	start->link = p;
}

template <class T>
int stack<T>::pop(T& s)
{
	if (start)
	{
		s = start->inf;
		elem<T>* p = start;
		start = start->link;
		delete p;
		return 1;
	}
	else
	{
		return 0;
	}
}

template <class T>
void stack<T>::print()
{
	T x;
	while (pop(x))
	{
		cout << x << endl;
	}

	cout << endl;
}

template <class T>
bool stack<T>::empty() const
{
	return start == NULL;
}

template <class T>
void minstack(stack<T> s, T& min, stack<T>& newst)
{
	T x;
	s.pop(min);

	while (s.pop(x))
	{
		if (x < min)
		{
			newst.push(min);
			min = x;
		}
		else
		{
			newst.push(x);
		}
	}
}

template <class T>
void sortstack(stack<T> s, stack<T>& ns)
{
	T min;

	while (!s.empty())
	{
		stack<T> s1;
		minstack(s, min, ns);
		ns.push(min);
		s = s1;
	}
}

int main()
{
	typedef stack<int> intstack;

	intstack s1, s2;

	s1.push(10);
	s1.push(1);
	s1.push(5);
	s1.push(12);
	s1.push(8);
	s1.push(14);
	s1.push(18);
	s1.push(0);

	sortstack(s1, s2);

	s2.print();

	return 0;
}