#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#include<iostream>
using namespace std;
#include "node.h"
template<class T>
class BST
{
	private:
		
		
		void insert(T, Node<T> *);//add a new node where appropriate
		
		void preOrder(Node<T>*);
		
		void inOrder(Node<T>*);
		
		void postOrder(Node<T>*);		
		
		Node<T>* deleteNode(Node<T>*, T);
		
		void makeEmpty(Node<T> *);
				int FindMin(Node<T>*);
				int FindMax(Node<T>*);
				int SumL(Node<T>*);
		
	public:
			Node<T> *head;
		BST();//set head to null
		
		~BST();// ???
		
		void insert(T);//add a new node where appropriate
		
		void preOrder();//print the tree in pre order
		
		void inOrder();
		
		void postOrder();		
	
		void deleteNode(T);
		
		bool search(T);
		int FindMin();
		int FindMax();
		bool isValid();
		int SumL();
		bool isIdentical(Node<T>*,Node<T>*);
		bool isIdentical(BST<T>&l1,BST<T>&l2);
		Node<T>*kthLargest(Node<T>*,int&,int&);
		int kthLargest(int);
};

#endif
