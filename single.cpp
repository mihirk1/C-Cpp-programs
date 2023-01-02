#include<iostream>
using namespace std;

class second_store;

class main_store
{
    protected:
    int main_revenue;
    int main_budget;

    public:
    main_store()
    {
        main_budget=5000;
        main_revenue=6000;
    }

    void total_rev(second_store&);
    void total_bud(second_store&);

};

class second_store: private main_store
{
    protected:
    int second_revenue;
    int second_budget;

    public:
    second_store() 
    {
        second_budget=3000;
        second_revenue=4000;
    }

    friend void main_store::total_rev(second_store& x);
    friend void main_store::total_bud(second_store& x);

};

void main_store::total_rev(second_store& x)
{
    cout<<x.second_revenue+x.main_revenue<<endl;
}

void main_store::total_bud(second_store& x)
{
    cout<<x.second_budget+x.main_budget<<endl;
}


int main()
{
    main_store A;
    second_store B;
    A.total_rev(B);
    A.total_bud(B);
    return 0;
}