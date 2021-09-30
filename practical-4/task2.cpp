#include<iostream>
using namespace std;
 namespace first
 namespace second
 {
  void say_something()
   {
    cout<<"hello programmers ";
    }
 }
 
int main()
{
 first::say_something();
 return 0;
}
