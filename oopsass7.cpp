#include<bits/stdc++.h>
using namespace std;
template<class t>
class mat{
   protected:
   	int r,s;
    t m[100][100];
   public:
	 void getdata(int x,int y)
	 {
	 	r=x,s=y;
	 	for(int i=0;i<r;i++)
		{
			for(int j=0;j<s;j++)
				cin>>m[i][j];
		}

	 }
	 void sum(mat b)
	 {
	 	t v[100][100];
int i,j;
	 	for(i=0;i<r;i++)
		{

			 for(j=0;j<s;j++)
				{v[i][j]=m[i][j]+b.m[i][j];
				cout<<v[i][j]<<" ";}
				cout<<endl;
				}

	 }

	 void sub(mat b)
	 {
	 	t v[100][100];
int i,j,sum;
	 	for(i=0;i<r;i++)
		{

			 for(j=0;j<s;j++)
				{sum=m[i][j]-b.m[i][j];
				cout<<sum<<" ";}
				cout<<endl;
		}

	 }
	 void tra();
	 void mul(mat b)
	 {
	 	t v[100][100];
	 	int sum=0,i,j,k;
	 	for(i=0;i<r;i++)
		{

			 for(j=0;j<s;j++)
			 {
				for(k=0;k<r;k++)
			   sum+=m[i][k]*b.m[k][j];
				cout<<sum<<" ";
				sum=0;}
				cout<<endl;

	 }
	 }
    };

     template<class t> void mat<t>::tra()
	 {
	 	t v[100][100];
int i,j,sum;
	 	for(i=0;i<s;i++)
		{
			for(j=0;j<r;j++)
				cout<<m[j][i]<<" ";
				cout<<endl;
		}

	 }

    main()
    {
         int n,m;
    	 mat<int> m1,m2;
    	 mat<float>m3,m4;
    	 cout<<"PRESS 1 FOR INT\PRESS 2 FOR DOUBLE\n";
    	 int z;
    	 cin>>z;
    	 if(z==1)
    	 {cout<<"ENTER THE VALUE OF ROW AND COL FOR MATRIX 1";
    	 cin>>n>>m;
    	  m1.getdata(n,m);
    	   cout<<"ENTER THE VALUE OF SECOND MATRIX";
    	  m2.getdata(n,m);
    	 }
    	 else
			{cout<<"ENTER THE VALUE OF FIRST MATRIX";
			cin>>n>>m;
    	  m3.getdata(n,m);
    	   cout<<"ENTER THE VALUE OF SECOND MATRIX";
    	  m4.getdata(n,m);
    	 }
    	  yo:
    	  cout<<"PRESS 1 FOR SUM\nPRESS 2 FOR SUBTRACTION\nPRESS 3 FOR MULTIPILCATION\nPRESS 4 FOR TRANSPOSE";
		int x;
		cin>>x;
		switch(x)
		{

		  case 1 :
			 z==1?m1.sum(m2):m3.sum(m4);
			 break;
		  case 2 :
			 z==1?m1.sub(m2):m3.sub(m4);
			break;
			case 3 :
			 z==1?m1.mul(m2):m3.mul(m4);
			break;
			case 4 :
			 z==1?m1.tra():m3.tra();
			 break;
		}
    	cout<<"IF U WANT TO CONTINUE PRESS 1 \n";
    	int y;
    	cin>>y;
    	if(y==1)
			goto yo;
		else
			return 0;
    }
