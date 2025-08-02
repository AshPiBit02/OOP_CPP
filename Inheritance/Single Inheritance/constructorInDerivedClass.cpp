#include<iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"Base constructor called"<<endl;
    }
    Base(int x)
    {
        cout<<"Base parameterized constructor called with "<<x<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived():Base(x)//if we don't pass any value then it will call default constructor
    {
        cout<<"Derived constructor called"<<endl;
    }
};
int main()
{
    Derived d;
    return 0;
}