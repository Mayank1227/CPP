#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;
		void inputdata()
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter subject:"<<endl;
			cin>>subject;
		}
		void displayData()
		{
			cout<<"ID"<<id<<endl;
			cout<<"Name"<<name<<endl;
			cout<<"subject"<<subject<<endl;
		}
};
class faculty
{
	public:
		int id;
		string name;
		string department;
		void inputdata()
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter Department:"<<endl;
			cin>>department;
		}
		void displayData()
		{
			cout<<"faculty data"<<endl;
			cout<<"ID"<<id<<endl;
			cout<<"Name"<<name<<endl;
			cout<<"department"<<department<<endl;
		}
};
main()
{
	student s1;
	faculty f1;
	
	s1.inputdata();
	s1.displayData();
	
	f1.inputdata();
	f1.displayData();
}
