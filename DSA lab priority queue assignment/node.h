#ifndef NODE_H_INCLUDED
#include<iostream>
#define NODE_H_INCLUDED
template<class T>
class Node
{
	public:
		T data;
		Node<T>*nextPtr;
		Node(const T&);
			T getData()const;
			Node<T>*getNextPtr()const;
			void setData(const T&);
			void setNextPtr(Node<T>*);
};
#endif
