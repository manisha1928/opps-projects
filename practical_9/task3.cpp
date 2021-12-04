#include<iostream>
using namespace std;
class student
{
	string name;
	public:
		static int x;
		void assign()
		{
			cout<<"Enter name: ";
			cin>>name;
			x++;
		}
		void print()
		{
			cout<<"Name: "<<name<<endl;
		}
};
int student::x=0;
int main()
{
	int choice=0,i=0;
	student s[50];
	do{
		cout<<"Enter your choice: "<<endl;
		cout<<"1.Enter a detail"<<endl;
		cout<<"0.Exit"<<endl;
		cin>>choice;
		if(choice)
		{
			s[i++].assign();
		}
	}while(choice);
	cout<<"Total number of times function assign was called is :"<<student::x<<endl;
	return 0;
}
