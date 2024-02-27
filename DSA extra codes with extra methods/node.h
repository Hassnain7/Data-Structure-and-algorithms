#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
using namespace std;
#include<iostream>
template<class T>
class Node
{
	private:
		Node<T>*LeftPtr;
		Node<T>*rightPtr;
		T data;
		public:
			Node(T );
			void setData(T);
			void setLeftPtr(Node<T>*);
				void setRightPtr(Node<T>*);
			Node<T>*getLeftPtr()const;
					Node<T>*getRightPtr()const;
			T getData()const;
};
#endif
