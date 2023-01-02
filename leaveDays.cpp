#include <iostream>
using namespace std;
class w_days
{
public:
int gov;
int uni;
int ux;
void get(); 
};
class Proff:public w_days
{ 
private: 
int wd_p;
public: 
void calc_p();
};
class AsProf:public Proff
{
private: 
int wd_ap;
public:
void calc_ap();
};
class Assistant:public AsProf 
{
private: 
int wd_s;
public: 
void calc_s();
};
void w_days::get()
{
cout<<"Enter Government Leave Days:";
cin>>gov;
cout<<"Enter University Leave Days:";
cin>>uni;
cout<<"Enter Unexpected Leave Days:";
cin>>ux;
}
void Proff::calc_p() 
{
get();
wd_p=365-uni-gov-ux;
cout<<"Proffessors:"<<wd_p<<"\n";
}
void AsProf::calc_ap() 
{
calc_p();
wd_ap=365-gov-ux;
cout<<"Assistant Proffessors:"<<wd_ap<<"\n";
}
void Assistant::calc_s() 
{
calc_ap();
wd_s=365-gov;
cout<<"Assistant:"<<wd_s<<"\n";
}
int main() 
{
Assistant s;
s.calc_s();
}