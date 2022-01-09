#include<iostream>
using namespace std;
class test
{
  int value;
  public:
  friend void operator <(test a,test b);
  void get_value()
  {
    cin>>value;
  }
};
void operator < (test a,test b)
{
  a.value<b.value?cout<<a.value<<" is smaller":cout<<b.value<<" is smaller";
}
int main()
{
  test t1,t2;
  t1.get_value();
  t2.get_value();
  t1<t2;
}
