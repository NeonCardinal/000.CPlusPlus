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
	void CreateTree(node<T> &) const;
public:
	Tree();
	Tree(Tree const&);
	~Tree();
	Tree& operator=(Tree const&);
	bool Empty() const;
	T RootTree() const;
	Tree LeftTree() const;
	Tree RightTree() const;
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