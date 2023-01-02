#include <iostream>
using namespace std;
class salary
{
private:
static int a;
public:
static void calc(int c)
{
int mang,assn,cash;
mang=c+40.0/100.0*c+10.0/100.0*c+a;
 cout<<"Salary of Manager ="<<mang<<"\n";
assn=c+30.0/100.0*c+10.0/100.0*c+a;
cout<<"Salary of Assistant Manager="<<assn<<"\n";
cash=c+10.0/100.0*c+2.0/100.0*c+a;
cout<<"Salary of Cashier="<<cash<<"\n";
}
 
};
int salary::a=1000; 
int main()
{
int b;
cout<<"Enter basic pay:";
cin>>b;
salary::calc(b);
}
