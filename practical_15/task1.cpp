#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("sample.txt");
	if(!fin)
		cout<<"Can't open file."<<endl;
	else
	{
		char ch;
		while(!fin.eof())
		{
			fin>>ch;
			cout<<ch;
		}
		fin.close();
	}
	ofstream fout;
	fout.open("sample.txt");
	if(!fout)
		cout<<"Can't open file."<<endl;
	else
	{
		fout<<"Hello World";
		fout.close();
	}
	return 0;
}
