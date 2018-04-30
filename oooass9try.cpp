/* THE BLIND CODER  */
#include<bits/stdc++.h>
using namespace std;
void div(double a,double b)
{
	double c;
	try
		{
			if(b!=0)
			{
				c=a/b;
				cout<<"division is:  "<<c<<"\n";
			}
			else if(b==0)
				throw b;
		}
	catch(double b)
		{
			cout<<"WRONG INPUT\n";
		}
}
void get()
{
	double a,b;
	cout<<"Enter Dividend \n";
	cin>>a;
	cout<<"Enter Divisor\n";
	cin>>b;
	div(a,b);

}
int main()
{
	int x;
	do
	{
		get();
		cout<<"IF U WANT TO CONTINUE PRESS 1 \n";
		cin>>x;
	}while(x==1);
}




