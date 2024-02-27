#include<iostream>
using namespace std;
#include"ticketqueue.h"
#include"ticketqueue.cpp"
#include"node.h"
#include"node.cpp"
int main()
{
	Ticket t1(1,"babar azam",5);
	Ticket t2(2,"virat kohli",2);
	Ticket t3(3,"MS DHONI",1);
	Ticket t4(4,"shaheen shah afridi",3);
	Ticket t5(5,"fakhar zaman",1);
	Ticket t6(6,"saeed anwar",4);
	TicketQueue<Ticket> T1;
	
	T1.enqueue(t1);
	T1.enqueue(t2);
	T1.enqueue(t3);
	T1.enqueue(t4);
	T1.enqueue(t5);
	T1.enqueue(t6);
	cout<<"The queue size"<<endl;
	cout<<T1.get_queue_size()<<endl;
 	T1.print_queue();
 	 /*TicketQueue<Ticket>t1;
 	 	int n;
 	do{
 	cout<<"Enter 1 to enqueue"<<endl;
 		cout<<"Enter 2 to get the size"<<endl;
 		cout<<"Enter 3 to print and dequeue"<<endl;
 		cout<<"Enter 4 to exit"<<endl;
 		cout<<"Enter the option:";
 	cin>>n;
 	switch(n)
 	{
 	
 		case 1:{
 			int id;
 			string name;
 			int prio;
 			cout<<"Enter the id"<<endl;
 			cin>>id;
 			cout<<"Enter the name"<<endl;
 			cin>>name;
 			cout<<"Enter the prio"<<endl;
 			cin>>prio;
 		Ticket t(id,name,prio);
		 t1.enqueue(t);
		 cout<<"ADDED succesfully"<<endl;
		 break;
 		}
 		case 2:
 			{
 				cout<<"The size is "<<t1.get_queue_size()<<endl;
 				break;
			 }
			 case 3:
			 	{
			 		cout<<"Printing and dequeue"<<endl;
			 		t1.print_queue();
			 		break;
				 }
				 case 4:
				 	{
				 		cout<<"Exiting the task"<<endl;
				 		break;
					 }
					 default:
					 	{
					 		cout<<"Invalid choice"<<endl;
					 		break;
						 }
 			
	 }
	 }while(n!=4);*/
/*while(!T1.isEmpty())
{
	Ticket dequeued=T1.dequeue();
	cout<<"Resolved ticket-ID"<<dequeued.getId()<<" :DESCRIPTION: "<<dequeued.getDesc()<<" : Priority "<<dequeued.getPrio()<<endl;
}*/
}
