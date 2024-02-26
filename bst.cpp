//using namespace std;
#include<iostream>
//#include<algorithm>
#include "bst.h"
#include"node1.h"
#include"queue.cpp"
#include"node1.cpp"
template<class T>
BST<T> :: BST()
{
	head = NULL;
}
template<class T>
BST<T> :: ~BST()
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
		delete head;
	}
}
template<class T>
void BST<T> :: makeEmpty(Node<T> *head)
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
	}
}
template<class T>
Node<T>*BST<T>::lastParent()
{
	Queue<Node<T>*>q;
	q.enqueue(head);
	Node<T>*temp;
	while(!q.isEmpty())
	{
		temp=q.peek();
		q.dequeue();
		if(temp->getLeftPtr()!=NULL && temp->getRightPtr()!=NULL)
		{
			q.enqueue(temp->getLeftPtr());
			q.enqueue(temp->getRightPtr());
		}
		else
		{
			break;
		}
	}
	return temp;
}
template<class T>
void BST<T>::swap(T&a,T&b)
{
	T temp=a;
	a=b;
	b=temp;
}
template<class T>
void BST<T>::upHeapify(Node<T>*head)
{
	if(head->getParentPtr()==NULL)
	{
		return;
	}
	if(head->getParentPtr()->getData()<head->getData())
	{
		std::swap(head->getParentPtr()->data,head->data);
		upHeapify(head->getParentPtr());
	}
}
template<class T>
void BST<T> :: insert(T data)
{
	Node<T>*newNode=new Node<T>(data);
	if(head==NULL)
	{
		head=newNode;
		return;
	}
	Node<T>*lpar=lastParent();
	if(lpar->getLeftPtr()==NULL)
	{
		lpar->setLeftPtr(newNode);
		newNode->setParentPtr(lpar);
	}
	else
	{
		lpar->setRightPtr(newNode);
			newNode->setParentPtr(lpar);
	}
	upHeapify(newNode);
}

template<class T>
void BST<T> :: preOrder()
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: preOrder(Node<T> *head)
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}
}
template<class T>
void BST<T> :: inOrder()
{
	if(head != NULL)
	{
		inOrder(head->getLeftPtr());
		cout << head->getData() << " ";
		inOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: inOrder(Node<T> *head)
{
	if(head != NULL)
	{
		inOrder(head->getLeftPtr());
		cout << head->getData() << " ";
		inOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: postOrder()
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}

template<class T>
void BST<T> :: postOrder(Node<T> *head)
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}

template<class T>
void BST<T> :: deleteNode()
{	
if(isEmpty())
{
	cout<<"Heap is empty";
}
Node<T>*temp=lastNode();
if(temp==head)
{
	delete temp;
	head=NULL;
	return;
}
std::swap(head->data,temp->data);
Node<T>*pr=temp->getParentPtr();
if(pr->getLeftPtr()==temp)
{
	delete temp;
	pr->setLeftPtr(NULL);
}
else
{
	delete temp;
	pr->setRightPtr(NULL);
}
downHeapify(head);
}
template<class T>
void BST<T>::downHeapify(Node<T>*he)
{
	Node<T>*largest=he;
	if(he->getLeftPtr() && he->getLeftPtr()->getData()>largest->getData())
	{
		largest=he->getLeftPtr();
	}
	if(he->getRightPtr() && he->getRightPtr()->getData()>largest->getData())
	{
		largest=he->getRightPtr();
	}
	if(largest!=he)
	{
		std::swap(largest->data,he->data);
		downHeapify(largest);
	}
}
template<class T>
Node<T>*BST<T>::lastNode()
{
	Queue<Node<T>*>q;
q.enqueue(head);
Node<T>*temp;
while(!q.isEmpty())
{
	temp=q.peek();
	q.dequeue();
	if(temp->getLeftPtr())
	{
		q.enqueue(temp->getLeftPtr());
	}
	if(temp->getRightPtr())
	{
		q.enqueue(temp->getRightPtr());
	}
}
return temp;
	
}


template<class T>
bool BST<T> :: isEmpty()
{
	if(head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}
