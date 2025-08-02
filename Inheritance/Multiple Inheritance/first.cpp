#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    A(int a)
    {
        this->a=a;
    }
};
class B{
    protected:
    int b;
    public:
    B(int b)
    {
        this->b=b;
    }
};
class C{
    protected:
    int c;
    public:
    C(int c)
    {
        this->c=c;
    }
};
class Sum:public A,public B,public C{
    public:
    int sum=0;
    Sum(int a,int b,int c):A(a),B(b),C(c)
    {
        sum=a+b+c;
    }
    void display()
    {
        cout<<"Sum: "<<sum<<endl;
    }
};
int main()
{
    Sum s(10,20,30);
    s.display();
    return 0;
}