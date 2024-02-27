using namespace std;
#include<iostream>
#include<string>
#include "stack.h"
#include "stack.cpp"
#include "node.cpp"
#include "node.h"



int main()
{
//Stack<char>q;
//q.push('c');
//q.push('b');
//q.push('a');
//cout<<q;
 //string s="a+b*c-(d/e+f*g*h)-i";
//q.infixToPostFix(s);
Stack<char>q;
cout<<"Infix to postfix"<<endl;
string s="(a-b/c)*(a/k-l)";
q.infixToPostFix(s);
//cout<<q;
Stack<int>q1;
//q1.evaluatePostFix("2*5+");
q1.push(20);
q1.push(30);
q1.push(50);
cout<<q1;
q1.evaluatePostFix("49*5+");
//	cout<<"The poopped"
//cout<<q;
//cout<<q.pop();
//	cout<<q;
	return 0;
}
