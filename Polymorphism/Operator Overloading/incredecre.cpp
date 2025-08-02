#include<iostream>
using namespace std;
class Get
{
    public:
    int x,y;
    Get(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void operator +()
    {
        ++x;
        ++y;
    }
    void display()
    {
        cout<<"x :  "<<x<<"   y : "<<y<<endl;
    }
    void operator -()
    {
        --x;
        --y;
    }
};
int main()
{
    Get g(10,20);
    // g.display1();    
    -g;
    g.display();
    +g;
    g.display();
    +g;
    g.display();
    return 0;
}