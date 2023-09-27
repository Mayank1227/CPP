#include<iostream>
using namespace std;
class papa
{
	public:
	    void house()
		{
		   cout<<"4 BHK House";	
		}	
};
class kaka
{
	public:
		void shop()
		{
			cout<<"\nkirana shop";
		}
};
class son: public papa, public kaka
{
	public:
		void car()
		{
			cout<<"\nAudi car";
			
		}
};
main()
{
son o;
o.house();
o.shop();
o.car();
}


