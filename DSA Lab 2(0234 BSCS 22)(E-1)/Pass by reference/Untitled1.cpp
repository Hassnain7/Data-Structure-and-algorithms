using namespace std;
#include<iostream>
//Return type functionName(list of parameter)
//Reusibility and easy to understand
//when we pass with value the increment is temporary and when we pass by reference increment is permanent
//friend function:
//private is only accessed in the same class and can be accessed by friend function and the friend class
//protected can be accessed when inherited
// friend function allows to access the private members or data of the class

void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	c=*b;
	
}
void cube(int *y)
{
	*y=*y**y**y;
}

void copy(int *h,int *g)
{
*g=*h;
}
int main()
{
	int a=50;
	int b=60;
	cout<<"Before swapping"<<endl;
	cout<<a<<" and "<<b<<endl;
	swap(&a,&b);
	cout<<"AFTER SWAPPING"<<endl;
	cout<<a<<" and "<<b<<endl;
	int y=3;
	cube(&y);
	cout<<"Cube of the variable"<<endl;
	cout<<y<<endl;
	int h=3;
	int g=2;
	cout<<"Before copying: "<<endl;
	cout<<h<<" : "<<g<<endl;
	copy(&h,&g);
	cout<<"After copying: "<<g<<endl;
}
