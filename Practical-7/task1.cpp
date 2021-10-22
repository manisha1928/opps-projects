#include<iostream>
using namespace std;
int main()
{
	int a;
     cout<<"1. Year"<<endl;
	cout<<"2. Month"<<endl;
	cout<<"3. Date"<<endl;
	cout<<"Enter your choice: ";
	cin>>a;
	switch(a)
	{
		case 1:
			cout<<"2021"<<endl;
			break;
		case 2:
			cout<<"October"<<endl;
			break;
		case 3:
			cout<<"13"<<endl;
		default:
			cout<<"Enter a valid choice"<<endl;
	}
	return 0;
}
