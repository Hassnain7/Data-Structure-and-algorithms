#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
using namespace std;
#include<iostream>
using namespace std;
class Student
{
	private:
		string name;
		double matric_marks,FSc_marks,Test_marks,Interview_Marks,aggregate_score;
		public:
			Student();
			Student(string,double,double,double,double);
			void setName(string);
			void setMatricMarks(double);
			void setFSCMarks(double);
			void setTestMarks(double);
			void setInterviewMarks(double);
			string getName();
			double getMatricMarks();
			double getFSCMarks();
			double getTestMarks();
			double getInterviewMarks();
			double getAggregate_score();
			Student& operator=(const Student& other);
};
#endif
