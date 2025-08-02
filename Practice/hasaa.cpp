#include<iostream>
using namespace std;
class Organ
{
    public:
    void eye()
    {
        cout<<"Can see"<<endl;
    }
};
class human
{
    public:
    Organ org;
    void canDo()
    {
        cout<<"Human have eye"<<endl;
        org.eye();

    }
};
int main()
{
    human h;
    h.canDo();
}