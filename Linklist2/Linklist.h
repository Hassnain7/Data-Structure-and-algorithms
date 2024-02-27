#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
using namespace std;
#include<iostream>
#include"node.h"
//#include"student.h"
template<class T>
class Linklist
{
	private:
		int counter;
		Node<T>*head;
		public:
			Linklist();
			~Linklist();
			void addElement(T);
			void addElementAt(int,T a);
			void deleteElementAT(int);
			void deleteElement(T);
			void findElement(T);
			T getElementAT(int)const;
			void sorting();
			void MeritList(int);
			void sorting1();
			void updateElementAt(int,T);
			void BubbleSort();
			void InsertionSort();
			void makeEmpty();
			template<class U>
			friend ostream &operator <<(ostream &,const Linklist<U>& );
};
#endif
