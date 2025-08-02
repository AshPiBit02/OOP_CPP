#include<iostream>
using namespace std;
class bitwise
{
    public:
    int x,y,res1,res2;
    bitwise(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void operator +()
    {
        res1=x<<y;
    }
    void operator -()
    {
        res2=x>>y;
    }
    void display1()
    {
        cout<<"Bitwise Left: "<<res1<<endl;
    }
    void display2()
    {
        cout<<"Bitwise Right: "<<res2<<endl;
    }
};
int main()
{
    bitwise b(1,1);
    +b;
    b.display1();
    -b;
    b.display2();
    return 0;
}