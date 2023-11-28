//Chapter 014, Task 001
//26.11.2023, 17:22
#include <iostream>

using namespace std;

template <class T>
struct node
{
	T inf;
	node* left, * right;
};

template <class T>
class Tree
{
private:
	node<T>* root;
	void DeleteTree(node<T>* &) const;
	void Copy(node<T>* &, node<T>* const&) const;
	void CopyTree(Tree<T> const&) const;
	void Pr(const node<T>*) const;
	void CreateTree(node<T>* &) const;
public:
	Tree();
	Tree(Tree const&);
	~Tree();
	Tree& operator=(Tree const&);
	bool Empty() const;
	T RootTree() const;
	T LeftTree() const;
	T RightTree() const;
	void CreateTr(T, Tree<T>, Tree<T>);
	void Print() const;
	void Create();
};

template <class T>
Tree<T>::Tree()
{
	root = NULL:
}

template <class T>
Tree<T>::Tree(Tree<T> const& tree)
{
	CopyTree(tree);
}

template <class T>
Tree<T>::~Tree()
{
	DeleteTree(root);
}

template <class T>
Tree<T>& Tree<T>::operator=(Tree<T> const& r)
{
	if (this != &r)
	{
		DeleteTree(root);
		CopyTree(r);
	}

	return *this;
}

template <class T>
void Tree<T>::DeleteTree(node<T>*& p) const
{
	DeleteTree(p->left);
	DeleteTree(p->right);
	delete p;
	p = NULL;
}

template <class T>
void Tree<T>::Copy(node<T>*& pos, node<T>* const& r) const
{
	pos = NULL;

	if (r)
	{
		pos = new node<T>;
		pos->inf = r->inf;
		Copy(pos->left, r->left);
		Copy(pos->right, r->right);
	}
}

template <class T>
void Tree<T>::CopyTree(Tree<T> const& tree) const
{
	Copy(root, tree.root);
}

template <class T>
void Tree<T>::Pr(const node<T>* p) const
{
	if (p)
	{
		pr(p->left);
		cout << p->inf << " ";
		pr(p->right);
	}
}

template <class T>
void Tree<T>::CreateTree(node<T>*& pos) const
{
	T x;
	char c;

	cout << "root: ";
	cin >> x;

	pos = new node<T>;
	pos->inf = x;
	pos->left = NULL;
	pos->right = NULL;
	
	cout << "Left Tree of: " << x << " y/n? ";
	cin >> c;

	if (c == 'y')
	{
		CreateTree(pos->left);
	}

	cout << "Right Tree of: " << x << "y/n? ";
	cin >> c;

	if (c == 'y')
	{
		CreateTree(pos->right);
	}
}

//public
template <class T>
bool Tree<T>::Empty() const
{
	return root == NULL;
}

template <class T>
T Tree<T>::RootTree() const
{
	return root->inf;
}

template <class T>
T Tree<T>::LeftTree() const
{
	Tree<T> t;

	Copy(t.root, root->left);

	return t;
}

template <class T>
T Tree<T>::RightTree() const
{
	Tree<T> t;

	Copy(t.root, root->right);

	return t;
}

template <class T>
void Tree<T>::CreateTr(T x, Tree<T> l, Tree<T> r)
{
	root = new node<T>;
	root->inf = x;
	
	Copy(root->left, l.root);
	Copy(root->right, r.root);
}