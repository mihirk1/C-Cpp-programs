#include <iostream>
using namespace std;
class Security
{
private:
static int newa;
public:
static void HR(int a,int b)
{
cout<<"Number of attacks in HR department:"<<a+b+newa<<"\n";
}
static void Tech(int a,int b)
{
cout<<"Number of attacks in Technology department:"<<a+b+newa<<"\n";
}
static void Test(int a,int b)
{
cout<<"Number of attacks in Testing department:"<<a+b+newa<<"\n";
}
};
int Security::newa=100;
int main()
{
int fire,det,soft,intr,test,vul;
cout<<"Enter firewall-bypassed attacks:";
cin>>fire;
cout<<"Enter detection-bypassed attacks:";
cin>>det;
cout<<"Enter software-bypassed attacks:";
cin>>soft;
cout<<"Enter intrusion-bypassed attacks:";
cin>>intr;
cout<<"Enter testcase-bypassed attacks:";
cin>>test;
cout<<"Enter vulnerabilities-bypassed attacks:";
cin>>vul;
Security::HR(fire,det);
Security::Tech(soft,intr);
Security::Test(test,vul);
}


