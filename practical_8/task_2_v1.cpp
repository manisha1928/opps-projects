#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3};
	int *p;
	p=arr;
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	return 0;
}
