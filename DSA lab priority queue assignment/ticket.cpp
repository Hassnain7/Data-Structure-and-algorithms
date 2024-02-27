#include<iostream>
#include"ticket.h"
using namespace std;
Ticket::Ticket()
{
	
}
Ticket::Ticket(int id,const string& des,int pri)
{
ticketID=id;
			description=des;
			priority=pri;
}
int Ticket::getId()const
{
	return ticketID;
}
string Ticket::getDesc()const
{
	return description;
}
int Ticket::getPrio()const
{
	return priority;
}
