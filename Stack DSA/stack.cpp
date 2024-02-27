using namespace std;
#include<iostream>
#include "stack.h"
//#include<stack>
#include<string>
#include<math.h>
#include<algorithm>
template<class T>
Stack<T> :: Stack()
{
	head = NULL;
	counter=0;
	top=0;
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
void Stack<T>::ReverseSentence(string s)
{
	string temp="";
	Stack<char>sentence;
	for(int i=0;i<s.length();i++)
	{
		char c=s[i];
		sentence.push(c);
	}
	while(!sentence.isEmpty())
	{
     cout<<sentence.Top();
     sentence.pop();
	}
	//cout<<temp<<endl;
}
template<class T>
int Stack<T>::size()
{
Node<T>*current=head;
int count=0;
while(current!=NULL)
{
	count++;
	current=current->getNextPtr();
}
return count;
}
template<class T>
void Stack<T>::solve(Stack<T>&s,int count,int size)
{
	if(count==size/2)
	{
		s.pop();
		return;
	}
	int num=s.Top();
	s.pop();
	//recursion
	solve(s,count+1,size);
	s.push(num);
}
template<class T>
void Stack<T>::deleteMiddle(Stack<T>&s,int size)
{
//	Stack<T>s;
	int count=0;
	solve(s,count,size);
}
template<class T>
void Stack<T>::deleteMiddle(int size)
{
	Stack<T>s;
	int count=0;
		solve(s,count,size);
}
template<class T>
bool Stack<T>::ValidParenthisis(string s)
{
	Stack<char>valid;
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		if(ch=='('||ch=='{'||ch=='[')
		{
			valid.push(ch);
		}
		else
		{
			if(!valid.isEmpty())
			{
				char top=valid.Top();
				if(top=='('&&ch==')'||top=='{'&&ch=='}'||top=='['&& ch==']')
				{
					valid.pop();
					return true;
				}
			}
			else
			{
				return false;
			}
			return false;
		}
	}
	if(!valid.isEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
void Stack<T>::solve1(Stack<T>&s,int x)
{
	if(s.isEmpty())
	{
		s.push(x);
		return;
	}
	int num=s.Top();
	s.pop();
	solve1(s,x);
	s.push(num);

}
template<class T>
Stack<T>&Stack<T>::pushAtBottom(Stack<T>&s,int x)
{
	solve1(s,x);
	return s;
}
template<class T>
int Stack<T>::pushAtBottom(int x)
{
	Stack<T>s;
	return pushAtBottom(s,x);
}
template<class T>
void Stack<T>::insertAtBottom(Stack<T>&s,int x)
{
	if(s.isEmpty())
	{
		s.push(x);
		return;
	}
	T num=s.Top();
	s.pop();
	insertAtBottom(s,x);
	s.push(num);
}
template<class T>
void Stack<T>::ReverseRecursive(Stack<T>&s)
{
	if(s.isEmpty())
	{
		return;
	}
	int num=s.Top();
	s.pop();
	ReverseRecursive(s);
	insertAtBottom(s,num);
}
template<class T>
void Stack<T>::sortedinsert(Stack<T>&s,int x)
{
	if(s.isEmpty()||(!s.isEmpty()&&s.Top()<x))
	{
		s.push(x);
		return;
	}
	int num=s.Top();
	s.pop();
	sortedinsert(s,x);
	s.push(num);
}
template<class T>
void Stack<T>::sort(Stack<T>&s)
{
	if(s.isEmpty())
	{
		return;
	}
	int num=s.Top();
	s.pop();
	sort(s);
	sortedinsert(s,num);
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
template<class T>
void Stack<T>::PrefixEvaluation(string s)
{
	//Stack<T>st;
	for(int i=s.length()-1;i>=0;i--)
	{
		//if(s[i]>='0'&&s[i]<='9')
		if(isdigit(s[i]))
		{
			push(s[i]-'0');
		}
		else
		{
			int operand1=Top();
			pop();
			int operand2=Top();
			pop();
			switch(s[i])
			{
				case'+':
					{
						push(operand1+operand2);
						break;
					}
					case'-':
						{
							push(operand1-operand2);
							break;
						}
						case'*':
							{
								push(operand1*operand2);
								break;
							}
							case'/':
								{
									push(operand1/operand2);
									break;
								}
								case'^':
									{
										push(pow(operand1,operand2));
										break;
									}
			}
		}
	}
	cout<< Top();
}
template<class T>
string Stack<T>::infixToPrefix(string s)
{
	reverse(s.begin(),s.end());
  string res;
  for(int i=0;i<s.length();i++)
  {
  	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
  	{
  		res+=s[i];
	  }
	  else if(s[i]==')')
	  {
	  	push(s[i]);
	  }
	  else if(s[i]=='(')
	  {
	  	while(!isEmpty()&&Top()!=')')
	  	{
	  		res+=Top();
	  		pop();
		  }
		  if(!isEmpty())
		  {
		  	pop();
		  }
	  }
	  else
	  {
	  	while(!isEmpty()&&prec(Top())>=prec(s[i]))
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
		  reverse(res.begin(),res.end());
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
