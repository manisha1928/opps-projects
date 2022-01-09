#include<iostream>
using namespace std;
class A
{
	public:
		~A()
		{
			cout<<"This is destructor of A"<<endl;
		}
};
class B:public A
{
	public:
		~B()
		{
			cout<<"This is destructor of B"<<endl;
		}
};
class C:public B
{
	public:
		~C()
		{
			cout<<"This is destructor of C"<<endl;
		}
};
int main()
{
	C obj;
	return 0;
}
