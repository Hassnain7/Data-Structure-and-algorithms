#ifndef NODE1_H_INCLUDED
#define NODE1_H_INCLUDED
#include<iostream>
using namespace std ;


template<class T>
class Node1
{


    public:

      
		Node1(T);//set nextPtr to null and initialize the data with the value passed to constructor
     
		T getData()const;//return the value stored in the data variable
	
		Node1<T>* getNextPtr()const;//return the address stored in nextPtr variable
	
		void setData(T);//set the passed value to the data variable
	
		void setNextPtr(Node1*);//set the passed value to the nextPtr variable
	



	private:
		T data;
		Node1<T>* nextPtr;


};


#endif
