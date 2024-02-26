using namespace std;
#include<iostream>
#include "bst.h"
template<class T>
BST<T> :: BST()
{
	head = NULL;
}
template<class T>
BST<T> :: ~BST()
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
		delete head;
	}
}
template<class T>
void BST<T> :: makeEmpty(Node<T> *head)
{
	if(head != NULL)
	{
		makeEmpty(head->getLeftPtr());
		delete head->getLeftPtr();
		makeEmpty(head->getRightPtr());
		delete head->getRightPtr();
	}
}
template<class T>
void BST<T> :: insert(T data)
{
	if(head == NULL)
	{
		head = new Node<T>(data);
	}
	else
	{
		if(head -> getData() > data)
		{
			if(head->getLeftPtr() == NULL)
				head->setLeftPtr(new Node<T>(data));	
			
			else
				insert(data, head->getLeftPtr());
		}
		else
		{
			if(head->getRightPtr() == NULL)
				head->setRightPtr(new Node<T>(data));	
			
			else
				insert(data, head->getRightPtr());
		}
	}
	
	
}
template<class T>
void BST<T> :: insert(T data, Node<T> *head)
{
	if(head -> getData() > data)
	{
		if(head->getLeftPtr() == NULL)
			head->setLeftPtr(new Node<T>(data));	
		
		else
			insert(data, head->getLeftPtr());
	}
 	else
	{
		if(head->getRightPtr() == NULL)
			head->setRightPtr(new Node<T>(data));	
		
		else
			insert(data, head->getRightPtr());
	}
}
template<class T>
void BST<T> :: preOrder()
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: preOrder(Node<T> *head)
{
	if(head != NULL)
	{
		cout << head->getData() << " ";
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
	}
}
template<class T>
void BST<T> :: inOrder()
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		cout << head->getData() << " ";
		preOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: inOrder(Node<T> *head)
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		cout << head->getData() << " ";
		preOrder(head->getRightPtr());
	}
}

template<class T>
void BST<T> :: postOrder()
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}

template<class T>
void BST<T> :: postOrder(Node<T> *head)
{
	if(head != NULL)
	{
		preOrder(head->getLeftPtr());
		preOrder(head->getRightPtr());
		cout << head->getData() << " ";
	}
}

template<class T>
void BST<T> :: deleteNode(T key)
{	
	if(head == NULL)
	{
		return;
	}
	if(head->getData() > key)
	{
		head->setLeftPtr(deleteNode(head->getLeftPtr(), key));
	}
	
	if(head->getData() < key)
	{
		head->setRightPtr(deleteNode(head->getRightPtr(), key));
	}
	
	if(head->getData() == key)
	{
		Node<T>* temp = head;
		if((head->getLeftPtr() == NULL) && (head->getRightPtr() == NULL))
		{
			head = NULL;
			delete temp;
		}
		else if((head->getLeftPtr() == NULL) && (head->getRightPtr() != NULL))
		{
			head = head->getRightPtr();
			delete temp;
			
		}
		else if((head->getLeftPtr() != NULL) && (head->getRightPtr() == NULL))
		{
			head = head->getLeftPtr();
			delete temp;
		}
		else
		{
			Node<T>* temp1 = temp;
			temp = temp->getRightPtr();
			while(temp->getLeftPtr() != NULL)
			{
				temp = temp->getLeftPtr();
			}
			head->setData(temp->getData());
			temp1->setRightPtr(deleteNode(temp1->getRightPtr(), temp->getData()));
		}
	}
}
template<class T>
Node<T>* BST<T> :: deleteNode(Node<T> *head, T key)
{

	if(head == NULL)
	{
		return NULL;
	}
	if(head->getData() > key)
	{
		head->setLeftPtr(deleteNode(head->getLeftPtr(), key));
		return head;
	}
	if(head->getData() < key)
	{
		head->setRightPtr(deleteNode(head->getRightPtr(), key));
		return head;
	}
	
	if(head->getData() == key)
	{
		Node<T>* temp = head;
		if((head->getLeftPtr() == NULL) && (head->getRightPtr() == NULL))
		{
			delete temp;
			return NULL;
		}
		else if((head->getLeftPtr() == NULL) && (head->getRightPtr() != NULL))
		{
 			Node<T> *temp1 = head->getRightPtr();
			delete temp;
			return temp1;
		}
		else if((head->getLeftPtr() != NULL) && (head->getRightPtr() == NULL))
		{
			Node<T> *temp1 = head->getLeftPtr();
			delete temp;
			return temp1;
		}
		else
		{
			Node<T>* temp1 = temp;
			temp = temp->getRightPtr();
			while(temp->getLeftPtr() != NULL)
			{
				temp = temp->getLeftPtr();
			}
			head->setData(temp->getData());
			temp1->setRightPtr(deleteNode(temp1->getRightPtr(), temp->getData()));
			return head;
		}
	}
}

