using namespace std;
#include<iostream>
#include"node.h"
#include"node.cpp"
#include"bst.cpp"
#include"bst.h"
int main()
{
	BST<int>b;
b.insert(50);
b.insert(20);
b.insert(60);
b.insert(10);
b.insert(15);
b.insert(60);
b.insert(59);
//cout<<b.isValid()<<endl;
b.inorderSuccessor(59);
cout<<endl;
b.inorderPredecessor(20);
}
