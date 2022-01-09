#include<iostream>
using namespace std;
void divide(int x,int y)
{
    double z;
    if(y==0)
    {
        throw runtime_error("Math Error: Attemped to divide by zero \n");
    }
    z=x/y;
    cout<<z<<endl;
}
int main()
{
    try
    {
        divide(67,0);
    }
    catch(runtime_error& e)
    {
        cout<<"Exception Occurred\n"<<e.what();
    }
    return 0;
    
}
