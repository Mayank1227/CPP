#include<iostream>
using namespace std;
class Father
{
	public:
		void house()
		{
	       cout<<"3 BHK House";
		}
		
};
class Child : public Father
{
	public:
		void car()
		{
		  cout<<"Audi car";	
		}
};
main()
{
	Child c;
	c.house();
}
