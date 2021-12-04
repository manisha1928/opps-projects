#include<iostream>
using namespace std;
class College
{
  string name;
  int code;
  public:
    void set_College(string a,int b)
    {
      name=a;
      code=b;
    }
    void disp()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Code: "<<code<<endl;
    }
};
struct Student
{
  string name;
  int roll;
};
int main()
{
  College C1;
  Student S1;
  S1.name="Rahul";
  S1.roll=43;
  C1.set_College("ABCD",1234);
  C1.disp();
  cout<<"Name: "<<S1.name<<endl;
  cout<<"Roll no.: "<<S1.roll<<endl;
  return 0;
}
