#include<iostream>
using namespace std;

string ispallindrome(string s)
{
 for(int i=0;i<s.length()/2;i++)
 {
  
  if(s[i]!= s[s.length() - i-1])
  {
    return "not a pallindrome" ;
    }
  }
   return" pallindrome string" ;
   
 }
    
    
    
int main()
 {
  string s = " ABCDCBA ";
  cout<< ispallindrome(s);
  return 0;
 }
 
