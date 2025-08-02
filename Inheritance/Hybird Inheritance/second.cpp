//Multipath Inheritance
#include<iostream>
using namespace std;
class A
{
    protected:
    int a=1;
    public:
    A()
    {
        cout<<"Parent constuctor A"<<endl;
    }
};
class B:public virtual A // use to avoid ambiguity (virtual public or public virtual both are valid)
{
    protected:
    int b=2;
    public:
    B():A()
    {
        cout<<"Child constuctor B from A"<<endl;
    }
};
class C:virtual public A
{
    protected:
    int c=3;
    public:
    C():A()
    {
        cout<<"Child constuctor C from A"<<endl;
    }
};
class D:public B,public C
{
    protected:
    int d=a+b+c;
    public:
    D():B(),C()
    {
        cout<<"Child constuctor D from B and C"<<endl;
    }
    void display()
    {
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
        cout<<"Value of d: "<<d<<endl;
    }
};

int main()
{
    D d;
    d.display();
    return 0;
}

