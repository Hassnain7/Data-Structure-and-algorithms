using namespace std;
#include<iostream>
#include "stack.h"
//#include<stack>
#include<string>
template<class T>
Stack<T> :: Stack()
{
	head = NULL;
	counter=0;
}

template<class T>	
Stack<T> ::~Stack()
{
	Node<T>* current = head;
	while(current!= NULL)
	{
		Node<T> *temp = current;
		current = current->getNextPtr();
		delete temp;
	}
}


template<class T>	
void Stack<T> :: push(T Num)
{
	Node<T> *temp = new Node<T>(Num);
	if(head == NULL)
	{
		head = temp;
	//	return;
	}
	else
	{
		Node<T>* current = head;
		while(current->getNextPtr() != NULL)
		{
			current = current->getNextPtr();
		}
		current->setNextPtr(temp);
		temp->setNextPtr(NULL);
		counter++;
	}
	
}
template<class T>
T Stack<T> :: pop()
{
	Node<T>*current=head;
	Node<T>*prev=NULL;
	if (isEmpty())
    {
       cout<<"Empty"<<endl;
    }

	while(current->getNextPtr()!=NULL)
	{
		prev=current;
		current=current->getNextPtr();
	}
	T s=current->getData();
	prev->setNextPtr(NULL);
	counter--;
	delete current;
	return s;
//head=head->getNextPtr();
//T s=current->getData();
//delete current;
//return s;
}

template<class T>
bool Stack<T> :: isEmpty()
{
	if(head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}
template<class T>
T Stack<T>::Top()
{
	if(head != NULL)
	{
		return head->getData();
	}
}
template<class T>
bool Stack<T>::isDigit(char c)
{
	 return c >= '0' && c <= '9';
}
template<class T>
void Stack<T>::evaluatePostFix(string s)
{
	
	 for(int i=0;i<s.length();i++) {
	 //	char c=expression[i];
        if (s[i]>='0'&&s[i]<='9')
		 {
            push(s[i] - '0'); // Convert char to int
        }
      else {
            int operand2 = pop();
            int operand1 =	pop();
            switch(s[i]) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                	 push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }
        }
        
	}
	cout<<pop();
}
template<class T>
int Stack<T>::prec(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*'||c=='/')
	{
		return 2;
	}
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
template<class T>
bool Stack<T>::isOperator(char c)
{
	return(c=='+'||c=='-'||c=='*'||c=='/'||c=='^');

}
template<class T>
void Stack<T>::infixToPostFix(string s)
{
	string res;
	for(int i=0;i<s.length();i++)
	{
		//char c=s[i];
	//	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	if(isalnum(s[i]))
		{
			res+=s[i];
			
		}
		else if(s[i]=='(')
		{
			push(s[i]);
		}
		else if(s[i]==')')
		{
			while(!isEmpty()&& Top()!='(')
			{
				res+=Top();
				pop();
			}
			if(!isEmpty()&&Top()=='(')
			{
				pop();
			}
		}
		 else {
	  while(!isEmpty()&&prec(Top())>=prec(s[i]))
	  {
	  	res+=Top();
	  	pop();
	  }
	  push(s[i]);
		}
}
	while(!(isEmpty()))
	{	res+="";
		res+=Top();
		pop();
	}
cout<<res;
}
template <class U>
ostream& operator<<(ostream &out, Stack<U> &d)
{
	Node<U>*current=d.head;
	for(int i=0; i<d.counter; i++)
	{
		out <<current->getData() << " ";
		current=current->getNextPtr();
	}

	return out;
	
}
