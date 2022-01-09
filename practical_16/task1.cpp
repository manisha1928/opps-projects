#include<iostream>
using namespace std;
template<typename T>
T add(T x, T y)
{
	return x+y;
}
template<typename P, typename Q, typename R>
P add(Q x, R y)
{
	return x+y;
}
int main()
{
	cout<<add<int>(3,4)<<endl;
	cout<<add<double,int,float>(3,2.4f)<<endl;
	return 0;
}
