#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	swap(a,b);
	cout<<"Value of a after calling swap: "<<a<<endl;
	cout<<"Value of b after calling swap: "<<b<<endl;
	return 0;
}
