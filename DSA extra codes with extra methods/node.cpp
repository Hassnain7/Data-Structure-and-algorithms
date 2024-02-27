//using namespace std;
#include"node.h"
#include<iostream>
//#include"node.h"
template<class T>
Node<T>::Node(T a)
{
	data=a;
	LeftPtr=NULL;
	rightPtr=NULL;
}
template<class T>
void Node<T>::setData(T a)
{
	data=a;
}
template<class T>
void Node<T>::setLeftPtr(Node<T>* p)
{
		LeftPtr=p;
}
template<class T>
Node<T>*Node<T>::getLeftPtr()const
{
	return 	LeftPtr;
}
template<class T>
void Node<T>::setRightPtr(Node<T>*p)
{
	rightPtr=p;
}
template<class T>
Node<T>*Node<T>::getRightPtr()const
{
	return rightPtr;
}
template<class T>
T Node<T>::getData()const
{
	return data;
}
