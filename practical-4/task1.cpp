
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
using namespace first;
using namespace second;
int main()
{
     int integer=0;
     integer=first::sum(3.1,4);
    float floatnum=0;
    floatnum=second::sum(2.0,5.4);
    cout<<"Sum of integers: "<<integer<<"\n";
    cout<<"Sum of float: "<<floatnum<<"\n";
 return 0;
}
