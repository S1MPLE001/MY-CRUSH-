#include"bits/stdc++.h"
using namespace std;
class b1
 {
 	protected:
	string name,dob,bg;
	public:
		b1()
		{

		}
	b1(string a,string b,string c)
 	 {name=a;
 	 	dob=b;
 	 	bg=c;
 	 }
 };
	class b2
		{
		protected:
		int ht,wt;
		public:
			b2()
			{

			}
		b2(int d,int e)
		{
		 ht=d;
		 wt=e;
		}
		};
class b3
 {
	protected:
	int add,pin;
	public:
		b3()
		{

		}
	b3(int f,int g)
	{add=f;
		pin=g;
	}
 };
 class der:public b1,public b2,public b3
	{
		protected:
		int tel,lic;
		public:
			der()
			{

			}
		der(string a,string b,string c,int d,int e,int f,int g,int h,int i):b1(a,b,c),b2( d,e),b3(f,g)
		{
		tel=h;
		lic=i;
		}
		void display()
		{
			cout<<name<<" "<<dob<<" "<<bg<<" "<<ht<<" "<<wt<<" "<<add<<" "<<pin<<" "<<tel<<" "<<lic<<endl;
		}
		int lice()
		{
			 return lic;
		}
 };
 int main()
{
	string a,b,c;
	int d,e,f,g,h,i,n=1,z,y,x,u,lic,flag=0;
	der *pos[20];
	go:
	cout<<"PRESS 1 TO ENTER DATA \nPRESS 2 FOR DISPLAY DATA \nPRESS 3 FOR INSERT DATA \nPRESS 4 FOR TO DISPLAY SPECF DATA \nPRESS 5 FOR DELETE DATA \nPRESS 6 FOR TO MODIFY DATA ";
	cin>>x;
	switch(x)
	{
 case 1 :
 	cout<<"ENTER NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;
	yo:

		cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	pos[n]=new der(a,b,c,d,e,f,g,h,i);
	cout<<"IF U WANT TO ADD ONE MORE DATA THEN  PRESS 1 ELSE PRESS 0"<<endl;
	cin>>z;
	if(z==1)
	{   n++;
		goto yo ;
	}
   break;
	case 2 :
cout<<"NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;
	for(i=1;i<=n;i++)
	{pos[i]->display();
	      cout<<endl;}
	      break;


 case 3 :
 	  n++;
 	  cout<<"ENTER NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;
 	  cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
	pos[n]=new der(a,b,c,d,e,f,g,h,i);

	for(i=1;i<=n;i++)
	{pos[i]->display();
	      cout<<endl;}

	break;

 case 4 :
 	cout<<"ENTER THE LIC NO."<<endl;
 	cin>>lic;
	 for(i=1;i<=n;i++)
	 {
	 	 if(lic==pos[i]->lice())
			{
				pos[i]->display();
				flag=1;
			}

	 }
	 if(!(flag))
		cout<<"WRONG INPUT"<<endl,flag=0;
		flag=0;
	 break;

 case 5 :
	 cout<<"ENTER THE LIC NO. WHICH U WANT TO DELETE "<<endl;
 	cin>>lic;
	 for(i=1;i<=n;i++)
	 {
	 	 if(lic==pos[i]->lice())
			{
				delete(pos[i]);
				flag=1;
				for(int j=i;j<n;j++)
				 pos[j]=pos[j+1];
			  n--;
			}

			}
	 if(!(flag))
		cout<<"WRONG INPUT"<<endl,flag=0;
	 cout<<"NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;
			for(i=1;i<=n;i++)
	{pos[i]->display();
	      cout<<endl;}
	      break;

	  case 6 :
	 cout<<"ENTER THE LIC NO. WHICH U WANT TO MODIFY "<<endl;
 	cin>>lic;
	 for(i=1;i<=n;i++)
	 {
	 	 if(lic==pos[i]->lice())
			{  cout<<"ENTER NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;
				 cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
				pos[i]=new der(a,b,c,d,e,f,g,h,i);
				flag=1;
			}
			}
			if(!(flag))
		{cout<<"WRONG INPUT"<<endl,flag=0;
	 break;
		}
			cout<<"NAME\tDOB\tBG\tHEGIHT\WEIGHT\tADDRESS\tPIN\tTELNO.\tLICNO."<<endl;

			for(i=1;i<=n;i++)
	{pos[i]->display();
	      cout<<endl;}
	      break;


}
	cout<<"IF U WANT TO CONTINUE THEN PRESS 1 ELSE PRESS 0"<<endl;
	cin>>u;
	if(u)
		goto go;

}

