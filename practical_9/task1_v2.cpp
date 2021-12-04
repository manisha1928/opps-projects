#include<iostream>
using namespace std;
class student
{
	string name;
	int age;
	int year;
	char section;
	public:
		static int x;
		void assign()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter year: ";
			cin>>year;
			cout<<"Enter section: ";
			cin>>section;
			x++;
		}
		void print()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Year: "<<year<<endl;
			cout<<"Section: "<<section<<endl;
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
	cout<<"Total number of student :"<<student::x<<endl;
	return 0;
