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
	/*Node<T> *temp = new Node<T>(Num);
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
	}*/
	Node<T>*temp=new Node<T>(Num);
	temp->setNextPtr(head);
	head=temp;
	counter++;
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

//	while(current->getNextPtr()!=NULL)
//	{
//		prev=current;
//		current=current->getNextPtr();
//	}
//	T s=current->getData();
//	prev->setNextPtr(NULL);
//	counter--;
//	delete current;
//	return s;
head=head->getNextPtr();
T s=current->getData();
counter--;
delete current;
return s;
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
T Stack<T>::topData()
{
	if(isEmpty())
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
void Stack<T>::Palindrome(string s)
{
	Stack<char>stack;
	for(int i=0;i<s.length();i++)
	{
		stack.push(s[i]);
	}

	for(int i=0;i<s.length();i++)
	{
		if(stack.Top()==s[i])
		{
			cout<<"This is Palindrome"<<endl;
		return;
		}
		else
		{
	stack.pop();
}
	}
	cout<<"not palindrome"<<endl;
}
template<class T>
void Stack<T>::Reverse(string s)
{
	Stack<string>character;
	Stack<char>special;
	string temp;
	for(int i=0;i<s.length();i++)
	{
		if(isalpha(s[i]))
		{
			temp.push_back(s[i]);
		}
		else if(s[i]=='!'|| s[i]=='?'||s[i]=='.'||s[i]==',')
		{
			special.push(s[i]);
			character.push(temp);
			temp=" ";
		}
		else if(s[i]==' ')
		{
			character.push(temp);
			temp=" ";
		}
}
while(!character.isEmpty())
{
	
	cout<<character.Top();
	character.pop();
}
while(!special.isEmpty())
{
	cout<<special.Top();
	special.pop();
}

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
		return -1;
	}
}
template<class T>
bool Stack<T>::isOperator(char c)
{
	return(c=='+'||c=='-'||c=='*'||c=='/'||c=='^');

}
template<class T>
string Stack<T>::infixToPostFix(string s)
{
	string res;
	for(int i=0;i<s.length();i++)
	{
		//char c=s[i];
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
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
			if(!isEmpty())
			{
				pop();
			}
		}
		 else {
	  while(!isEmpty()&&prec(Top())>prec(s[i]))
	  {
	  	res+=Top();
	  	pop();
	  }
	  push(s[i]);
		}
}
	while(!isEmpty())
	{
		res+=Top();
		pop();
	}
return res;
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
