#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"This is constructor of A"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"This is constructor of B"<<endl;
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"This is constructor of C"<<endl;
		}
};
int main()
{
	C obj;
	return 0;
}
