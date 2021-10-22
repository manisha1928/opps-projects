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
	time_t ttime=time(0);
	tm *info=localtime(&ttime);
	switch(a)
	{
		case 1:
			cout<<"Year: "<<1900+info->tm_year<<endl;
			break;
		case 2:
			cout<<"Month: "<<1+info->tm_mon<<endl;
			break;
		case 3:
			cout<<"Date: "<<info->tm_mday<<endl;
			break;
		default:
			cout<<"Enter a valid choice"<<endl;
	}
	return 0;
}
