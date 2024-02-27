#ifndef TICKETQUEUE_H_INCLUDED
#include<iostream>
#include"node.h"
#include"ticket.h"
#define TICKETQUEUE_H_INCLUDED
template<class T>
class TicketQueue
{
	public:
		Node<T>*head;
		TicketQueue();
		void enqueue(const T&);
		bool isEmpty();
		Ticket dequeue();
		int get_queue_size();
		void print_queue();
};
#endif
