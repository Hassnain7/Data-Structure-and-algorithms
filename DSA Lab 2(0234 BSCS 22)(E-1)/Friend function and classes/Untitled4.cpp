using namespace std;
#include<iostream>
class Minor
{
private:
string name,father_name,address;
int age;
	friend class CheckMinor;
public:
	Minor(int age)
	{
		if(age>0)
		{
			this->age=age;
			cout<<"Age passed"<<endl;
		}
	}
};
class CheckMinor
{
	public:
	void is_Minor(Minor obj)
	{
		if(obj.age<18)
		{
			cout<<"The object is minor"<<endl;
		}
		else
		{
			cout<<"Object is not minor"<<endl;
		}
		
	}
	int is_Minor(Minor obj1,Minor obj2)
	{
		if(obj1.age<18 && obj2.age<18)
		{
			if(obj1.age<obj2.age)
			{
				return obj1.age;
			}
			else
			{
				return obj2.age;
			}
		}
	}
	int is_Minor(Minor obj1,Minor obj2,Minor obj3)
	{
				if(obj1.age<18 && obj2.age<18 && obj3.age<18)
				{
					if(obj1.age<obj2.age)
					{
						return obj1.age;
					}
					else if(obj2.age<obj3.age)
					{
						return obj2.age;
					}
					else
					{
						return obj3.age;
					}
				}
	}
};
main()
{
	Minor m(13);
	Minor m1(17);
	Minor m2(16);
	 CheckMinor c;
	 cout<<"Wether the object is minor or not?: "<<endl;
	 c.is_Minor(m);
	 cout<<"Returning the age: "<<endl;
	 cout<<c.is_Minor(m1,m2)<<endl;
	 cout<<"Returning the age by comparing all 3: "<<endl;
	 cout<<c.is_Minor(m,m1,m2)<<endl;
}
