#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught ";
 }
 return 0;
}
/* this will throw an error that won't be handled because it
doesn't have an handler to accept that error*/
