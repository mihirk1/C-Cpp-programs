#include <iostream>
using namespace std;
 

class one
{
    protected:
    int a=20;
};

class two:private one
{
    protected:
    int b=30;

    public:
    int sum1=a+b;
};

class three:private two
{
    protected:
    int c=50;

    public:
    int sum2=c+sum1;
};

class four:private three
{
    protected:
    int d=60;
    int sum3=d+sum2;
};

class five: private four
{
    protected:
    int e= 90;

    public:
    int sum_a()
    {
        return sum3+e;
    }
};

int main()
{
    five x;
    cout<<x.sum_a()<<endl;
    
};