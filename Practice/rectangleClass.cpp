#include<iostream>
using namespace std;
class Rectangle
{
    private:
    double x,y;
    public:
    Rectangle(double x,double y)
    {
        this->x=x;
        this->y=y;
    }
    void getCoordinates() const{
        cout<<"(x,y) =  ("<<x<<","<<y<<")"<<endl;
    }
    void getArea() const{
        cout<<"Area is "<<x*y<<endl;
    }
};
int main()
{
    Rectangle r(5,8);
    r.getCoordinates();
    r.getArea();
    return 0;
}