#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
int largest;
cout<<"enter a:";
cin>>a;
cout<<"enter b:";
cin>>b;
cout<<"enter c:";
cin>>c;
largest=(a>b)?(a>c)?a:c:(b>c)?b:c;
cout<<largest<<"is the largest number";

return 0;

}
