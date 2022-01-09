#include<iostream>
using namespace std;
class A
{
	public:
		A(int a)
		{
			cout<<"This is constructor of A:"<<a<<endl;
		}
};
class B:public A
{
	public:
		B(int a):A(a)
		{
			cout<<"This is constructor of B:"<<a<<endl;
		}
};
int main()
{
	B obj(10);
	return 0;
}
