#include<iostream>
using namespace std;
class Add{
    public:
    void sum(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
    void sum(double a,double b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    Add a;
    a.sum(4,5);
    a.sum(2,3,4);
    a.sum(4.2,4.5);
    return 0;
}