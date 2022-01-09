#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fin;
	fin.open("sample.txt",ios::in);
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
	fstream fout;
	fout.open("sample.txt",ios::out);
	if(!fout)
		cout<<"Can't open file."<<endl;
	else
	{
		fout<<"Rahul Arya.\n";
		fout.close();
	}

	fout.open("sample.txt",ios::app);
	if(!fout)
		cout<<"Can't open file."<<endl;
	else
	{
		fout<<"Append to the existing file.\n";
		fout.close();
	}
	return 0;

}
