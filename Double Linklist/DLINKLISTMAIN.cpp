using namespace std;
#include<iostream>
#include"Dlinklist.h"
#include"Dlinklist.cpp"
#include"Dnode.h"
#include"Dnode.cpp"
int main()
{
/*	DLinklist<int>temp;
	temp.addElement(20);
//	temp.addElementAt(1,30);//logic worked
	temp.addElement(40);
//	temp.addElementAt(2,50);
	temp.deleteElementAt(1);//logic worked
	temp.addElementAt(1,23);//logic worked
	temp.deleteElementAt(2);//logic worked
	temp.addElement(90);
	temp.deleteElement(90);
	cout<<temp;*/
	DLinklist<int>temp;
	temp.addElement(20);
	temp.addElement(40);
temp.addElement(50);
		temp.Reverse();
	cout<<temp;
}
