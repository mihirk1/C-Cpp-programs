#include<iostream>
#include<string>
using namespace std;

template<class T>

class Calculator
{
    private:
    T a, b;

    public:
    Calculator(T n1, T n2)
    {
        a = n1;
        b = n2;
    }

    void display()
    {
        cout<<"a + b = "<<add()<<endl;
        cout<<"a - b = "<<subtract()<<endl;
        cout<<"a * b = "<<multiply()<<endl;
        cout<<"a / b = "<<divide()<<endl;
    }

    T add()
    {
        return a+b;
    }
    T subtract()
    {
        return a-b;
    }
    T multiply()
    {
        return a*b;
    }
    T divide()
    {
        return a/b;
    }
};

int main()
{
    Calculator<int> intCalc(2,3);
    Calculator<float> floatCalc(3.3, 5.6);

    cout<<"Integer results: \n" <<endl;
    intCalc.display();
    cout<<"Float results: \n" <<endl;
    floatCalc.display();

    return 0;

}
