#include<bits/stdc++.h>
using namespace std;
main()
{

   int n;
   	char c;
   	ofstream fout;
	fout.open("rkk.txt",ios::out);
	string s;
	cout<<"ENTER THE DATA ";
	getline(cin,s);
	fout<<s;
	fout.close();

	ifstream fin;
	fin.open("rkk.txt",ios::in);
fin>>c;
	while(!fin.eof())
	{
		 cout<<c;
		 fin>>c;

	}
	fin.close();
	fout.open("rkk.txt",ios::out|ios::app);
	getline(cin,s);
	fout<<s;
	fout.close();

	fin.open("rkk.txt",ios::in);
	while(!fin.eof())
	{
		 fin>>c;
		 cout<<c;
	}
	fin.close();
}
