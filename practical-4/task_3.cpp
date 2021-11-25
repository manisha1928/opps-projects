#include<iostream>
using namespace std;
namespace first
{
    int sum(int a,int b)
         {return a+b;}
}
namespace second
{
     float sum(float a,float b)
          {return a+b;}
}
int main()
{
     int integer=0;
     integer=sum(3,4);
    int floatnum=0;
    floatnum=sum(2.0,5.4);
    cout<<"Sum of integers: "<<integer<<"\n";
    cout<<"Sum of float: "<<floatnum<<"\n";
     return 0;
}
