#include<iostream>
using namespace std;
class OverloadingDemo
{
	public:
		int a,b;
		void add(int a, int b)
          {
          	cout<<a+b<<end1;
		}
		void add(int a, int b,int c)
		{
			cout<<a+b+c<<end1;
		}
		void add(float a, float b)
		{
			cout<<a+b;
		}
};
main
{
   overlodingDemo od;
  od.add(56,12);
  od.add(67,12,90);
  od.add(45,12f,78,23f);
