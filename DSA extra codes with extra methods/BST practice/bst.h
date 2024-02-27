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
	 Node<T>*KthSmallest(Node<T>*,int&,int&);
	 int KthSmallest(int);
	 Node<T>*KthLargest(Node<T>*,int&,int&);
	 int KthLargest(int);
		void inOrder();
		Node<T>*inorderSuccessor(Node<T>*,int);
		void inorderSuccessor(int );
		Node<T>*inorderPredecessor(Node<T>*,int);
		void inorderPredecessor(int);
		void postOrder();		
	
		void deleteNode(T);
		
		bool search(T);
};

#endif
