#include<iostream>
using namespace std;
class student
{
  string name;
  int roll;
  char sec;
  public:
    void input()
    {
      cout<<"Enter the name: ";
      cin>>name;
      cout<<"Enter roll number: ";
      cin>>roll;
      cout<<"Enter the section: ";
      cin>>sec;
    }
    void display()
    {
      cout<<"Name: "<<name<<endl;
      cout<<"Roll no. : "<<roll<<endl;
      cout<<"Section: "<<sec<<endl;
    }
};
int main()
{
  int n;
  cout<<"Enter no. of details: ";
  cin>>n;
  student *ptr = new student[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the details of student "<<i+1<<": "<<endl;
    (*(ptr+i)).input();
  }
  cout<<"\n\n";
  for(int i=0;i<n;i++)
  {
    cout<<"Details of student "<<i+1<<": "<<endl;
    (*(ptr+i)).display();
  }
  return 0;
}
