#include<bits/stdc++.h>
using namespace std;
class shape
{
 public:
double l,b,x;

public:
	 void getdata()
	{
	 cin>>l>>b;
	}
	virtual void area()=0;

	 };
	 class tri:public shape
	 {

	public:
		void area()
		{
			cout<<"area of triangle :"<<l*b*0.5;
		}
	 };

	  class squa:public shape
	 {

	public:
		void area()
		{
			cout<<"area of square :"<<l*b;
		}

	 };

	   class rect:public shape
	 {

	public:
		void area()
		{

		cout<<"area of rectangle :"<<l*b;
		}
	 };

	    class circ:public shape
	 {

	public:
		void area()
		{

		cout<<"area of circle :"<<3.14*l*l;
		}
	 };
	 main()
	 {

	 	 shape *p;
	 	 tri t;
		squa s;
	 	  rect r;
	 	  circ c;

	 	  yo:
	 	 cout<<"PRESS 1 TO FIND AREA OF SQUARE\nPRESS 2  FOR TO FIND AREA OF RECTANGLE\nPRESS 3 FOR TO FIND AREA OF TRIANGLE\nPRESS 4 FOR TO FIND AREA OF CIRCLE\n";
	 	 int y;
	 	 cin>>y;
	 	 switch(y)
	 	 {

		case 1 :

    cout<<"ENTER THE DIMENSION OF SQUARE\n";
			p=&s;
			p->getdata();
			 p->area();
			 break;

		case 2:
			cout<<"ENTER THE DIMENSION OF RECTANGLE\n";
			 	p=&r;
			 	p->getdata();
			 p->area();
			 break;

		case 3:
			cout<<"ENTER THE DIMENSION OF TRIAGLE\n";
			 	p=&t;
			 	p->getdata();
			 p->area();
			 break;

		case 4 :
			cout<<"ENTER THE DIMENSION OF CIRCLE \n";
			 	p=&c;
			 	p->getdata();
			 p->area();
			 break;

	 	 }
	 	 cout<<"PRESS 1 IF U WANT TO CONTINUE";
	 	 int x;
	 	 cin>>x;
	 	 if(x==1)
			goto yo;
		 else
			return 0;

	 }
