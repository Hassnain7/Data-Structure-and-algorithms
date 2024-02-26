using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
#include"node1.h"
//#include"Qnode.cpp"
//#include"queue.cpp"
#include"queue.h"
int main()
{
	BST<int>h;
	h.insert(50);
	h.insert(70);
	h.insert(56);
	h.insert(58);
	h.insert(89);
	h.insert(46);
	h.insert(9);
	h.deleteNode();
	cout<<"Inorder"<<endl;
	h.inOrder();

	return 0;
}
