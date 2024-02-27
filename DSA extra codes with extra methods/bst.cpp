#include"bst.h"
#include<iostream>
#include<vector>
template<class T>
BST<T>::BST()
{
	head=NULL;
}
template<class T>
void BST<T>::insert(T data)
{
 if(head==NULL)
 {
 	head=new Node<T>(data);
 }
 else
 {
 	if(head->getData()>data)
 	{
 		if(head->getLeftPtr()==NULL)
 		{
 			head->setLeftPtr(new Node<T>(data));
		 }
		 else
		 {
		 	insert(head->getLeftPtr(),data);
		 }
	 }
	 else
	 {
	 	if(head->getRightPtr()==NULL)
	 	{
	 		head->setRightPtr(new Node<T>(data));
		 }
		 else
		 {
		 	insert(head->getRightPtr(),data);
		 }
	 }
 }
}
template<class T>
void BST<T>::insert(Node<T>*head,T data)
{
	if(head==NULL)
	{
		head=new Node<T>(data);
	}
	else
	{
		if(head->getData()>data)
		{
			if(head->getLeftPtr()==NULL)
			{
				head->setLeftPtr(new Node<T>(data));
			}
			else
			{
				insert(head->getLeftPtr(),data);
			}
		}
		else
		{
			if(head->getRightPtr()==NULL)
			{
				head->setRightPtr(new Node<T>(data));
			}
			else
			{
				insert(head->getRightPtr(),data);
			}
		}
		
	}
}
template<class T>
void BST<T>::inorder()
{
   if(head!=NULL)
   {
   	inorder(head->getLeftPtr());
   	cout<<head->getData()<<" ";
   	inorder(head->getRightPtr());
   }
}
template<class T>
void BST<T>::inorder(Node<T>*head)
{
 if(head!=NULL)
 {
 	inorder(head->getLeftPtr());
 	cout<<head->getData()<<" ";
 	inorder(head->getRightPtr());
 }
}
template<class T>
void BST<T>::deleteNode(T key)
{
if(head==NULL)
{
	return;
}
if(head->getData()>key)
{
	head->setLeftPtr(deleteNode(head->getLeftPtr(),key));
}
if(head->getData()<key)
{
	head->setRightPtr(deleteNode(head->getRightPtr(),key));
}
if(head->getData()==key)
{
	Node<T>*temp=head;
	if(head->getLeftPtr()==NULL && temp->getRightPtr()==NULL)
	{
		head=NULL;
		delete temp;
	}
	else if(head->getLeftPtr()!=NULL && temp->getRightPtr()==NULL)
	{
		head=head->getLeftPtr();
		delete temp;
	}
	else if(head->getLeftPtr()==NULL && temp->getRightPtr()!=NULL)
	{
		head=head->getRightPtr();
		delete temp;
	}
	else
	{
		Node<T>*temp1=temp;
		temp=temp->getRightPtr();
		while(temp->getLeftPtr()!=NULL)
		{
			temp=temp->getLeftPtr();
		}
		head->setData(temp->getData());
		temp1->setRightPtr(deleteNode(temp->getRightPtr(),temp->getData()));
	}
}
	}
