#include<iostream>
#include<cmath>
using namespace std;
class Polar
{
    private:
    double angle;
    double radius;
    public:
    Polar()
    {
        angle=0;
        radius=0;
    }
    Polar(double rad,double ang)
    {
        angle=ang;
        radius=rad;
    }
/*************  ✨ Windsurf Command ⭐  *************/
/*******  23bc5577-c238-40e7-85ed-590d55688d12  *******/
    void getPolarInfo() const{
        cout<<"Radius: "<<radius<<endl<<"Angle: "<<angle<<endl;
    }
};
class Rectangle:public Polar
{
    private:
    double length,breadth;
    public:
    Rectangle():Polar(){length=0;breadth=0;};
    Rectangle(double radius,double angle):Polar(radius,angle)
    {
        double radians=angle*(M_PI/180);
        length=radius*(cos(radians));
        breadth=radius*(sin(radians));
    }
    void getRectangleCorrdinate() const
    {
        cout<<"Polar coordinates converted into rectangular coordinate"<<endl;
        cout<<"Length(x) = "<<length<<endl<<"Breadth(y) = "<<breadth<<endl;
    }
};
int main()
{
    Polar p(5,30);
    p.getPolarInfo();
    Rectangle r(5,30);
    r.getRectangleCorrdinate();
    return 0;
    

}