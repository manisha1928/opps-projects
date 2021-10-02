#includee<iostream>
 using namespaces std;
namspace first 
{
 int add(int a,int b)
  {
    return a+b;
   }
 }
 namspace second
{
 int add(float a,float b)
  {
    return a+b;
   }
 }
 int main()
 {
   cout<<add(5,2.5)<<"\n";
   cout<<add(5.2,2)<<"\n";
   cout<<add(5,2)<<"\n";
   cout<<add(0,0)<<"\n";
   
   return 0;
 }
