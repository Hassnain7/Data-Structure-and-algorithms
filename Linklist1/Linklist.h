#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
using namespace std;
#include<iostream>
#include"node.h"
template<class T>
class Linklist
{
	private:
		int counter;
		Node<T>*head;
		public:
				//Node<T>*head;
			Linklist();
			~Linklist();
			void addElement(T);
			void addElementAt(int,T);
			void deleteElementAT(int);
			void deleteElement(T);
			void Reverse(Linklist<T>&l1);
			void Concecinate(Linklist&,Linklist&);
			void findElement(T)const;
			T median(Linklist&);
			T getElementAT(int)const;
			void updateElementAt(int,T);
			void RemoveDuplicate();
			void RemoveRD();
		T Mean();
		T Mode();
		    Linklist*BubbleSort(Linklist&);
			Linklist*InsertionSort(Linklist&);
			void makeEmpty();
			void ReverseRecursion(Node<T>*,Node<T>*);
			void ReverseRecursion(Linklist<T>&);
			bool Palindrome(Linklist&);
			template<class U>
			friend ostream &operator <<(ostream &,Linklist<U>& );
};
#endif
