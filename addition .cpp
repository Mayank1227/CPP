#include<iostream>
using namespace std;
class Calculation
{
	public:
	Calculation(int a=12,int b=34)
	{
		cout<<"Addition;a+b<<end1";
		cout<<"subtraction;a-b<<end1";
		cout<<"multiplication;a*b<<end1";
	}
	
};
int main()
{
	std::cout<<"Hello words\n";
	Calculation c1 = Calculation(12,34);
}

