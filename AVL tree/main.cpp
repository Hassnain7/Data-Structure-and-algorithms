using namespace std;

#include<iostream>
#include "bst.h"
#include "bst.cpp"
#include "node.cpp"
#include "node.h"
int main()
{
	BST<int> q;
	q.insert(30);
	q.insert(10);
	q.insert(20);
//	q.insert(6);
//	insert(10);
	//q.deleteNode(6);
	
    cout<<"L to R"<<endl;
q.preOrder();
cout<<endl;
BST<int>q1;
q1.insert(30);
q1.insert(20);
q1.insert(10);
cout<<"L to L"<<endl;
q1.preOrder();
cout<<endl;
BST<int>q2;
q2.insert(20);
q2.insert(30);
q2.insert(10);
cout<<"R to L"<<endl;
q2.preOrder();
cout<<endl;
BST<int>q3;
q3.insert(30);
q3.insert(20);
q3.insert(40);
q3.insert(10);
q3.insert(25);
q3.insert(35);
q3.preOrder();
cout<<endl;
//cout << endl<<q.Height(q.gethead());
//q.RRrotate(q.gethead());

//q.preOrder();
//cout << endl<<q.Height(q.gethead());
	
//	q.inOrder();
//	cout << endl;
	
//	q.postOrder();
//	cout << endl;
	
//	cout << q.search(1);
	return 0;
}
