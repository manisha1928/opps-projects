#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   string s;
   cout<<"Enter a string : "<<endl ;
   getline(cin , s) ;
     
    cout<<"Reversed string : "<<endl;
       for(int i= s.size() - 1 ; i>=0; i--)
      {
        cout<<s[i] ;
        }
         cout<<endl;
         
      reverse(s.begin() , s.end()) ;
     cout<<s<<endl ; 
      return 0;
    }
   
