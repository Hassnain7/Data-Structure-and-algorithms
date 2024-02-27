#ifndef TICKET_H_INCLUDED	
#include<iostream>
#include<string>
using namespace std;
#define TICKET_H_INCLUDED
class Ticket
{
  public:
  	int ticketID;
		string description;
		int priority;
		Ticket();
		Ticket(int,const string&,int);
		int getId()const;
		string getDesc()const;
		int getPrio()const;	
};
#endif	
