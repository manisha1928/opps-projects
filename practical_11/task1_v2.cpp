#include<iostream>
using namespace std;
class A
{
	public:
	int x,y;
};
class B:public A
{
	public:
		void display()
		{
			x=10;
			y=20;
			cout<<x<<" "<<y;
		}	
};
int main()
{
	B obj;
	obj.x=30;
	obj.y=40;
	cout<<"In main"<<obj.x<<" "<<obj.y;
	return 0;
}
