using namespace std;
#include<iostream>
#include "node1.h"


template<class T>

Node1<T> :: Node1(T a)
{
	data = a;
	nextPtr = NULL;
}


template<class T>
void Node1<T> :: setData(T a)
{
	data = a;
}

template<class T>
void Node1<T> :: setNextPtr (Node1<T> *p)
{
	nextPtr = p;
}

template<class T>
T Node1<T> :: getData() const
{
	return data;
}

template<class T>
Node1<T> * Node1<T> :: getNextPtr() const
{
	return nextPtr;
}
