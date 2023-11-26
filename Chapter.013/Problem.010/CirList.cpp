//Chapter 013, Task 010
//25.11.2023, 18:48
#include <iostream>

using namespace std;

template <class T>
struct elem
{
	T inf;
	elem* link;
};

template <class T>
class CirList
{
private:
	elem<T>* start;
	elem<T>* current;
	void DeleteList();
	void CopyList(CirList&);
public:
	CirList();
	CirList(CirList&);
	~CirList();
	CirList& operator=(CirList&);
	void Print();
	void IterStart(elem<T>* = NULL);
	elem<T>* Iter();
	void ToEnd(T&);
	void Insert(T&);
	void DeleteElement(elem<T>*, T&);
	T accumulate(T (*op)(T, T), T, CirList<T>&);
	CirList<T> map(T(*f)(T), CirList<T>&);
	CirList<T> filter(bool (*pred)(T), CirList<T>& l);
};

template <class T>
CirList<T>::CirList()
{
	start = NULL;
	//current = NULL;
}

template <class T>
CirList<T>::CirList(CirList& r)
{
	CopyList(r);
}

template <class T>
CirList<T>::~CirList()
{
	DeleteList();
}

template <class T>
CirList<T>& CirList<T>::operator=(CirList& r)
{
	if (this != &r)
	{
		DeleteList();
		CopyList(r);
	}

	return *this;
}

template <class T>
void CirList<T>::Print()
{
	IterStart();

	elem<T>* p = Iter();

	while (p)
	{
		cout << p->inf << " ";
		p = Iter();
	}

	cout << endl;
}

template <class T>
void CirList<T>::IterStart(elem<T>* p)
{
	if (p)
	{
		current = p;
	}
	else
	{
		if (!start)
		{
			current = NULL;
		}
		else
		{
			current = start->link;
		}
	}
}

template <class T>
elem<T>* CirList<T>::Iter()
{
	if (!current)
	{
		return NULL;
	}

	elem<T>* p = current;

	if (current == start)
	{
		current = NULL;
	}
	else
	{
		current = current->link;
	}

	return p;
}

template <class T>
void CirList<T>::ToEnd(T& x)
{
	Insert(x);

	start = start->link;
}

template <class T>
void CirList<T>::Insert(T& x)
{
	elem<T>* p = new elem<T>;

	p->inf = x;

	if (start)
	{
		p->link = start->link;
	}
	else
	{
		start = p;
	}

	start->link = p;
}

template <class T>
void CirList<T>::DeleteElement(elem<T>* p, T& x)
{
	x = p->inf;

	if (start != start->link)
	{
		elem<T>* q = start;

		while (q->link != p)
		{
			q = q->link;
		}

		q->link = p->link;

		if (p == start)
		{
			start = q;
		}

		delete p;
	}
	else
	{
		start = NULL;
		delete p;
	}
}

template <class T>
T CirList<T>::accumulate(T(*op)(T, T), T null_val, CirList<T>& l)
{
	T s = null_val;
	l.IterStart();

	elem<T>* p = l.Iter();

	while (p)
	{
		s = op(s, p->inf);
		p = l.Iter();
	}

	return s;
}

template <class T>
CirList<T> CirList<T>::map(T(*f)(T), CirList<T>& l)
{
	l.IterStart();
	elem<T>* p = l.Iter();
	CirList<T> l1;
	while (p)
	{
		l1.ToEnd(f(p->inf));
		p = l.Iter();
	}
	return l1;
}

template <class T>
CirList<T> CirList<T>::filter(bool (*pred)(T), CirList<T>& l)
{
	l.IterStart();
	elem<T>* p = l.Iter();
	CirList<T> l1;
	while (p)
	{
		if (pred(p->inf)) l1.ToEnd(p->inf);
		p = l.Iter();
	}
		
	return l1;
}

template <class T>
void CirList<T>::DeleteList()
{
	IterStart();

	elem<T>* p = Iter();

	while (p)
	{
		delete p;
		p = Iter();
	}
}

template <class T>
void CirList<T>::CopyList(CirList& r)
{
	start = NULL;

	r.IterStart();

	elem<T>* p = r.Iter();

	while (p)
	{
		ToEnd(p->inf);
		p = Iter();
	}
}