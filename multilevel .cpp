#include<iostream>
using namespace std;
class Grandfather
{
	public:
		void land()
		{
			cout<<"50 Acres of land";
		}
};
class Father: public Grandfather
{
	public:
		void house()
		{
			cout<<"\n 5Bhk House";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"\n Mercedz car";
		}
};
main()
{
	Son obj;
	obj.land();
	obj.house();
	obj.car();
}

