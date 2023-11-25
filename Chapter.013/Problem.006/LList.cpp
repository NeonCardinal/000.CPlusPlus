//Chapter 013, Task 006
//25.11.2023, 16:48
#include <iostream>

using namespace std;

template <class T>
struct elem
{
	T inf;
	elem* link;
};

template <class T>
class LList
{
private:
	elem<T>* start;
	elem<T>* end;
	elem<T>* current;
	void deletelist();
	void copylist(LList<T> const&);
public:
	LList();
	LList(LList const&);
	~LList();
	LList& operator=(LList const&);
	void print();
	void interstart(elem<T>* = NULL);
	elem<T>* iter();
	void toend(T const&);
	void insertafter(elem<T>*, T const&);
	void insertbefore(elem<T>*, T const&);
	int deleteafter(elem<T>*, T&);
	int deletebefore(elem<T>*, T&);
	void delete_element(elem<T>*, T&);
	int len();
	void reverse();
};

template <class T>
LList<T>::LList()
{
	start = NULL;
	end = NULL;
}

template <class T>
LList<T>::LList(LList<T> const& r)
{
	copylist(r);
}

template <class T>
LList<T>::~LList()
{
	deletelist();
}

template <class T>
LList<T>& LList<T>::operator=(LList<T> const& r)
{
	if (this != &r)
	{
		deletelist();
		copylist(r);
	}

	return *this;
}

template <class T>
void LList<T>::print()
{
	elem<T>* p = start;

	while (p)
	{
		cout << p->inf << " ";
		p = p->link;
	}

	cout << endl;
}

template <class T>
void LList<T>::interstart(elem<T>* p)
{
	if (p)
	{
		current = p;
	}
	else
	{
		current = start;
	}
}

template <class T>
elem<T>* LList<T>::iter()
{
	elem<T>* p = current;
	
	if (current)
	{
		current = current->link;
	}

	return p;
}

template <class T>
void LList<T>::toend(T const& r)
{
	current = end;
	end = new elem<T>;
	end->inf = r;
	end->link = NULL;

	if (current)
	{
		current->link = end;
	}
	else
	{
		start = end;
	}
}

template <class T>
void LList<T>::insertafter(elem<T>* p, T const& r)
{
	elem<T>* q = new elem<T>;

	q->inf = r;
	q->link = p->link;

	if (p == end)
	{
		end = q;
	}

	p->link = q;
}

template <class T>
void LList<T>::insertbefore(elem<T>* p, T const& r)
{
	elem<T>* q = new elem<T>;

	*q = *p;

	if (p == end)
	{
		end = q;
	}

	p->inf = r;
	p->link = q;
}

template <class T>
int LList<T>::deleteafter(elem<T>* p, T& r)
{
	if (p->link)
	{
		elem<T>* q = p->link;
		r = q->inf;
		p->link = q->link;

		if (q == end)
		{
			end = p;
		}

		delete q;

		return 1;
	}
	else
	{
		return 0;
	}
}

template <class T>
int LList<T>::deletebefore(elem<T>* p, T& r)
{
	if (p != start)
	{
		elem<T>* q = start;

		while (q->link != p)
		{
			q = q->link;
		}

		delete_element(q, r);

		return 1;
	}
	else
	{
		return 0;
	}
}

template <class T>
void LList<T>::delete_element(elem<T>* p, T& r)
{
	if (p == start)
	{
		r = p->inf;

		if (start == end)
		{
			start = end = NULL;
		}
		else
		{
			start = start->link;
			delete p;
		}
	}
	else
	{
		elem<T>* q = start;

		while (q->link != p)
		{
			q = q->link;
		}

		deleteafter(q, r);
	}
}

template <class T>
int LList<T>::len()
{
	int n = 0;

	interstart();

	elem<T>* p = iter();

	while (p)
	{
		n++;
		p = iter();
	}

	return n;
}

template <class T>
void LList<T>::reverse()
{
	elem<T>* p, * q, * temp;

	p = start;

	if (p)
	{
		q = NULL;
		temp = start;
		start = end;
		end = temp;

		while (p != start)
		{
			temp = p->link;
			p->link = q;
			q = p;
			p = temp;
		}

		p->link = q;
	}
}

template <class T>
void LList<T>::deletelist()
{
	if (start)
	{
		T x;

		while (deletebefore(end, x))
		{
			delete_element(start, x);
		}
	}
}

template <class T>
void LList<T>::copylist(LList<T> const& r)
{
	elem<T>* p = r.start, * q;

	if (r.start)
	{
		start = new elem<T>;
		end = start;

		while (p)
		{
			end->inf = p->inf;
			end->link = NULL;
			p = p->link;

			if (p)
			{
				q = end;
				end = new elem<T>;
				q->link = end;
			}
		}
	}
}