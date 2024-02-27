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
		int top;
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
		T topData();
       void Palindrome(string);
       void Reverse(string);
       void ReverseSentence(string);
		int prec(char);
		string infixToPostFix(string);
       void solve(Stack<T>&,int,int);
		void deleteMiddle(int);
      void deleteMiddle(Stack<T>&,int);
		int size();
		bool ValidParenthisis(string);
		Stack<T>&pushAtBottom(Stack<T>&,int);
		int pushAtBottom(int );
		void solve1(Stack<T>&,int);
		void ReverseRecursive(Stack<T>&);
		void insertAtBottom(Stack<T>&,int);
		void sort(Stack<T>&);
		void sortedinsert(Stack<T>&,int);
		void PrefixEvaluation(string);
		string infixToPrefix(string);
		template<class U>
	friend ostream& operator<<(ostream&, Stack<U> &) ;
		
		
};

#endif
