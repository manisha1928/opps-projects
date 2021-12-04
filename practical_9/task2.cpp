#include<iostream>
using namespace std;
class area
{
	public:
		area(int a,int b)
		{
			cout<<"Area of rectangle: "<<a*b<<endl;
		}
		area(int a)
		{
			cout<<"Area of square: "<<a*a<<endl;
		}
};
int main()
{
	area a(12,11),b(4);
	return 0;
}
