#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
using namespace std;
#include<iostream>
template<class T>
class Node
{
	private:
		T data;
		Node<T>*nextPtr;
		public:
			Node(T);
			T getData()const;
			Node<T>*getNextPtr()const;
			void setData(T);
			void setNextPtr(Node*);
			template<class v>
			friend ostream& operator<<(ostream &,Node<v>&);
};
#endif
