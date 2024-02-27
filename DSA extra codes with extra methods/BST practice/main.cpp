using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
int main()
{
	BST<int> q;
	q.insert(5);
	q.insert(2);
	q.insert(7);
	q.insert(4);
	q.insert(3);
	q.insert(18);
	q.insert(6);
	q.insert(9);
	q.insert(8);
	q.insert(10);
//	q.deleteNode(6);
	
   /* q.preOrder();
	cout << endl;
	
	q.inOrder();
	cout << endl;
	
	q.postOrder();
	cout << endl;
	
	cout << q.search(1);
	cout<<endl;
	cout<<q.KthSmallest(1);
	cout<<endl;
	cout<<q.KthLargest(1);
	cout<<endl;*/
	q.inorderSuccessor(8);
	cout<<endl;
	q.inorderPredecessor(4);
	return 0;
}
