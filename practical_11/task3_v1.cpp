#include<iostream>
using namespace std;
class A
{
	public:
		int k;
};
class B:public A{};
class C:public A{};
class D:public B,public C{};
int main()
{
	D obj;
	obj.k=10;
	cout<<"k";
	return 0;
}
