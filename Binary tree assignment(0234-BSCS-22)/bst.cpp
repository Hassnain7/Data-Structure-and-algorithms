using namespace std;
#include<cmath>
#include<iostream>
#include "bst.h"
#include"Qnode.h"
#include"queue.cpp"
#include"node.h"
#include"Qnode.cpp"
#include"node.cpp"
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
void BST<T> :: insert(T data)
{
		if(head == NULL)
	{
		head = new Node<T>(data);
		return;
	}
	Queue<Node<T>*>q;
	q.enqueue(head);
	while(!q.isEmpty())
	{
		Node<T>*temp=q.peek();
		q.dequeue();
		if(!temp->getLeftPtr())
		{
			temp->setLeftPtr(new Node<T>(data));
			break;
		}
		else
		{
			q.enqueue(temp->getLeftPtr());
		}
		if(!temp->getRightPtr())
		{
			temp->setRightPtr(new Node<T>(data));
			break;
		}
		else
		{
			q.enqueue(temp->getRightPtr());
		}
	}
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
		//preOrder(head->getLeftPtr());
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
		postOrder(head->getLeftPtr());
		postOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}

template<class T>
void BST<T> :: postOrder(Node<T> *head)
{
	if(head != NULL)
	{
		postOrder(head->getLeftPtr());
		postOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}
template<class T>
int BST<T>::height()
{
	return height(head);
}
template<class T>
int BST<T>::height(Node<T>*head)
{
	if(head==NULL)
	{
		return 0;
	}
	int left=height(head->getLeftPtr());
	int right=height(head->getRightPtr());
	int ans=max(left,right)+1;
	return ans;
}
template<class T>
int BST<T>::diameter()
{
	return diameter(head);
}
template<class T>
int BST<T>::diameter(Node<T>*head)
{
	if(head==NULL)
	{
		return 0;
	}
	int op1=diameter(head->getLeftPtr());
	int op2=diameter(head->getRightPtr());
	int op3=height(head->getLeftPtr())+height(head->getRightPtr())+1;
	int ans=max(op1,max(op2,op3));
	return ans;
}
template<class T>
bool BST<T>::isBalanced()
{
	return isBalanced(head);
}
template<class T>
bool BST<T>::isBalanced(Node<T>*head)
{
	if(head==NULL)
	{
		return true;
	}
	bool left=isBalanced(head->getLeftPtr());
	bool right=isBalanced(head->getRightPtr());
	bool diff=abs(height(head->getLeftPtr())-height(head->getRightPtr()))<=1;
	if(left&&right&&diff)
	{
		return 1;
	}
	return false;
}

/*int main()
{
	BST<int> q;
	q.insert(10);
	q.insert(5);
	q.insert(19);
	q.insert(6);
//	q.deleteNode(6);
	
    q.preOrder();
	cout << endl;
	
	q.inOrder();
	cout << endl;
	
	q.postOrder();
	cout << endl;
	
//	cout << q.search(1);
	return 0;
}*/
