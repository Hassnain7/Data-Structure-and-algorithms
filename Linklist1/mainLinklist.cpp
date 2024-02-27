using namespace std;
#include<iostream>
#include"Linklist.h"
#include"LinkList.cpp"
#include"node.h"
#include"NodeE1.cpp"
int main()
{
//	Linklist<int>temp;
//	temp.addElement(20);
//	temp.addElement(30);
//	temp.addElement(50);
//	temp.addElementAt(1,3);
//	cout<<temp;
/*	Linklist<int>temp;
	temp.addElement(1);
temp.addElement(2);
temp.addElement(2);
temp.addElement(4);
temp.addElement(3);
temp.addElement(0);
temp.addElement(2);
temp.addElement(8);
temp.addElement(2);
temp.addElement(5);
temp.addElement(4);
temp.addElement(5);
temp.RemoveDuplicate();
cout<<temp;*/
Linklist<int>temp;
temp.addElement(50);
temp.addElement(40);
temp.addElement(30);
temp.Reverse(temp);
cout<<temp;
//temp.RemoveRD();
//cout<<temp.Mean();
//cout<<temp.Mode();
//cout<<temp;
/*	cout<<"The bubble sorting is :"<<endl;
	temp.BubbleSort(temp);
	cout<<temp<<endl;
	cout<<"The insertion sort is: "<<endl;
	temp.InsertionSort(temp);
	cout<<temp<<endl;*/
/*	Linklist<int>l1;
	l1.addElement(1);
	l1.addElement(2);
	l1.addElement(3);
	l1.addElement(4);
	l1.addElement(5);
	l1.Reverse(l1);
	cout<<"The reverse of the linklist"<<endl;
	cout<<l1<<endl;;
	Linklist<int>L1;
	L1.addElement(2);
	L1.addElement(3);
	L1.addElement(1);
	Linklist<int>L2;
	L2.addElement(4);
	L2.addElement(5);
	cout<<"The concetination"<<endl;
	L1.Concecinate(L1,L2);
	Linklist<int>N1;
	N1.addElement(1);
	N1.addElement(2);
	N1.addElement(3);
	N1.addElement(5);
	N1.addElement(7);
	N1.addElement(9);
	N1.addElement(10);
	cout<<"The median is:"<<endl;
	cout<<N1.median(N1)<<endl;*/
/*	Linklist<int>l1;
	l1.addElement(1);
	l1.addElement(2);
	l1.addElement(3);
	l1.addElement(2);
	l1.addElement(1);
	cout<<l1.Palindrome(l1);*/
	
/*	cout<<temp.getElementAT(2);
	cout<<endl;
	temp.deleteElement(10);
	cout<<temp;*/
}
