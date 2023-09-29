#include<iostream> //friend function...
using namespace std;
class A
{
	private:
		int x,y;
		
		public:
			friend void fun();		
};
void fun()
{
	A obj;
	obj.x=10;
	obj.y=20;
	
	cout<<"X:"<<obj.x<<end;
	cout<<"Y:"<<obj.y;
}
main()
{
	fun();
}
