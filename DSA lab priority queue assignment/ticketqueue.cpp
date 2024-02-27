#include<iostream>
#include"ticketqueue.h"
#include"ticket.cpp"
using namespace std;
template<class T>
TicketQueue<T>::TicketQueue()
{
	head=NULL;
}
template<class T>
void TicketQueue<T>::enqueue(const T& ticket)
{
		Node<T>*newNode=new Node<T>(ticket);
			if(head==NULL)
			{
				head=newNode;
			}
			else
			{
				if(ticket.getPrio()<head->getData().getPrio())
				{
					newNode->setNextPtr(head);
					head=newNode;
				}
				
				
				else
				{
					Node<T>*temp=head;
					while(temp->getNextPtr() && temp->getNextPtr()->getData().getPrio()<=ticket.getPrio())
					{
						temp=temp->getNextPtr();
					}
				//	temp->setNextPtr(newNode);
				newNode->setNextPtr(temp->getNextPtr());
				temp->setNextPtr(newNode);
				}
			}
}
template<class T>
bool TicketQueue<T>::isEmpty()
{
	if(head!=NULL)
			{
				return false;
			}
			else
			{
				return true;
			}
}
template<class T>
Ticket TicketQueue<T>::dequeue()
{
	if(!isEmpty())
			{
				Node<T>*temp=head;
				Ticket dequeued=temp->getData();
				head=head->getNextPtr();
				delete temp;
				return dequeued;
			}
			else
			{
				cout<<"cannot perfrom";
			}
}
template<class T>
int TicketQueue<T>::get_queue_size()
{
		int size=0;
			Node<T>*temp=head;
			while(temp!=NULL)
			{
				temp=temp->getNextPtr();
				size++;
			}
			return size;
}
template<class T>
void TicketQueue<T>::print_queue()
{
	/*	Node<T>*temp=head;
			while(temp!=NULL)
			{
				cout<<" Ticket ID "<<temp->getData().ticketID<<" Description "<<temp->getData().description<<" priority "<<temp->getData().priority<<endl;
				temp=temp->getNextPtr();
			}*/
			while(!isEmpty())
{
	Ticket dequeued=dequeue();
	cout<<"Resolved ticket-ID"<<dequeued.getId()<<" :DESCRIPTION: "<<dequeued.getDesc()<<" : Priority "<<dequeued.getPrio()<<endl;
}
}
