//#ifndef LIST_H_INCLUDED
//#define LIST_H_INCLUDED
using namespace std;
#include<iostream>
#include"Linklist.h"
template<class T>
Linklist<T>::Linklist()
{
	counter=0;
	head=NULL;
}
template<class T>
		void Linklist<T>::addElementAt(int index,T a)
		{
			Node<T>*temp=new Node<T>(a);
			if(index<=0||index>counter+1)
			{
				cout<<"Invalid"<<endl;
			}
			else if(index==1)
			{
				head=temp;
				temp->setNextPtr(head);//for circular
				temp->setNextPtr(NULL);
				counter++;
			}
			else if(index==counter+1)
			{
				Node<T>*current=head;
				while(current->getNextPtr()!=NULL)
				{
					current=current->getNextPtr();
				}
					current->setNextPtr(temp);
					temp->setNextPtr(current);//for circular
					temp->setNextPtr(NULL); 
				counter++;
			}
			else
			{
				Node<T>*current=head;
				for(int i=2;i<index;i++)
				//while(current->getNextPtr()!=NULL)
				{
					current=current->getNextPtr();
				}
				temp->setNextPtr(current->getNextPtr());
				current->setNextPtr(temp);
			//	current->getNextPtr()->setNextPtr(current);//for circular
				counter++;
			//	return;
			}
		}
		template<class T>
		void Linklist<T>::addElement(T d)
		{
			return addElementAt(counter+1,d);
		}
		template<class T>
		void Linklist<T>::deleteElementAT(int index)
		{
			if(head==NULL)
			{
				cout<<"Empty list";
			}
			else if(index<=0||index>counter+1)
			{
				cout<<"invalid index";
			}
			else if(index==1)
			{
				Node<T>*current=head;
				head=current->getNextPtr();
			//for circular
	//	current=current->getNextPtr();
	//			current->getNextPtr()->setNextPtr(head);//for circular
				counter--;
				//for circular
			//	delete head;
				delete current;
				return;
			}
			else if(index==counter)
			{
				Node<T>*current=head;
				Node<T>*previous=NULL;
				while(current->getNextPtr()!=NULL)
				{
					previous=current;
					current=current->getNextPtr();
				}
				previous->setNextPtr(NULL);
				counter--;
				delete current;
				return;
			}
			else
			{
					Node<T>*current=head;
				Node<T>*previous=NULL;
				while(current->getNextPtr()!=NULL)
				{
					previous=current;
					current=current->getNextPtr();
				}
				previous->setNextPtr(current->getNextPtr());
				counter--;
				delete current;
				return;	
			}
		}
	template<class T>
		T Linklist<T>::median(Linklist<T>&l1)
		{
			int size=counter/2;
	
			if(size%2!=0)
			{
				Node<T>*current=l1.head;
				for(int i=1;i<=size;i++)
				{
					current=current->getNextPtr();
				}
				return current->getData();
			}
				Node<T>*current=l1.head;
				for(int i=1;i<=(size)+1;i++)
				{
					current=current->getNextPtr();
				}
				return current->getData();
			}
			template<class T>
			void Linklist<T>::Reverse(Linklist<T>&l1)
			{
				Node<T>*current=l1.head;
			//	Node<T>*NextNode=l1.head;
				Node<T>*prev=NULL;
			//	while(NextNode!=NULL)
			while(current!=NULL)
				{
					//NextNode=NextNode->getNextPtr();
					Node<T>*NextNode=current->getNextPtr();
					current->setNextPtr(prev);
					prev=current;
					current=NextNode;
				}
				l1.head=prev;
			}
			template<class T>
			bool Linklist<T>::Palindrome(Linklist<T>&l1)
			{
				Node<T>*fast=l1.head;
				Node<T>*slow=l1.head;
				while(fast!=NULL&&fast->getNextPtr()!=NULL)
				{
					slow=slow->getNextPtr();
					fast=fast->getNextPtr()->getNextPtr();
				}
				Node<T>*current=l1.head;
				Node<T>*NextNode=l1.head;
				Node<T>*prev=NULL;
				while(NextNode!=NULL)
				{
					NextNode=NextNode->getNextPtr();
					current->setNextPtr(prev);
					prev=current;
					current=NextNode;
				}
				l1.head=prev;
				fast=head;
				while(prev!=NULL)
				{
					if(fast->getData()!=prev->getData())
					{
						return false;
					}
					fast=fast->getNextPtr();
					prev=prev->getNextPtr();
				}
				cout<<"The linklist is palindrome"<<endl;
				return true;
				
			}
		template<class T>
		void Linklist<T>::Concecinate(Linklist<T>&l1,Linklist<T>&l2)
		{
			Node<T>*current=l1.head;
			while(current->getNextPtr()!=NULL)
			{
				current=current->getNextPtr();
			}
			current->setNextPtr(l2.head);
			cout<<l1<<endl;
		}
		template<class T>
		void Linklist<T>::deleteElement(T d)
		{
		  if(head==NULL)
		  {
		  	cout<<"Empty";
		  }
		  else if(head->getData()==d)
		  {
		  	Node<T>*current=head;
		  	head=head->getNextPtr();
		  	delete current;
		  	return;
		  }
		  else
		  {
		  	Node<T>*current=head;
		  	Node<T>*previous;
		  	while(current->getNextPtr()!=NULL)
		  	{
		  		previous=current;
		  		current=current->getNextPtr();
		  		if(current->getData()==d)
		  		{
		  			previous->setNextPtr(current->getNextPtr());
		  			counter--;
		  			delete current;
		  			return;
				  }
			  }
		  }
		  return;
		}
		template<class T>
		void Linklist<T>::findElement(T d)const
		{
			if(head==NULL)
			{
				cout<<"empty";
			}
			else if(head->getData()==d)
			{
				return;
			}
			else
			{
				Node<T>*current=head;
				while(current->getNextPtr()!=NULL)
				{
					current=current->getNextPtr();
					if(current->getData()==d)
					{
						return;
					}
				}
			}
		}
	template<class T>
	T Linklist<T>::getElementAT(int index)const
	{
		if(head==NULL)
		{
			return 0;
		}
		else if(index<=0||index>counter)
		{
			return 0;
		}
		else if(index==1)
		{
			return head->getData();
		}
		else
		{
			Node<T>*current=head;
			for(int i=2;i<=index;i++)
			{
				current=current->getNextPtr();
			}
			return current->getData();
		}
	}
	template<class T>
	void Linklist<T>::RemoveDuplicate()
	{
		Node<T>*current=head;
		while(current!=NULL&&current->getNextPtr()!=NULL)
		{
			if(current!=NULL &&current->getData()==current->getNextPtr()->getData())
			{
			Node<T>*temp=current->getNextPtr();
		//	delete current->getNextPtr();
			current->setNextPtr(temp->getNextPtr());
			}
		current=current->getNextPtr();
			}
	}
	template<class T>
	void Linklist<T>::RemoveRD()
	{
      		int swapped,i;
		Node<T>*current;
		Node<T>*endPtr=NULL;
	//	Linklist<T>*sort=new Linklist<T>();
		do
		{
			swapped=0;
			current=head;
			while(current->getNextPtr()!=endPtr)
			{
				if(current->getData()>current->getNextPtr()->getData())
				{
					T temp;
					temp=current->getData();
					current->setData(current->getNextPtr()->getData());
					current->getNextPtr()->setData(temp);
					swapped=1;
				}
				current=current->getNextPtr();
			}
			endPtr=current;
		}
		while(swapped);
	RemoveDuplicate();
	}
	template<class T>
	T Linklist<T>::Mean()
	{
		Node<T>*current=head;
		//Node<T>*Next=NULL;
		T temp=0;
		//	Node<T>*Next=current;
		while(current!=NULL)
		{
	     temp=temp+current->getData();
	     current=current->getNextPtr();
	   //  Next=Next->getNextPtr();
			
		}
		return temp/counter;
	}
	template<class T>
	T Linklist<T>::Mode()
	{

    Node<T>* current = head;
    T mode_value = current->getData();
    int max_frequency = 1;
    int current_frequency = 1;

    while (current->getNextPtr() !=NULL) {
        if (current->getData() == current->getNextPtr()->getData()) {
            current_frequency++;
        } else {
            if (current_frequency > max_frequency) {
                max_frequency = current_frequency;
                mode_value = current->getData();
            }
            current_frequency = 1;
        }
        current = current->getNextPtr();
    }

    if (current_frequency > max_frequency) {
        mode_value = current->getData();
    }

    return mode_value;
	}
	template<class T>
	void Linklist<T>::updateElementAt(int index,T d)
	{
		if(head==NULL)
		{
			cout<<"Empty list";
		}
		else if(index<=0||index>counter)
		{
			cout<<"Invalid";
		}
		else if(index==1)
		{
			head->setData(d);
			return;
		}
		else
		{
			Node<T>*current=head;
			for(int i=2;i<=index;i++)
			{
				current=current->getNextPtr();
			}
			current->setData(d);
			return;
		}
	}
	template<class T>
	void Linklist<T>::makeEmpty()
	{
		if(head!=NULL)
		{
			Node<T>*current=head;
			Node<T>*previous;
			while(current->getNextPtr()!=NULL)
			{
				previous=current;
				current=current->getNextPtr();
				delete previous;
			}
			delete current;
			counter=0;
			head=NULL;
		}
	}
	template<class T>
 Linklist<T>::~Linklist()
	{
		makeEmpty();
	}
	template<class T>
	Linklist<T>*Linklist<T>::BubbleSort(Linklist<T>&l)
	{
		int swapped,i;
		Node<T>*current;
		Node<T>*endPtr=NULL;
		Linklist<T>*sort=new Linklist<T>(l);
		do
		{
			swapped=0;
			current=sort->head;
			while(current->getNextPtr()!=endPtr)
			{
				if(current->getData()>current->getNextPtr()->getData())
				{
					T temp;
					temp=current->getData();
					current->setData(current->getNextPtr()->getData());
					current->getNextPtr()->setData(temp);
					swapped=1;
				}
				current=current->getNextPtr();
			}
			endPtr=current;
		}
		while(swapped);
		return sort;
	}
	
