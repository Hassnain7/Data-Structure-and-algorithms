//#ifndef LIST_H_INCLUDED
//#define LIST_H_INCLUDED
using namespace std;
#include<iostream>
#include"Linklist.h"
#include"student.cpp"
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
					temp->setNextPtr(NULL);
				counter++;
			}
			else
			{
				Node<T>*current=head;
				//for(int i=2;i<index;i++)
				while(current->getNextPtr()!=NULL)
				{
					current=current->getNextPtr();
				}
				temp->setNextPtr(current->getNextPtr());
				current->setNextPtr(temp);
				counter++;
				return;
			}
		}
		template<class T>
void Linklist<T>::sorting()
{
    if(head == NULL)
    {
        cout << "The list " << endl;
        return;
    }

    Node<T>* a = head;
    Node<T>* b;
    T ptr;

    while(a->getNextPtr() != NULL)
    {
        b = a->getNextPtr();
        if(a->getData().getAggregate_score() < b->getData().getAggregate_score())
        {
            ptr = a->getData();
            a->setData(b->getData());
            b->setData(ptr);
        }

        a = b;
    }
}
template<class T>
void Linklist<T>::sorting1()
{
    if(head == NULL)
    {
        cout << "The list is empty" << endl;
        return;
    }

    Node<T>* a = head;
    Node<T>* b;
    T ptr;

    while(a->getNextPtr() != NULL)
    {
        b = a->getNextPtr();
        if(a->getData().getAggregate_score() >b->getData().getAggregate_score())
        {
            ptr = a->getData();
            a->setData(b->getData());
            b->setData(ptr);
        }

        a = b;
    }
}

	
		template<class T>
		void Linklist<T>::addElement(T d)
		{
				sorting();
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
				counter--;
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
void Linklist<T>::findElement(T d) 
{
		sorting1();
    if (head == NULL)
    {
        cout << "Empty";
        return;
    }

    int left;
    int index=-1;
    int right = counter;
    while (left <= right)
    {
        int mid = left + (right-left)  / 2;
        Node<T>* midNode = head;

        for (int i = 1; i <mid; i++)
        {
            midNode = midNode->getNextPtr();
        }

     //   T midElement = midNode->getData();
     if (midNode->getData().getAggregate_score() < d.getAggregate_score())
        {
            left = mid + 1;
        }

        else if (midNode->getData().getAggregate_score() == d.getAggregate_score())
        {
            cout << "Element found" << endl;
            //index=mid;
           // cout<<"At index: "<<index<<endl;
            return;
        }

        else
        {
            right = mid - 1;
        }
        
    }

    cout << "Element not found" << endl;
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
			return head->getData().getAggregate_score();
		}
		else
		{
			Node<T>*current=head;
			for(int i=2;i<=index;i++)
			{
				current=current->getNextPtr();
			}
			return current->getData().getAggregate_score();
		}
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
	void Linklist<T>::MeritList(int Top)
	{
		Node<T>*current=head;
		int count=0;
		while(current!=NULL&&count<Top)
		{
			cout<<"Name:"<<current->getData().getName()<<" and aggregate score "<<current->getData().getAggregate_score()<<endl;
			current=current->getNextPtr();
			count++;
		}
	}
	template<class T>
 Linklist<T>::~Linklist()
	{
		makeEmpty();
	}
	template<class T>
	void Linklist<T>::BubbleSort()
	{
		int swapped,i;
		Node<T>*current;
		Node<T>*endPtr=NULL;
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
	}
template<class T>
	void Linklist<T>::InsertionSort()
	{
		Node<T>*sorted=NULL;
		Node<T>*current=head;
		while(current!=NULL)
		{
			Node<T>*nextNode=current->getNextPtr();
			if(sorted==NULL||current->getData()<=sorted->getData())
			{
				current->setNextPtr(sorted);
				sorted=current;
			}
			else
			{
				Node<T>*temp=sorted;
				while(temp->getNextPtr()!=NULL && temp->getNextPtr()->getData())
				{
					temp=temp->getNextPtr();
				}
				current->setNextPtr(temp->getNextPtr());
				temp->setNextPtr(current);
			}
			current=nextNode;
		}
		head=sorted;
	}
	template<class T>
	ostream &operator<<(ostream &out, const Linklist<T>&d)
	{
		Node<T>*current=d.head;
		while(current!=NULL)
		{
			out<<"******************************************"<<endl;
			out<<"Name:"<<current->getData().getName()<<endl;
		   out<<"********************************************"<<endl;
			out<<"Matric marks:"<<current->getData().getMatricMarks()<<endl;
			out<<"********************************************"<<endl;
			out<<"Inter marks:"<<current->getData().getFSCMarks()<<endl;
			out<<"*********************************************"<<endl;
			out<<"Test marks:"<<current->getData().getTestMarks()<<endl;
			out<<"***********************************************"<<endl;
			out<<"Interview marks:"<<current->getData().getInterviewMarks()<<endl;
			out<<"*************************************************"<<endl;
			out<<"Agrregate: "<<current->getData().getAggregate_score()<<endl;
			current=current->getNextPtr();
		}
		return out;
	}
