#include<iostream>
using namespace std;
long fact(int a)
{
	long ans=1;
	for(int i=2;i<=a;i++)
		ans*=i;
	return ans;
}
int main()
{
 	int a;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Factorial: "<<fact(a);
	return 0;
}