template<class T>
Node<T>* BST<T>::deleteNode(Node<T>*head,T key)
{
if(head==NULL)
{
	return NULL;
}
if(head->getData()>key)
{
	head->setLeftPtr(deleteNode(head->getLeftPtr(),key));
	return head;
}
if(head->getData()<key)
{
	head->setRightPtr(deleteNode(head->getRightPtr(),key));
	return head;
}
if(head->getData()==key)
{
	Node<T>*temp=head;
	if(head->getLeftPtr()==NULL && head->getRightPtr()==NULL)
	{
		delete temp;
		return NULL;
	}
	else if(head->getLeftPtr()!=NULL && head->getRightPtr()==NULL)
	{
		Node<T>*temp1=head->getLeftPtr();
		delete temp;
		return temp1;
	}
	else if(temp->getLeftPtr()==NULL && head->getRightPtr()!=NULL)
	{
		Node<T>*temp1=head->getRightPtr();
		delete temp;
		return temp1;
	}
	else
	{
		Node<T>*temp1=temp;
		temp=temp->getRightPtr();
		while(temp->getLeftPtr()!=NULL)
		{
			temp=temp->getLeftPtr();
		}
		head->setData(temp->getData());
		temp1->setRightPtr(deleteNode(temp->getRightPtr(),temp->getData()));
		return head;
	}
}

}
template<class T>
bool BST<T>::search(T key)
{
	return search(head,key);
}
template<class T>
bool BST<T>::search(Node<T>*head,T key)
{
	if(head==NULL)
	{
		cout<<"NULL";
	}
	if(head->getData()==key)
	{
		return true;
	}
	else
	{
		if(head->getData()>key)
		{
			return search(head->getLeftPtr(),key);
		}
		else
		{
			return search(head->getRightPtr(),key);
		}
	}

}
template<class T>
void BST<T>::inorderSuccessor(T key)
{
	 inorderSuccessor(head,key);
}
template<class T>
Node<T>*BST<T>::inorderSuccessor(Node<T>*head,T key)
{
	Node<T>*successor=NULL;
	while(head!=NULL)
	{
		if(head->getData()<=key)
		{
			head=head->getRightPtr();
		}
		else
		{
		 successor=head;
		 head=head->getLeftPtr();
		}
	}
	cout<<successor->getData()<<" ";
	return successor;
}
template<class T>
void BST<T>::inorderPredecessor(T key)
{
inorderPredecessor(head,key);	
}
template<class T>
Node<T>*BST<T>::inorderPredecessor(Node<T>*head,T key)
{
	Node<T>*Predecessor=NULL;
	while(head!=NULL)
	{
		if(key<=head->getData())
		{
			head=head->getLeftPtr();
		}
		else
		{
			Predecessor=head;
			head=head->getRightPtr();
		}
	}
	cout<<Predecessor->getData()<<" ";
	return Predecessor;
}
template<class T>
void BST<T>::LCA(T a,T b)
{
	Node<T>*CA=LCA(head,a,b);
	if(CA!=NULL)
	{
	cout<<"The lowest common ancestor is "<<CA->getData()<<endl;
}
}
template<class T>
Node<T>*BST<T>::LCA(Node<T>*head,T a,T b)
{
	if(head==NULL)
	{
		return NULL;
	}
	if(head->getData()<a && head->getData()<b)// root is ancestor of right nodes
	{
		return LCA(head->getRightPtr(),a,b);
	}
	if(head->getData()>a && head->getData()>b)// root is ancestor of left nodes
	{
		return LCA(head->getLeftPtr(),a,b);	
		}
		return head;// root is ancestor of both right and left nodes
}
template<class T>
Node<T>*BST<T>::solve(vector<T>&preorder,T min,T max,T &i)
{
	if(i>=preorder.size())
	{
		return NULL;
	}
	if(preorder[i]<min||max<preorder[i])
	{
		return NULL;
	}
	Node<T>*temp=new Node<T>(preorder[i++]);
	temp->setLeftPtr(solve(preorder,min,temp->getData(),i));
	temp->setRightPtr(solve(preorder,temp->getData(),max,i));
	return temp;
}
template<class T>
Node<T>*BST<T>::preOrderToBST(vector<T>&preorder)
{
	T min=INT_MIN;
	T max=INT_MAX;
	int i=0;
	return solve(preorder,min,max,i);
}
template<class T>
int BST<T>::FindMax(Node<T>*head)
{
	if(head->getRightPtr()==NULL)
	{
		return head->getData();
	}
	FindMax(head->getRightPtr());
}
template<class T>
int BST<T>::FindMax()
{
	return FindMax(head);
}
template<class T>
int BST<T>::FindMin(Node<T>*head)
{
	if(head->getLeftPtr()==NULL)
	{
		return head->getData();
	}
	FindMin(head->getLeftPtr());
}
template<class T>
int BST<T>::FindMin()
{
	return FindMin(head);
}
template<class T>
bool BST<T>::isValid()
{
	Node<T>*current=head;
	if(current==NULL)
	{
		cout<<"The BST has 0 child which satisfies it"<<endl;
		return true;
	}
	if(current->getData()>FindMin() && current->getData()<FindMax())
	{
		cout<<"The BST is Valid as its left children is less than the root and the right children is greater than root"<<endl;
		return true;
	}
	return false;
}
