#include<iostream>
#include<math.h>
using namespace std;
long series(int a)
{
	if(a<=1)
		return 2;
	
	return (pow(a,a)+1)*series(a-1);
}
int main()
{
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Series: "<<series(a);
	return 0;
}
