using namespace std;
#include<iostream>
#include<string>
#include "stack.h"
#include "stack.cpp"
#include "node.cpp"
#include "node.h"



int main()
{
	Stack<int>q1;
	q1.push(9);
	q1.push(15);
	q1.push(7);
	cout<<q1.Top()<<endl;
	q1.pop();
	cout<<q1.Top()<<endl;
	q1.pop();
	cout<<q1.Top()<<endl;
	q1.pop();
	cout<<endl;
	//q1.size();
	//cout<<endl;
//	q1.deleteMiddle(3);
	Stack<char>q;
string s="(a-b/c)*(a/k-l)";
string b="(a+b*c)";
cout<<q.infixToPostFix(b);
cout<<endl;
cout<<q.infixToPostFix(s);
//cout<<q;
//Stack<int>q1;
//q1.evaluatePostFix("2*5+");
//q1.push(20);
//q1.push(30);
//q1.push(50);
//cout<<q1;
cout<<endl;
q1.evaluatePostFix("49*5+");
Stack<char>q2;
q2.Reverse("Hello! how are you?");
cout<<endl;
Stack<string>q3;
q3.ReverseSentence("QAZI");
Stack<int>q4;
q4.push(3);
q4.push(4);
q4.push(5);
q4.push(6);
q4.deleteMiddle(q4,q4.size());
cout<<endl;
cout<<q4.size()<<endl;
Stack<char>q5;
cout<<q5.ValidParenthisis("{(}");
cout<<endl;
Stack<int>q6;
q6.push(7);
q6.push(8);
q6.pushAtBottom(q6,9);
while(!q6.isEmpty())
{
	cout<<q6.pop()<<endl;
}
cout<<endl;
cout<<"sorting";
cout<<endl;
Stack<int>q7;
q7.push(7);
q7.push(8);
q7.push(16);
q7.push(5);
q7.sort(q7);

while(!q7.isEmpty())
{
	cout<<q7.pop()<<endl;
}
cout<<"Reversing";
cout<<endl;
Stack<int>q8;
q8.push(16);
q8.push(9);
q8.push(15);
q8.ReverseRecursive(q8);
while(!q8.isEmpty())
{
	cout<<q8.pop()<<endl;
}
cout<<"Prefix"<<endl;
Stack<int>q9;
q9.PrefixEvaluation("-+*23*549");
cout<<endl;
Stack<char>q10;
cout<<q10.infixToPrefix("(A+B)/(C*D)*(E/F)");
//	cout<<"The poopped"
//cout<<q;
//cout<<q.pop();
//	cout<<q;
	return 0;
}
