#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<iostream>
using namespace std;
#include "Qnode.h"
template<class T>
class Queue
{
	private:
	
		QNode<T> *head;
	
	
	public:
		Queue();//set head to null
		
		~Queue();// ???
		
		void enqueue(T);//add a new node at the end of linked list with data provided as argument
		
		T dequeue();//return the data stored in first node and delete the first node
		
		T peek();//return the data stored in first node
		void Reverse();
		bool isVowel(char);
		bool isEmpty();//return true if there is no node in Queue
		void Traverse();
		
		
};

#endif
