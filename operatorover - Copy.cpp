#include<bits/stdc++.h>
using namespace std;
/*
class com
{
	 //THIS IS  A SIMPLE METHOD TO ADD TWO NON PRIMITIVE MEMBERS & WITHOUT USING OVERLOAD OPERATOR

		int m;
	public:
		void getdata()
		{
			cin>>m;
				}
		void display()
			{
			cout<<m;
			}
		com sum(com b)
			{
			com temp;
			temp.m=m+b.m;
			return temp;
				}
				}c1,c2,c3;

int main()
{
	c1.getdata();
	c2.getdata();
	c3=c1.sum(c2);
	c3.display();
}
*/
class com
{
	 //THIS IS  A SIMPLE METHOD TO ADD TWO NON PRIMITIVE MEMBERS & WITHOUT USING OVERLOAD OPERATOR

		int m;
	public:
		void getdata()
		{
			cin>>m;
				}
		void display()
			{
			cout<<m;
			}
		/*com operator+(com b)
			{
			com temp;
			temp.m=m+b.m; //  THIS IS PLUS A OPREATOR
			return temp;
				}
				*/

				com operator++()
				{
					com temp; //THIS IS A PRE INCREMENT
					temp.m=++m;
				}


				}c1,c2,c3;

int main()
{
	c1.getdata();
	c2.getdata();
	//c3=c1.operator+(c2);
	//c3=c1.operator++();
		c3=++c1;
	c3.display();
}

