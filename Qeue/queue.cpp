using namespace std;
#include<iostream>
#include "queue.h"
#include<stack>
template<class T>
Queue<T> :: Queue()
{
	head = NULL;
}

template<class T>	
Queue<T> ::~Queue()
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
void Queue<T> :: enqueue(T a)
{
	Node<T> *temp = new Node<T>(a);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		Node<T>* current = head;
		while(current->getNextPtr() != NULL)
		{
			current = current->getNextPtr();
		}
		current->setNextPtr(temp);
	}
}
template<class T>
T Queue<T> :: dequeue()
{
	if(head != NULL)
	{
		T temp_data = head->getData();
		Node<T> *temp = head;
		head = head->getNextPtr();
		delete temp;
		return temp_data;
	}
}
template<class T>
T Queue<T> :: peek()
{
	if(head != NULL)
	{
		return head->getData();
	}
}
template<class T>
bool Queue<T> :: isEmpty()
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
void Queue<T>::Reverse()
{
/*	stack<T>temp;
	while(!isEmpty())
	{
		temp.push(dequeue());
	}
	while(!temp.empty())
	{
		enqueue(temp.top());
		temp.pop();
	}*/
	
				Node<T>*current=head;
				Node<T>*NextNode=head;
				Node<T>*prev=NULL;
				while(NextNode!=NULL)
				{
					NextNode=NextNode->getNextPtr();
					current->setNextPtr(prev);
					prev=current;
					current=NextNode;
				}
				head=prev;
}
template<class T>
bool Queue<T>::isVowel(char c)
{
	return((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'));
}
template<class T>
void Queue<T>::Traverse()
{
	Node<T>*current=head;
	int count=0;
	while(current!=NULL)
	{
		if(isVowel(current->getData()))
		{
		cout<<"------The data we got is---------"<<endl;
	cout<<current->getData()<<endl;	
	count++;
	}
	current=current->getNextPtr();
}
cout<<"The count of the vowels is "<<count<<endl;
}
