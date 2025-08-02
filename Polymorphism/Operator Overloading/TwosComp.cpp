#include<iostream>
using namespace std;
class Bits
{
    public:
    int x;
    Bits(int x)
    {
        this->x=x;
    }
    void operator ~()
    {
        x=~x;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Bits b(2);
    b.display();
    ~b;
    b.display();
    return 0;
}