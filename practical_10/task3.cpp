#include<iostream>
using namespace std;
class rem
{
  int a,b;
  public:
  rem(int a,int b)
  {
    cout<<"Remainder: "<<a%b<<endl;
  }
};
int main()
{
  rem obj1(3,2);
  return 0;
}
