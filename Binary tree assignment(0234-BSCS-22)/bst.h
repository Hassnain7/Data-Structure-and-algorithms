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
		
	//add a new node where appropriate
		
		void preOrder(Node<T>*);
		
		void inOrder(Node<T>*);
		
		void postOrder(Node<T>*);		
	
		int height(Node<T>*);
		void makeEmpty(Node<T> *);
		int diameter(Node<T>*);
		bool isBalanced(Node<T>*);
		
	public:
		BST();//set head to null
		
		~BST();// ???
		
		void insert(T);//add a new node where appropriate
		
		void preOrder();//print the tree in pre order
		
		void inOrder();
		bool isBalanced();
		void postOrder();		
	int diameter();
		void deleteNode(T);
		int height();
		bool search(T);
		
};

#endif
