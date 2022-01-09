#include<iostream>
using namespace std;
class A
{
	public:
		int k;
};
class B:virtual public A{};
class C:virtual public A{};
class D:public B,public C{};
int main()
{
	D obj;
	obj.k=10;
	cout<<"k"<<endl;
	return 0;
}
