#include<iostream>
#include"node.h"
template<class T>
Node<T>::Node(const T&a)
{
	data=a;
	nextPtr=NULL;
}
template<class T>
T Node<T>::getData()const
{
	return data;
}
template<class T>
Node<T>*Node<T>::getNextPtr()const
{
	return nextPtr;
}
template<class T>
void Node<T>::setData(const T& d)
{
	data=d;
}
template<class T>
void Node<T>::setNextPtr(Node<T>*ptr)
{
	nextPtr=ptr;
}
