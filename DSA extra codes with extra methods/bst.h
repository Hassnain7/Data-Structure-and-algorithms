#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED
#include<iostream>
#include"node.h"
#include<vector>
template<class T>
class BST
{
	private:
		Node<T>*head;
		public:
			BST();
			void insert(T);
			void insert(Node<T>*,T);
			void deleteNode(T );
			Node<T>* deleteNode(Node<T>*,T);
			void inorder(Node<T>*);
			void inorder();
			bool search(Node<T>*,T);
			bool search(T);
			Node<T>*inorderSuccessor(Node<T>*,T);
			void inorderSuccessor(T);
			Node<T>*inorderPredecessor(Node<T>*,T);
			void inorderPredecessor(T);
			Node<T>*LCA(Node<T>*,T,T);
			void LCA(T,T);
			Node<T>*solve(vector<T>&,T,T,T&);
			Node<T>*preOrderToBST(vector<T>&);
			bool isValid();
			int FindMax(Node<T>*);
			int FindMax();
			int FindMin(Node<T>*);
			int FindMin();
};
#endif
