#include<iostream>
using namespace std;
class info
{
  string name;
  string address;
  string telephone;
  string mobile;
  string head;
  public:
    void input()
    {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter address: ";
      cin>>address;
      cout<<"Enter telephone number: ";
      cin>>telephone;
      cout<<"Enter the mobile number: ";
      cin>>mobile;
      cout<<"Enter the head of the family: ";
      cin>>head;
    }
   void disp()
   {
     cout<<"Name: "<<name<<endl;
     cout<<"Address: "<<address<<endl;
     cout<<"Telephone number: "<<telephone<<endl;
     cout<<"Mobile number: "<<mobile<<endl;
     cout<<"Head of the family: "<<head<<endl;   
   }
};
int main()
{
  info obj[3];
  for(int i=0;i<3;i++)
  {
    cout<<"Enter the details of person "<<i+1<<": "<<endl;
    obj[i].input();
  }
  for(int i=0;i<3;i++)
  {
    cout<<"Details of person "<<i+1<<": "<<endl;
    obj[i].disp();
  }
  return 0;
}