template<class T>
	Linklist<T>*Linklist<T>::InsertionSort(Linklist<T>&s)
	{
			Linklist<T>*insert=new Linklist<T>(s);
		Node<T>*insertion=NULL;
		Node<T>*current=insert->head;
	
		while(current!=NULL)
		{
			Node<T>*nextNode=current->getNextPtr();
			if(insertion==NULL||current->getData()<=insertion->getData())
			{
				current->setNextPtr(insertion);
				insertion=current;
			}
			else
			{
				Node<T>*temp=insertion;
				while(temp->getNextPtr()!=NULL && temp->getNextPtr()->getData()<current->getData())
				{
					temp=temp->getNextPtr();
				}
				current->setNextPtr(temp->getNextPtr());
				temp->setNextPtr(current);
			}
			current=nextNode;
		}
		head=insertion;
		return insert;
	}
	template<class T>
	void Linklist<T>::ReverseRecursion(Node<T>*current,Node<T>*temp)
	{
		if(temp!=NULL)
		{
			ReverseRecursion(temp,temp->getNextPtr());
			temp->setNextPtr(current);
		}
		else
		{
			head=current;
		}
	}
	template<class T>
	void Linklist<T>::ReverseRecursion(Linklist<T>&l1)
	{
		Node<T>*current1=l1.head;
		Node<T>*current2=l1.head;
		ReverseRecursion(current1,current2);
	}
	template<class U>
	ostream &operator<<(ostream &out, Linklist<U>&d)
	{
		Node<U>*current=d.head;
		while(current!=NULL)
		{
			out<<current->getData()<<" ";
			current=current->getNextPtr();
		}
		return out;
	}
