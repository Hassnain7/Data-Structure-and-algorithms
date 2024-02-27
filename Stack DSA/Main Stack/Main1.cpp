using namespace std;
#include<iostream>
#include<string>
#include "stack.h"
#include "stack.cpp"
#include "node.cpp"
#include "node.h"



int main()
{
	Stack<int>q;
	q.push(9);
	q.push(15);
	q.push(7);
	cout<<q.Top()<<endl;
	q.pop();
	cout<<q.Top()<<endl;
	q.pop();
	cout<<q.Top()<<endl;
	q.pop();
	Stack<string>s1;
	s1.Palindrome("madam");
	Stack<string>s2;
	s1.Reverse("Kindness, is what defines humanity!");
	cout<<endl;
	s1.Reverse("Hello! how are you?");
	//cout<<q;
//Stack<char>q1;
//q.push('c');
//q.push('b');
//q.push('a');
//cout<<q;
 //string s="a+b*c-(d/e+f*g*h)-i";
//cout<<"Infix to postfix"<<endl;
//string s="(a-b/c)*(a/k-l)";
//string b="(a+b*c)";
//cout<<q1.infixToPostFix(b);
//cout<<q1.infixToPostFix(s);
//cout<<q;
//Stack<int>q1;
//q1.evaluatePostFix("2*5+");
//q1.push(20);
//q1.push(30);
//q1.push(50);
///q1.evaluatePostFix("49*5+");
//cout<<q1;
//	cout<<"The poopped"
//cout<<q;
//cout<<q.pop();
//	cout<<q;
	return 0;
}
