#include<iostream>
using namespace std;
class Test
{
    int x;
    public:
    Test(int a)
    {
       x=a;
    }
    void operator +()
    {
        x=2*x;
    }
    void display()
    {
        cout<<"Value of x: "<<x<<endl;
    }
};
int main()
{
    Test t(5);
    cout<<"Before operator overloading"<<endl;
    t.display();
    +t;//unary minus operator overloading
    cout<<"After operator overloading"<<endl;
    t.display();
    return 0;
}