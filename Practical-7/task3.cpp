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
	for(int i=MAX-1;i>=0;i--)
	{
		for(int j=MAX-1;j>=0;j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
