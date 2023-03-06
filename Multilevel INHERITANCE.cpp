//MULTI LEVEL INHERITANCE
#include<iostream>
using namespace std;
class PATIENT
{
public:
int idno;
string name;
void kirinyaga()
{
cout<<"Enter Patient IDN0 =";
cin>>idno;
cout<<"Enter Patient NAME =";
cin>>name;
}
};
class DISEASE:public PATIENT
{
public:
string disease,cause,symptom;
void UNIVERSITY()
{
kirinyaga();
cout<<"Enter Disease name=";
cin>>disease;
cout<<"Enter Disease cause =";
cin>>cause;
cout<<"Enter Disease Symptom =";
cin>>symptom;
}
};
class DRUG:public DISEASE
{
public:
string drugname,dosage;
void PRINT_STATEMENT()
{
UNIVERSITY();
cout<<"Enter Drug name =";
cin>>drugname;
cout<<"Enter Drug dosage =";
cin>>dosage;
cout<<"\n************OUTPUT*************\n";
cout<<"Name="<<name<<endl;
cout<<"Disease="<<disease<<endl;
cout<<"Drug name="<<drugname<<endl;
cout<<"Drug dosage="<<dosage<<endl;
}
};
main()
{
class DRUG mgonjwa;
mgonjwa.PRINT_STATEMENT();
}
