#include<iostream>
using namespace std;
class parent
{
	public:
	    void Parent()
		{
		   cout<<"\n parent";	
		}	
};
class Child1: public parent
{
	public:
		void child1()
		{
			cout<<"\n Child1";
		}
};
class Child2: public parent
{
	public:
		void child2()
		{
			cout<<"\n Child2";
			
		}
};
main()
{
Child1 c1;
 c1.child1();
 c1.Parent();
 
 Child2 c2;
 c2.child2();
 c2.Parent();
}
