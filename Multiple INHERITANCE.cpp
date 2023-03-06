#include<iostream>
using namespace std;
class COURSEWORK
{
public:
float CAT1,CAT2;
void kirinyaga()
{
cout<<"Enter CAT1 Marks=";
cin>>CAT1;
cout<<"Enter CAT2 Marks=";
cin>>CAT2;
}
};
class EXAM
{
public:
float exam;
void UNIVERSITY()
{
cout<<"Enter EXAM Marks=";
cin>>exam;
}
};

class SCORE:public COURSEWORK, public EXAM
{
public:
float total;
void RESULTS()
{
kirinyaga();
UNIVERSITY();
total=CAT1+CAT2+exam;
cout<<"\n************OUTPUT**************\n";
cout<<"Total Score="<<total<<endl;
}
};
main()
{
class SCORE student;
student.RESULTS();
}
