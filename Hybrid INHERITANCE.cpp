//HYBRID INHERITANCE
#include<iostream>
using namespace std;
class DRIVER
{
public:
int idno;
string name;
void kirinyaga()
{
cout<<"Enter Driver IDN0 =";
cin>>idno;
cout<<"Enter Driver NAME =";
cin>>name;
}
};
class SACCO:public DRIVER
{
public:
string sname,sid;
void UNIVERSITY()
{
kirinyaga();
cout<<"Enter Sacco Id=";
cin>>sid;
cout<<"Enter Sacco name=";
cin>>sname;
}
};
class INSURANCE
{
public:
string cname;
int amount;
void READ()
{
cout<<"Enter Insuarance company name =";
cin>>cname;
cout<<"Enter Amount =";
cin>>amount;
}
};
class MATATU: public SACCO,public INSURANCE
{
public:
string regno,model;
void summary()
{
UNIVERSITY();
READ();
cout<<"Enter Vehicle regno =";
cin>>regno;
cout<<"Enter Vehicle model =";
cin>>model;
cout<<"\n************OUTPUT*************\n";
cout<<"Driver NAME ="<<name<<endl;
cout<<"Sacco name="<<sname<<endl;
cout<<"Insuarance company name="<<cname<<endl;
cout<<"Vehicle regno ="<<regno<<endl;
cout<<"Amount Insuared ="<<amount<<endl;
}
};
main()
{
class MATATU vehicle;
vehicle.summary();
}
