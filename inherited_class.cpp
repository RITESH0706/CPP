#include<iostream>
#include<string>

using namespace std;
class Person
{
	public: 
		string name;
		int age;
	protected:
		string gender;
};
class Student:public Person
{
	private :
		int marks;
	public:
		int roll_no;
		void setGender(string a)
		{
			gender=a;
		}
		void setMarks(int m)
		{
			marks=m;
		}
		void display()
		{
			cout<<"NAME    : "<<name<<endl;
			cout<<"AGE     : "<<age<<"\n";
			cout<<"ROLL NO : "<<roll_no<<"\n";
			cout<<"GENDER  : "<<gender<<"\n";
			cout<<"MARKS   : "<<marks<<endl;
		}
};
int main()
{
	Student s;
	s.name="Ritesh";
	s.age=20;
	s.roll_no=128;
	int marks=100;
	string gender="Male";
	s.setGender(gender);
	s.setMarks(marks);
	s.display();
}
