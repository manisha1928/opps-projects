#include<iostream>
using namespace std;
long fact(int a)
{
	if(a<=1)
		return 1;
	return a*fact(a-1);
}
int main()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Factorial: "<<fact(a)<<endl;
	return 0;
}
