using namespace std;
#include<iostream>
#include "Qnode.h"


template<class T>

QNode<T> :: QNode (T a)
{
	data = a;
	nextPtr = NULL;
}


template<class T>
void QNode<T> :: setData(T a)
{
	data = a;
}

template<class T>
void QNode<T> :: setNextPtr (QNode<T> *p)
{
	nextPtr = p;
}

template<class T>
T QNode<T> :: getData() const
{
	return data;
}

template<class T>
QNode<T> * QNode<T> :: getNextPtr() const
{
	return nextPtr;
}
