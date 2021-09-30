#include<iostream>
using namespace std;

void charfun()
 {
  char a= 'a';
  cout<<a<<endl;
 }
 
void boolfun()
 {
  bool a= (4>9);
  cout<<a<<endl;
  }
void shortfun()
 {
 short a=2;
 cout<<a<<endl;
 }
void intfun()
 {
  int a=2564;
  cout<<a<<endl;
 }
void longfun()
 {
   long a=145254;
   cout<<a<<endl;
 }
void floatfun()
 {
  float a= 15.2f;
  cout<<a<<endl;
 }
void doublefun()
{
 double a=14.54;
 cout<<a<<endl;
}
void longdoublefun()
{ 
 long double a= 2.5555565;
 cout<<a<<endl;
}
void widecharfun()
{
 wchar_t a='A';
 cout<<a<<endl;
}
int main()
{
 charfun();
 boolfun();
 shortfun();
 intfun();
 longfun();
 floatfun();
 doublefun();
 longdoublefun();
 widecharfun();
  return 0;
  }
