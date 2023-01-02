#include <iostream>
using namespace std;
class Stock
{
private:
static double r1,r2,r3;
public:
static void TCS(double a)
{
double amt1;
amt1=(r1/100.0)*a+a;
amt1+=(1.0/100.0)*amt1;
cout<<"Predicted stock price for TCS:"<<amt1<<"\n";
}
static void WIP(double b)
{
double amt2;
amt2=(r2/100.0)*b+b;
amt2+=(1.0/100.0)*amt2;
cout<<"Predicted stock price for WIPRO:"<<amt2<<"\n";
}
static void ROL(double c)
{
double amt3;
amt3=(r3/100.0)*c+c;
amt3+=(1.0/100.0)*amt3;
cout<<"Predicted stock price for ROLEX:"<<amt3<<"\n";
}
};
double Stock::r1=10.0;
double Stock::r2=20.0;
double Stock::r3=12.0;
int main()
{
double a1,a2,a3; 
cout<<"Enter previous week rate for TCS:";
cin>>a1;
cout<<"Enter previous week rate for WIPRO:";
cin>>a2;
cout<<"Enter previous week rate for ROLEX:";
cin>>a3;
Stock::TCS(a1);
Stock::WIP(a2);
Stock::ROL(a3);
}
