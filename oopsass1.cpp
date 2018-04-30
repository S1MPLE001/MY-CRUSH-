#include <bits/stdc++.h>
using namespace std;
class whet
{
     static double day1,high,low,temp,sno,rai,ft;
	 int day,hightemp,lowtemp,snowam,rainam;

 public :
	void getdata();
	friend whet putdata(whet b);
	void putdat();
	void show();
	whet ();
	void dele();
	void avg();
	void modify();
	void reset();
}s[31];

whet :: whet()
{


	day = 0;
	hightemp = 0;
	lowtemp = 0;
	snowam = 0;
	rainam = 0;
}


double whet::day1;
double whet::high;
double whet::low;
double whet::sno;
double whet::rai;
double whet::ft;


 void whet::getdata()
 {
 	 cin>>day;
 	 while(day!=ft+1)
      {
      	cout<<"WRONG INPUT ENTER DAY AGAIN";
      	cin>>day;

      }
      	cin>>hightemp>>lowtemp>>snowam>>rainam;
 	  day1+=day,high+=hightemp,low+=lowtemp,sno+=snowam,rai+=rainam;
 	ft++;
}

 	void whet::show()
 	{int ct=0;
	cout<<" "<<day<<"       "<<hightemp<<"\t     "<<lowtemp<<" \t\t  "<<snowam<<" \t\t"<<rainam<<endl;
	}
	void whet::avg()
 	{
 		 cout<<"AVG="<<"     "<<high/ft<<"\t     "<<low/ft<<"\t"<<sno/ft<<" \t\t"<<rai/ft<<endl;
 	}

	whet putdata(whet b)
	{
	cout<<" "<<b.day<<"       "<<b.hightemp<<"\t     "<<b.lowtemp<<" \t\t  "<<b.snowam<<" \t\t"<<b.rainam<<endl;
	}
	void whet ::dele()
	{
	high-=hightemp,low-=lowtemp,sno-=snowam,rai-=rainam;
 	day=0,hightemp=0,lowtemp=0,snowam=0,rainam=0;
	}

	void whet ::modify()
	{
		high-=hightemp,low-=lowtemp,sno-=snowam,rai-=rainam;
 	cin>>day>>hightemp>>lowtemp>>snowam>>rainam;
 	high+=hightemp,low+=lowtemp,sno+=snowam,rai+=rainam;
	}
	void whet::reset()
	{
		 high=0,low=0,sno=0,rai=0,ft=0;
	}


int main()
 {

 	int i,n;
 	yv:
 	cout<<"ENTER THE NO. OF DAYS"<<endl;
 	cin>>n;
 	cout<<"ENTER DAY FIRST-:    HIGHTEMP    LOWTEMP   SNOWAMOUNT   RAINAMOUNT ";

 	for(i=0;i<n;i++)
		{
			 s[i].getdata();
		}
		yu:
     cout<<"PRESS 1 FOR SHOW DATA \n PRESS 2 FOR SHOW DATA WITH AVG \n PRESS 3 FOR TO DELETE ONE DAY & DISPLAY  DATA \n PRESS 4 FOR MODIFY DATA ";
      int y;
       cin>>y;
       switch(y)
       {
		case 1 :
	   cout<<"DAY    HIGHTEMP    LOWTEMP   SNOWAMOUNT    RAINAMOUNT "<<endl;
		for(i=0;i<n;i++)
		putdata(s[i]);
		break;

		case 2 :
			cout<<"DAY    HIGHTEMP    LOWTEMP   SNOWAMOUNT    RAINAMOUNT "<<endl;
			for(i=0;i<n;i++)
				s[i].show();
				s[0].avg();
				break;

		case 3 :

			cout<<"\nENTER DAY WHICH YOU WANT TO DELETE ";
			int x;
			cin>>x;
			s[x-1].dele();
			cout<<"DAY    HIGHTEMP    LOWTEMP   SNOWAMOUNT   RAINAMOUNT "<<endl;
			for(i=0;i<n;i++)
				s[i].show();
				break;

		case 4 :
			cout<<"\nENTER DAY WHICH YOU WANT TO MODIFY ";
			cin>>x;
			 if(x<=n)
			{s[x-1].modify();

			cout<<"DAY    HIGHTEMP    LOWTEMP   SNOWAMOUNT   RAINAMOUNT "<<endl;
			for(i=0;i<n;i++)
				s[i].show();
				break;
			}
			else
				cout<<"DAY IS NOT PRESENT"<<endl;

                }
                cout<<"PRESS 1 FOR CONTINUE ";
                int x;
                cin>>x;
                if(x==1)
					goto yu;
					else if(x==2)
						{
							goto yv;
							 s[0].reset();
						}
					else
						return 0;

 }