template<class T>
bool BST<T> :: search(T data)
{
	Node<T> *temp = head;
	
	while(temp != NULL)
	{
		if(temp->getData() == data)
			return true;
		else
		{
			if(temp->getData() > data)
				temp = temp->getLeftPtr();
			else
				temp = temp->getRightPtr();
		}
	}
	return false;
}
template<class T>
int BST<T>::FindMin()
{
	return FindMin(head);

/*if(head->getLeftPtr()!=NULL)
{
	head=head->getLeftPtr();
}
FindMin(head->getLeftPtr());*/
}
template<class T>
int BST<T>::FindMin(Node<T>*head)
{
	/*if(current==NULL)
	{
		cout<<"Empty";
	}
	current=head;
	while(current->getLeftPtr()!=NULL)
	{
		current=current->getLeftPtr();
	}
	return current->getData();*/
	if(head==NULL)
	{
		cout<<"empty";
	}
	else
	{
		if(head->getLeftPtr()==NULL)
		{
			return head->getData();
		}
		FindMin(head->getLeftPtr());
	}
}
template<class T>
int BST<T>::FindMax()
{
	return FindMax(head);
}

template<class T>
int BST<T>::FindMax(Node<T>*head)
{
	/*if(current==NULL)
	{
		cout<<"Empty";
	}
	current=head;
	while(current->getRightPtr()!=NULL)
	{
		current=current->getRightPtr();
	}
	return current->getData();*/
	if(head==NULL)
	{
		cout<<"empty";
	}
	else
	{
		if(head->getRightPtr()==NULL)
		{
			return head->getData();
		}
		FindMax(head->getRightPtr());
	}
}
template<class T>
bool BST<T>::isValid()
{
	Node<T>*current=head;
	if(current==NULL)
	{
		return true;
	}
	if(current->getData()>=FindMin()&& current->getData()<=FindMax())
	{
		return true;
	}
	else
	return false;
}
template<class T>
int BST<T>::SumL()
{
	return SumL(head);
}
int sum=0;
template<class T>
int BST<T>::SumL(Node<T>*head)
{
	if(head==NULL)
	{
		cout<<"empty";
	}
	else
	{
		if(head->getLeftPtr()==NULL)
		{

	//	return head->getData();
	sum=sum+head->getData();
				return sum;
		}
		else
		{
		sum+=head->getData();
		//return sum;
		SumL(head->getLeftPtr());
	}
	}
	
}
template<class T>
bool BST<T>::isIdentical(Node<T>*current,Node<T>*current1)
{
	current=head;
   current1=head;
	if(current==NULL&& current1==NULL)
	{
		cout<<"BST are identical"<<endl;
		return true;
	}
	else if(current==NULL || current1==NULL)
	{
		return false;
	}
	else
	{
		bool condition1=current->getData();
		bool condition2=current1->getData();
		bool condition3=isIdentical(current->getLeftPtr(),current1->getLeftPtr());
		bool condition4=isIdentical(current->getRightPtr(),current1->getRightPtr());
		if(condition1==condition2 && condition3 && condition4)
		{
			cout<<"The BST is identical"<<endl;
			return true;
		}
		return false;
	}
}
template<class T>
bool BST<T>::isIdentical(BST<T>&l1,BST<T>&l2)
{
	return isIdentical(l1.head,l2.head);
}
template<class T>
Node<T>*BST<T>::kthLargest(Node<T>*head,int&k,int&result)
{
/*	if(head==NULL||k==0)
	{
		return;
	}
	kthLargest(head->getRightPtr(),k,result);
	if(--k==0)
	{
		result=head->getData();
		return;
	}
	kthLargest(head->getLeftPtr(),k,result);*/
	if(head==NULL)
	{
		return NULL;
	}
	Node<T>*current=kthLargest(head->getRightPtr(),k,result);
	if(current!=NULL)
	{
		return current;
	}
	result++;
	if(result==k)
	{
		return head;
	}
	return kthLargest(head->getLeftPtr(),k,result);
}
template<class T>
int BST<T>::kthLargest(int k)
{
	/*int result=-1;
	kthLargest(head,k,result);
	return result;*/
	int result=0;
	Node<T>*current=kthLargest(head,k,result);
	if(current!=NULL)
	{
		return current->getData();
	}
	return -1;
	}
