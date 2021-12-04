#include<iostream>
using namespace std;
class student
{
	string name;
	int age;
	int marks;
	public:
		friend void addMarks(student a);
		void assign()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter marks: ";
			cin>>marks;
		}
};
int total=0;

void addMarks(student a)
{
	total+=a.marks;
}
int main()
{
	student a,b,c;
	a.assign();
	b.assign();
	c.assign();
	addMarks(a);
	addMarks(b);
	addMarks(c);
	cout<<"Total marks of the students : "<<total;
	return 0;
}
