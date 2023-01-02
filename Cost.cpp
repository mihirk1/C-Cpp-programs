#include <iostream>
using namespace std;
class cost
{
private:
int ing;
int lab;
int day;
int rent;
public:
void get_cost();
friend void get_day(cost &c);
void calc();
};
void cost::get_cost()
{
cout<<"Enter Cost of Ingredients:";
cin>>ing;
cout<<"Enter Cost of Labour:";
cin>>lab;
cout<<"Enter Cost of Rent:";
cin>>rent;
}
void get_day(cost &c)
{
cout<<"Enter Working Days:";
cin>>c.day;
}
void cost::calc()
{
int c=ing+(lab*day)+rent;
cout<<"Total cost="<<c;
}
int main()
{
cost c1;
c1.get_cost();
get_day(c1);
c1.calc();
}
