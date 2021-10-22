#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p,**q;
	p=&a;
	q=&p;
	cout<<"Value before change: "<<**q<<endl;
	**q=30;
	cout<<"Value after change: "<<**q<<endl;
	return 0;
}
