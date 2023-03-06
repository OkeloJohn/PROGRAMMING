#include<iostream>       //HIERACHICAL
using namespace std;
class EMPLOYEE
{
public:
float basicsalary1, basicsalary2;
void kirinyaga()
{
cout<<"Enter Full Timer Starting Salary =";
cin>>basicsalary1;
}
void kirinyaga2()
{
cout<<"Enter Intern Starting Salary =";
cin>>basicsalary2;
}
};
class FULLTIMER:public EMPLOYEE
{
public:
float rate;
void UNIVERSITY()
{
kirinyaga();
cout<<"Enter Percentage increment for Full timer=";
cin>>rate;
cout<<"After increament increment New Salary="<<rate*basicsalary1*0.01+basicsalary1<<endl;
}
};
class INTERN:public EMPLOYEE
{
public:
float rate;
void PAY()
{
kirinyaga2();
cout<<"Enter Percentage increment for intern=";
cin>>rate;
cout<<"After increament increment New Salary="<<rate*basicsalary2*0.01+basicsalary2<<endl;
}
};
main()
{
class FULLTIMER employee;
class INTERN student;
employee.UNIVERSITY();
student.PAY();
}
