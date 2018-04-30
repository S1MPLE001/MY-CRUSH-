#include<bits/stdc++.h>
using namespace std;
class student{
    int roll;
    string name;
    char grade;
    int marks;
public:
    void getdata()
    {
        cout<<"\nRoll no. : ";  cin>>roll;
        cout<<"\nName : ";  cin>>name;
        cout<<"\nGrade : ";  cin>>grade;
        cout<<"\nMarks : ";  cin>>marks;
    }

    void printdata()
    {
        cout<<"\nRoll no. : ";  cout<<roll;
        cout<<"\nName : ";  cout<<name;
        cout<<"\nGrade : ";  cout<<grade;
        cout<<"\nMarks : ";  cout<<marks;
    }

    int retroll()
    {return roll;}
};

int main()
{
    student s;
    int ch,look,k;
    fstream file;
    ofstream eg;

      yo:
       file.open("wk.txt",ios::app|ios::in|ios::out);
       cout<<"PRESS 1 FOR ADD DATA\nPRESS 2 FOR DISPLAY DATA\nPRESS 3 FOR SPECFIC DATA\nPRESS 4 DELETE DATA\nPRESS 5 FOR EDIT DATA\n";
       cin>>ch;
       switch(ch)
       {
            case 1:s.getdata();
                    file.seekp(0);
                    file.write((char*)&s,sizeof(s));
                    file.close();
                    break;

            case 2:file.seekg(0);
                    file.read((char*)&s,sizeof(s));
                    while(!file.eof())
                    {
                         s.printdata();
                        file.read((char*)&s,sizeof(s));
                        cout<<endl;
				       }
                    file.close();
                    break;
            case 3:
                    file.seekg(0);
                    cout<<"\nEnter roll no. to search for : ";
                    cin>>look;
                    file.read((char*)&s,sizeof(s));
                    while(!file.eof())
                    {

                        if(s.retroll()==look)
                        {s.printdata();k=1;break;}
                        file.read((char*)&s,sizeof(s));
                    }
                    if(k!=1)
                    cout<<"\nRecord not found\n";
                    file.close();
                    break;

            case 4:file.seekp(0,ios::end);
                    if(file.tellp()==0)
                        cout<<"\n\nfile is empty\n\n";
                    else
                    {
                    eg.open("rk.txt");
                    file.seekg(0);
                    eg.seekp(0);
                    cout<<"\nEnter roll no. to delete : ";
                    cin>>look;
                    file.read((char*)&s,sizeof(s));
                    while(!file.eof())
                    {
                        //file.read((char*)&s,sizeof(s));
                        if(s.retroll()==look)
                            {k=1;}
                        else
                        eg.write((char*)&s,sizeof(s));
                        file.read((char*)&s,sizeof(s));
                    }
                    if(k!=1)
                    cout<<"\nRecord not found\n";
                    file.close();
                    eg.close();
                    remove("pd.txt");
                    rename("rk.txt","pd.txt");}
                    break;

            case 5:file.seekg(0);
                    cout<<"\nEnter roll no. whose record to be modify : ";
                    cin>>look;
                    file.read((char*)&s,sizeof(s));
                    while(!file.eof())
                    {
                        //file.read((char*)&s,sizeof(s));
                        if(s.retroll()==look)
                        {   s.getdata();
                            file.seekg(-sizeof(s),ios::cur);
                            file.write((char*)&s,sizeof(s));
                            k=1;
                            break;
                        }
                        file.read((char*)&s,sizeof(s));
                    }
                    if(k!=1)
                    cout<<"\nRecord not found\n";
                    file.close();
                    break;

            //default:cout<<"\n\nChoose from 1-5 only\n\n";
       }

       cout<<"IF U WANT TO CONRINUE PRESS 1";
       int y;
       cin>>y;
       if(y==1)
		goto yo;
       }
