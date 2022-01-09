#include<iostream>
using namespace std;
class A
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;	
};
class B:private A
{
	public:
		void display()
		{
			x=10;
			y=20;
			//z=30; this will give error
			cout<<x<<" "<<y<<" "<<endl;
		}	
};
int main()
{
	B obj;
	//obj.x=10; this will give error
	//obj.y=20; this will give error
	//obj.z=30; this will give error
	obj.display();
	return 0;
}
