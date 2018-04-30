/* THE BLIND CODER */
#include<bits/stdc++.h>
using namespace std;
 class  info{
    string name;
    char gender;
    int age;
public:
     void getinfo()
    {
        cout<<"\nName : ";      cin>>name;
        cout<<"\nGender : ";    cin>>gender;
        cout<<"\nAge : ";       cin>>age;
    }
    void printinfo()
    {
        cout<<"\nName : "<<name;
        cout<<"\nGender : "<<gender;
        cout<<"\nAge : "<<age;
    }
};

class work:public virtual info{
    string company;
    string interest;
public:
    void getwork()
    {
        cout<<"\nCompany : ";       cin>>company;
        cout<<"\nInterest : ";      cin>>interest;
    }
    void printwork()
    {
        cout<<"\nCompany : "<<company;
        cout<<"\nInterest : "<<interest;
    }
};

class acadmics:public virtual info{
    string qualification;
    int marks;
    string division;
public:
    void getacadmics()
    {
        cout<<"\nQualification : ";     cin>>qualification;
        cout<<"\nMarks : ";             cin>>marks;
        cout<<"\nDivision: ";           cin>>division;
    }
    void printacadmics()
    {
        cout<<"\nQualification : "<<qualification;
        cout<<"\nMarks : "<<marks;
        cout<<"\nDivision: "<<division;
    }
};
class finalist : public  work,public acadmics
{

};

int main()
{
    finalist a[20];
    int n;
    cout<<"HOW MANY RECORDES YOU WANT TO ENTER \n";
    cin>>n;
    for(int i=0;i<n;++i)
    {
    	cout<<"ENTER THE "<<i+1<<" RECORD"<<endl;
        a[i].getinfo();
        a[i].getwork();
        a[i].getacadmics();
    }
   cout<<endl;
   cout<<"YOU ENTER "<<n<<"RECORDES"<<endl;
    for(int i=0;i<n;++i)
    {
        a[i].printinfo();
        a[i].printwork();
        a[i].printacadmics();
        cout<<endl;
    }
}
