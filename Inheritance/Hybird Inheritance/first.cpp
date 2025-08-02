//Multipath Inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Parent constuctor A"<<endl;
    }
};
class B:public A
{
    public:
    B():A()
    {
        cout<<"Child constuctor B from A"<<endl;
    }
};
class C:public A
{
    public:
    C():A()
    {
        cout<<"Child constuctor C from A"<<endl;
    }
};
class D:public B,public C
{
    public:
    D():B(),C()
    {
        cout<<"Child constuctor D from B and C"<<endl;
    }
};

int main()
{
    D d;
    return 0;
}
//the attribute of class A is called twice in class D which is called ambiguity

