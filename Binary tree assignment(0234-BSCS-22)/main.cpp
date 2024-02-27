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
BST<int>q;
q.insert(3);
q.insert(5);
q.insert(4);
cout<<q.isBalanced()<<endl;	
	return 0;
}
