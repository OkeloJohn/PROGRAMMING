//single inheritance
#include<iostream>
using namespace std;
class PERSON
{
public:
string name;
int age;
void kirinyaga()
{
cout<<"Enter name=";
cin>>name;
cout<<"Enter age=";
cin>>age;
}
};
class TEACHER : public PERSON // Single Inheritance
{
public:
int bp,ha;
float gp,tax,rate,np;
void university()
{
cout<<"Enter Basic pay=";
cin>>bp;
cout<<"Enter ha=";
cin>>ha;
cout<<"Enter tax rate=";
cin>>rate;
gp=bp+ha;
tax=gp*rate*0.01;
np=gp-tax;
cout<<"\n**************OUTPUT*************\n"<<endl;
cout<<"\n name = "<<name<<endl;
cout<<"\n Grosspay = "<<gp<<endl;
cout<<"\n tax = "<<tax<<endl;
cout<<"\n Netpay = "<<np<<endl;
}
};
main()
{
class TEACHER employee;
employee.kirinyaga();
employee.university();
}
