using namespace std;
#include<iostream>
class Calculator
{
  public:
  	int ADD(int a,int b)
  	{
  		return a+b;
	  }
	  int ADD(int a,int b,int c)
	  {
	  		return a+b+c;
	  }
	    int ADD(int a,int b,int c,int d,int e)
	  {
	  			return a+b+c+d+e;
	  }
	    int ADD(int a,int b,int c,int d)
	  {
	  		return a+b+c+d;
	  }
	 void data_tye(int k)
	 {
	 	cout<<"The integer passed"<<endl;
	 }
	 void data_type(float o)
	 {
	 	cout<<"Float passed"<<endl;
	  } 
	  void data_type(char i)
	  {
	  	cout<<"character passed "<<endl;
	  }
	  void data_type(string w)
	  {
	  	cout<<"String passed"<<endl;
	  }
};
main()
{
	Calculator c;
	cout<<"calculator with 2 parameters"<<endl;
	cout<<c.ADD(2,3)<<endl;
	cout<<"________________"<<endl;
	cout<<"calculator with 4 parameters"<<endl;
	cout<<c.ADD(5,5,6,7)<<endl;
	cout<<"__________________"<<endl;
	cout<<"calculator with 5 parameters"<<endl;
	cout<<c.ADD(9,8,7,3,5)<<endl;
	cout<<"________________"<<endl;
	cout<<"calculator with 3 parameters"<<endl;
	cout<<c.ADD(3,2,1)<<endl;
	Calculator d;
	cout<<"________Displaying the data types__________"<<endl;
	d.data_tye(3);
	d.data_type("Namaste");
	d.data_type('b');
	d.data_type(float(3.3));
}
