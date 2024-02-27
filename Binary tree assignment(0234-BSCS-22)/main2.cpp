using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
//#include "node.cpp"
#include "node.h"
#include"Qnode.h"
//#include"Qnode.cpp"
//#include"queue.cpp"
#include"queue.h"
int main()
{
	BST<int> q;
	q.insert(10);
	q.insert(20);
	q.insert(30);
	q.insert(40);
	q.insert(50);
	q.insert(60);
	q.insert(70);
//	q.deleteNode(6);
	cout<<"Pre order"<<endl;
    q.preOrder();
	cout << endl;
	cout<<"In order"<<endl;
	q.inOrder();
	cout << endl;
	cout<<"Post Order"<<endl;
	q.postOrder();
	cout << endl;
	cout<<"Height"<<endl;
	cout<<q.height()<<endl;
	cout<<endl;
	cout<<"diameter"<<endl;
	cout<<q.diameter()<<endl;
	cout<<"is balance"<<endl;
	cout<<q.isBalanced()<<endl;
//	cout << q.search(1);
}
