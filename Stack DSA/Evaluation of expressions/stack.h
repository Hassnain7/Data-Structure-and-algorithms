#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<iostream>
using namespace std;
#include "node.h"
template<class T>
class Stack
{
	private:
	
		Node<T> *head;
		int counter;
	
	
	public:
		Stack();//set head to null
		
		~Stack();// ???
		
		void push(T);//add a new node at the end of linked list with data provided as argument
		
		T pop();//return the data stored in first node and delete the first node
		T Top();
		//T peek();//return the data stored in first node
		
		bool isEmpty();//return true if there is no node in Queue
		bool isDigit(char);
		bool isOperator(char);
		void evaluatePostFix(string);
		int prec(char);
		void infixToPostFix(string);
		template<class U>
	friend ostream& operator<<(ostream&, Stack<U> &) ;
		
		
};

#endif
