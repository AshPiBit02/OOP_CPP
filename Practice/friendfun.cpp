#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int x;
    public:
    A(int value)
    {
        x=value;
    }
    friend int add(A a,B b);
};
class B
{
    private:
    int y;
    public:

    B(int value)
    {
        y=value;
    }
    friend int add(A a,B b);
};
int add(A a,B b)
{
    return a.x+b.y;
}
int main()
{
    A obja(10);
    B ojbb(20);
    cout<<"The sum is "<<add(obja,ojbb)<<endl;
    return 0;
    
}