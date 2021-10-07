#include<bits/stdc++.h>
using namespace std;
int main() 
{
 char a= 'A' ;
 char b= 'B';
 string s1= "ABC" ;
 string s2 = "abc ";
 int x= int (a-b);
 int y= s1.compare(s2) ;
 cout<<"Comparison of A and B  :" <<x<<endl;
 cout<< "Comparison od 'ABC' and 'abc': " ;
 if (y==0)
 { 
  cout<<"EQUAL "<<endl;
  }
  if(y>0)
  {
    cout<<"String s1 is greater than s2"<<endl ;
    }
   if(y<0)
  {
    cout<<"String s2 is greater than s1"<<endl ;
    } 
    return 0;
   }
    
