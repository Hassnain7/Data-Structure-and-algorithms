using namespace std;
#include"node.h"
#include<iostream>
template<class T>
 Node<T>::Node(T a)
{
	data=a;
	nextPtr=NULL;
}
template<class T>
void Node<T>::setData(T a)
{
	data=a;
}
template<class T>
T Node<T>::getData()const
{
	return data;
}
template<class T>
void Node<T>::setNextPtr(Node<T>*n)
{
	nextPtr=n;
}
template<class T>
Node<T>*Node<T>::getNextPtr()const
{
	return nextPtr;
}
template<class T>
ostream &operator<<(ostream &out, Node<T> &z)
{
	out<<z.getData();
	out<<z.getNextPtr();
	return out;
}

