#include<bits/stdc++.h>
using namespace std;
class comp
{

int a,b;
public:
	  comp()
	  {

	  }
       comp(int u,int v)
       {
       	 a=u;
       	 b=u;
       }
	 friend comp operator+(comp m,comp n);
	  friend comp operator-(comp m,comp n);
	  //friend comp operator-(comp &m);
	   comp operator*(comp c);
	  comp operator/(comp c);
	  bool operator>(comp c);


	comp operator-()
	  {
	  	comp temp;
	  	temp.a=-a;
	  	temp.b=-b;
	  	return temp;

	  }


		 friend istream & operator>>(istream &in,comp &c);
    friend ostream & operator<<(ostream &out,comp &c);


	/* void getdata()
	  {cin>>a>>b;}
	  void setdata()
	  {cout<<a<<" "<<b;
	  }
*/
 };
 ostream & operator<<(ostream &dout, comp &c)
     {
     	 dout<<c.a<<"+"<<c.b<<"i"<<endl;
     }

      istream & operator>>(istream &din, comp &c)
     {   cout<<"ENTER THE REAL VALUE OF COMPLEX NO.\n";
     	 din>>c.a;
     	  cout<<"ENTER THE IMG VALUE OF COMPLEX NO.\n";
     	 din>>c.b;
     }
  /*
  comp operator-(comp &m)
	  {
	  	 comp temp;
	  	 temp.a=-m.a;
	  	 temp.b=-m.b;
	  	 return(temp);
	  }
	  */
 	  comp comp::operator*(comp c)
	  {
	  	  comp temp;
	  	  temp.a=a*c.a;
	  	  temp.b=b*c.b;
	  	  return temp;
	  }
	  comp comp::operator/(comp c)
	  {
	  	  comp temp;
	  	  temp.a=a/c.a;
	  	  temp.b=b/c.b;
	  	  return temp;
	  }
	comp operator+(comp m,comp n)
   {
   	   comp temp;
   	   temp.a=m.a+n.a;
   	   temp.b=m.b+n.b;
   	   return(temp);
   }

    comp operator-(comp m,comp n)
	{
	comp temp;
	temp.a=m.a-n.a;
	temp.b=m.b-n.b;
	return(temp);
   }

    bool comp::operator>(comp n)
    {

    	 if(a>n.a&&b>n.b)
			return true;
		 else
			return false;

    }
   int main()
   {
     int u,v;
     cin>>u>>v;

	comp c1,c2,c3,c4,c5(u,v);
	pd:
	cout<<"ENTER FIRST COMPLEX NO\n";
	cin>>c1;

    cout<<"ENTER SECOND COMPLEX NO\n";
	cin>>c2;

	cout<<"FIRST COMPLEX NO "<<c1<<endl;
	cout<<"SECOND COMPLEX NO "<<c2<<endl;

    yo:

     cout<<"PRESS 1 FOR ADDITION OF COMPLEX NO\n PRESS 2 FOR SUBTRACTION \n PRESS 3 FOR MULTIPLICATION \n PRESS 4 FOR DIVISION \n PRESS 5 FOR TO NEGATION\n PRESS 6 FOR COMPARISION ";
      int x;
      cin>>x;
      switch(x)
      {

	  case 1 :
		 c3=c1+c2;
		  cout<<c3;
		  break;

	  case 2 :
		c3=c1-c2;
		cout<<c3;
		break;


	  case 3 :
		c3=c1.operator*(c2);
		cout<<c3;
		break;


	  case 4 :
		c3=c1.operator/(c2);
		cout<<c3;
		break;

	  case 5 :
		 c4=c2.operator-();
		 cout<<c4;
	  case 6 :
		if(c1>c2)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;

      }
	  cout<<"PRESS 1 TO CONTINUE \n PRESS 2 FOR RESET THE VALUE ";
	   int y;
	   cin>>y;
	   if(y==1)
			goto yo;
	   if(y==2)
		goto pd;
	   else
		return 0;


   }
