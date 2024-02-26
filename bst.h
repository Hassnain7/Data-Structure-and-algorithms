#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#include<iostream>
using namespace std;
#include "node.h"
template<class T>
class BST
{
	private:
		
		Node<T> *head;
		
		void insert(T, Node<T> *);//add a new node where appropriate
		
		void preOrder(Node<T>*);
		
		void inOrder(Node<T>*);
		
		void postOrder(Node<T>*);		
		
		Node<T>* deleteNode(Node<T>*, T);
		
		void makeEmpty(Node<T> *);
		
	public:
		BST();//set head to null
		
		~BST();// ???
		
		void insert(T);//add a new node where appropriate
		
		void preOrder();//print the tree in pre order
		
		void inOrder();
		
		void postOrder();		
	
		void deleteNode();
		
		bool search(T);
		Node<T>*lastParent();
		void upHeapify(Node<T>*);
		void swap(T&,T&);
		Node<T>*lastNode();
			bool isEmpty();
			void downHeapify(Node<T>*);
};

#endif