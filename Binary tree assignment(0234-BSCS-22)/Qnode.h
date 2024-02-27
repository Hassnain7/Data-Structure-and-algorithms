#ifndef QNODE_H_INCLUDED
#define QNODE_H_INCLUDED
#include<iostream>
using namespace std ;


template<class T>
class QNode
{


    public:

      
		QNode(T);//set nextPtr to null and initialize the data with the value passed to constructor
     
		T getData()const;//return the value stored in the data variable
	
		QNode<T>* getNextPtr()const;//return the address stored in nextPtr variable
	
		void setData(T);//set the passed value to the data variable
	
		void setNextPtr(QNode*);//set the passed value to the nextPtr variable
	



	private:
		T data;
		QNode<T>* nextPtr;


};


#endif
