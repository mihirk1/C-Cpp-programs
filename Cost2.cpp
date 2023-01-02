#include <iostream>
using namespace std;
class cost
{
public: 
int c;
};
class floor1:public cost 
{
public: 
int c1;
void get_c1()
{
cout<<"Enter cost of 1st floor:"; 
cin>>c1; 
}
};
class floor2:public floor1 
{
public:
int c2;
void get_c2()
{
cout<<"Enter cost of 2nd floor:"; 
cin>>c2;
}
};
class floor3:public floor2
{
private:
int c3;
public:
friend void get_c3(floor3 &f); 
void get()
{
get_c1(); 
get_c2();
}
void cal()
{
c=c1+c2+c3;
cout<<"Total:"<<c;
}
};
void get_c3(floor3 &f) 
{
cout<<"Enter cost of 3rd floor:";
cin>>f.c3;
}
int main() 
{
floor3 ff;
ff.get();
get_c3(ff);
ff.cal();
}
