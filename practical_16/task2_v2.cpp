#include <iostream>
using namespace std;
int main()
{
 try {
 throw 'a';
 }
 catch (int x) {
 cout << "Caught " << x;
 }
 catch (...) {
 cout << "Default Exception\n";
 }
 return 0;
}
/*Default Expression will be printed because before the default handler we only
have a handler which only catches a integer so it won't work hence the default
handler will work.*/
