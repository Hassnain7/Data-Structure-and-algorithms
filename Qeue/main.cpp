using namespace std;
#include<iostream>

#include "queue.h"
#include "queue.cpp"
#include "node.cpp"
#include "node.h"



int main()
{
	Queue<char>c;
	cout<<"*****************The Task of Vowels*************"<<endl;
	c.enqueue('A');
	c.enqueue('E');
	c.enqueue('I');
	c.enqueue('O');
	c.enqueue('U');
	c.Traverse();
	Queue<int> q;
	cout<<"**********Reverse of the Queue**************"<<endl;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
/*	cout << q.peek() << endl;
	cout << q.dequeue() << endl;
	cout << q.peek() << endl;
	cout << q.dequeue() << endl;*/
	q.Reverse();
	while(!q.isEmpty())
	{
		cout<<q.dequeue()<<endl;
	}
	//	cout << q.peek() << endl;
	//cout<<q;
	return 0;
}
