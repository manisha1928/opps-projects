#include<iostream>
#define MAX 3
using namespace std;
int main()
{
	int a[MAX][MAX]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<MAX/2;i++)
	{
		for(int j=0,k=2;j<MAX;j++,k--)
		{
			int temp;
			temp=a[i][j];
			a[i][j]=a[MAX-1-i][k];
			a[MAX-1-i][k]=temp;	
		}
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
