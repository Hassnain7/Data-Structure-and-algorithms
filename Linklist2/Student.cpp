using namespace std;
#include<iostream>
#include"student.h"
Student::Student(){}
Student::Student(string name,double matric_marks,double FSc_marks,double Test_marks,double Interview_Marks)
{
	this->name=name;
	this->matric_marks=matric_marks;
	this->FSc_marks=FSc_marks;
	this->Test_marks=Test_marks;
	this->Interview_Marks=Interview_Marks;
}
void Student::setName(string name)
{
	this->name=name;
}
void Student::setMatricMarks(double matric_marks)
{
	if(matric_marks>=0&&matric_marks<=1100)
	this->matric_marks=matric_marks;
}
void Student:: setFSCMarks(double FSc_marks)
{
	if(FSc_marks>=0&&FSc_marks<=1100)
	this->FSc_marks=FSc_marks;
}
void Student:: setTestMarks(double Test_marks)
{
	if(Test_marks>=0&&Test_marks<=30)
	this->Test_marks=Test_marks;
}
void Student::setInterviewMarks(double Interview_Marks)
{
	if(Interview_Marks>=0&&Interview_Marks<=20)
	this->Interview_Marks=Interview_Marks;
}
string Student::getName()
{
	return name;
}
double Student::getMatricMarks()
{
	return matric_marks;
}
double Student::getFSCMarks()
{
	return FSc_marks;
}
double Student::getTestMarks()
{
	return Test_marks;
}
double Student::getInterviewMarks()
{
	return Interview_Marks;
}
double Student::getAggregate_score()
{
	aggregate_score=((0.4*FSc_marks/1100)+(0.1*matric_marks/1100)+(0.20*Interview_Marks/20)+(0.30*Test_marks/30))*100;
	return aggregate_score;
}
Student &Student::operator=(const Student&other)
{
	if(this!=&other)
	{
		name=other.name;
		matric_marks=other.matric_marks;
		FSc_marks=other.FSc_marks;
		Test_marks=other.Test_marks;
		Interview_Marks=other.Interview_Marks;
		aggregate_score=other.aggregate_score;
	}
	return*this;
}
