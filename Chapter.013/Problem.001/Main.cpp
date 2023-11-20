//Chapter 013, Task 001,
//19.11.2023, 13:29
#include <iostream>

using namespace std;

template <class T>
class stack;

template <class T>
class item
{
	friend class stack<T>;

private:
	item(T x = 0)
	{
		inf = x;
		link = 0;
	}

	T inf;
	item* link;
};

template <class T>
class stack
{
private:
	item<T>* start;
	void delstack();
	void copy(stack const&);
public:
	stack();
	stack(T);
	stack(stack const&);
	~stack();
	stack& operator=(stack const&);
	void push(T const&);
	int pop(T&);
	T top() const;
	bool empty() const;
	void print();
};

template <class T>
stack<T>::stack()
{
	start = NULL;
}

template <class T>
stack<T>::stack(T x)
{
	start = new item<T>(x);
}

template <class T>
stack<T>::stack(stack<T> const& r)
{
	copy(r);
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
	item<T>* p;

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
		item<T>* p = r.start, * q = NULL, * s = NULL;
		start = new item<T>;
		start->inf = p->inf;
		start->link = q;
		q = start;
		p = p->link;

		while (p)
		{
			s = new item<T>;
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
void stack<T>::push(T const& x)
{
	item<T>* p = new item<T>(x);
	p->link = start;
	start = p;
}

template <class T>
int stack<T>::pop(T& x)
{
	item<T>* temp, * p = start;
	
	if (p)
	{
		x = p->inf;
		temp = p;
		p = p->link;
		delete temp;
		start = p;

		return 1;
	}
	else
	{
		return 0;
	}
}

template <class T>
T stack<T>::top() const
{
	return (*start).inf;
}

template <class T>
void stack<T>::print()
{
	T x;

	while (pop(x))
	{
		cout << x << " ";
	}

	cout << endl;
}

template <class T>
bool stack<T>::empty() const
{
	return start == NULL;
}

int t(char c)
{
	int p;

	switch (c)
	{
	case '+':
		p = 2;
		break;
	case '-':
		p = 2;
		break;
	case '*':
		p = 1;
	case '/':
		p = 1;
	case '^':
		p = 0;
		break;
	default:
		p = -1;
		break;
	}

	return p;
}

void translate(char* s, char* ns)
{
	char x;
	int i = -1, j = -1, n = strlen(s);
	stack<char> st;

	st.push('(');

	while (i < n)
	{
		i++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			j++;
			ns[j] = s[j];
		}
		else
		{
			if (s[i] == '(')
			{
				st.push(s[i]);
			}
			else
			{
				if (s[i] == ')')
				{
					st.pop(x);

					while (x != '(')
					{
						j++;
						ns[j] = x;
						st.pop(x);
					}
				}
				else
				{
					if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
					{
						st.pop(x);

						while (x != '(' && t(x) <= t(s[i]))
						{
							j++;
							ns[j] = x;
							st.pop(x);
						}

						st.push(x);
						st.push(s[i]);
					}
				}

				st.pop(x);

				while (x != '(')
				{
					j++;
					ns[j] = x;
					st.pop(x);
				}

				j++;
				ns[j] = 0;
			}
		}
	}
}

int value(char* s)
{
	int x, y, z;
	unsigned int i = 0, n = strlen(s);
	stack<int> st;

	while (i < n)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			st.push((int)s[i] - (int)'0');
		}
		else
		{
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				st.pop(y);
				st.pop(x);

				switch (s[i])
				{
				case '+':
					z = x + y;
					break;
				case '-':
					z = x - y;
					break;
				case '*':
					z = x * y;
					break;
				case '/':
					z = x / y;
					break;
				case '^':
					z = (int)pow(x, y);
					break;
				}

				st.push(z);
			}			
		}

		i++;
	}

	st.pop(z);

	return z;
}

int main()
{
	char s[200];

	cout << "s = ";
	cin >> s;

	char s1[200];
	translate(s, s1);


	cout << value(s1) << endl;

	return 0;
}