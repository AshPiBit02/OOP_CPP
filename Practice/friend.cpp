#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int x;
    public:
    A(int a)
    {
        x=a;
    }
    friend void add(A a,B b);
};
class B
{
    private:
    int y;
    public:
    B(int b)
    {
        y=b;
    }
    friend void add(A a,B b);
};
void add(A a,B b)
{
    cout<<a.x+b.y;
} 
int main()
{
    A i(10);
    B j(20);
    add(i,j);
    return 0;
}
