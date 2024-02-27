using namespace std;
#include<iostream>
#include"Linklist.h"
#include"LinkList.cpp"
#include"node.h"
#include"NodeE1.cpp"
//#include"student.h"
//#include"Student.cpp"
int main()
{
Linklist<Student> l;
Student s1("qazi",1030,1050,25,19);
Student s2("HASSNAIN",1050,1080,25,19);
Student s3("Ali",950,999,21,20);
Student s4("QURESHI",1040,1090,20,19);
Student s5("Ahmed",1090,990,25,15);
l.addElement(s1);
l.addElement(s2);
l.addElement(s3);
l.addElement(s4);
l.addElement(s5);
cout<<l;
//l.findElement(s3);
cout<<"The merit list of the top candidates is given below: "<<endl;
l.MeritList(5);
cout<<"The binary search:"<<endl;
l.findElement(s4);
}
