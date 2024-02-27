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
	Stack<string>c;
	c.Palindrome("ABBA");
	//q1.size();
	//cout<<endl;
//	q1.deleteMiddle(3);
/*Stack<char>q2;
cout<<q2.infixToPostFix("a+b*c");
cout<<endl;
Stack<int>q3;
q3.push(3);
q3.push(5);
q3.push(4);
q3.push(6);
//cout<<q3.size()<<endl;
q3.deleteMiddle(q3,q3.size());
while(!q3.isEmpty())
{
	cout<<q3.Top()<<endl;
	q3.pop();
}
*/

	return 0;
}
