using namespace std;
//for example if there is a folder of download in the pc and according to the hererichy the tree makes
// in simple tree there is no restriction of childs but in the binary tree their is the restriction of childs
// strict binary tree= strict us that if any node has the children two just or it just doesnt contain not any children
//perfect binary tree= all nodes children are filled except for the last node but its child left is made first. first root node fill
// next the left child and right child
//if two children=we have two conditions. 1 do to 1 step right then go to leftmost and go on and you get the smallest value and till we didnt get NULL
//the smallest number we got we will replace with the node we deleted and 1 more condition and then go to left and then reach to the rightmost and find the greatest value and then replace it
// doubly linklist contains left and right pointer and inititally we stored it NULL
#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
int main()
{
	BST<int> q;
	q.insert(10);
	q.insert(5);
	q.insert(19);
	q.insert(4);
	q.insert(6);
	q.insert(2);
	//q.deleteNode(5);
	
    q.preOrder();
	cout << endl;
	
	q.inOrder();
	cout << endl;
	
	q.postOrder();
	cout << endl;
	
//	cout << q.search(1);
//	cout<<endl;
cout<<"Minimum"<<endl;
	cout<<q.FindMin();
	cout<<endl;
	cout<<"Maximum"<<endl;
cout<<q.FindMax();
	cout<<endl;
//	cout<<q.isValid();
BST<int>q1;
q1.insert(10);
q1.insert(5);
q1.insert(19);
q1.insert(4);
q1.insert(6);
q1.insert(2);
cout<<"Sum:";
	cout<<q1.SumL();
	cout<<endl;
	BST<int> q2;
	cout<<q2.isIdentical(q,q1);
	cout<<endl;
	cout<<"Kth largest"<<endl;
	cout<<q1.kthLargest(1);
	
	return 0;
}
