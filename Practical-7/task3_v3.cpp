#include<iostream>
#define MAX 3
using namespace std;
int main()
{
	int a[MAX][MAX],count=1;
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			a[i][j]=count;
			count++;
		}
	}
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			a[i][j]=10-a[i][j];
		}
		cout<<"\n";
	}

	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"After restoring: "<<endl;
     for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			a[i][j]=10-a[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
