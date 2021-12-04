#include<iostream>
using namespace std;
class student
{
	string name;
	long roll;
	string number;
	public:
		void assign(string a,long b,string c)
		{
			name=a;
			roll=b;
			number=c;
		}
		void print()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll number: "<<roll<<endl;
			cout<<"Mobile number: "<<number<<endl;
		}
};
int main()
{
	student obj1,obj2;
	obj1.assign("john",32,"8923196392");
	obj2.assign("Sam",56,"7838281383");	
	obj1.print();
	obj2.print();
	return 0;
}
