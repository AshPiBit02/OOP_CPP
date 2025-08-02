#include<iostream>
using namespace std;
class Polar
{
    double angle;
    double radius;
    public:
    Polar(double angle,double radius)
    {
        this->angle=angle;
        this->radius=radius;
    }
    void getcoordinates() const{
        cout<<"(0,r) = ("<<angle<<","<<radius<<")"<<endl;
    }
};
int main()
{
    Polar p(30,5);
    p.getcoordinates();
    return 0;
}