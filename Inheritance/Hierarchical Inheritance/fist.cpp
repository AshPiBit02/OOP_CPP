#include<iostream>
#include<string>
using namespace std;
class Shape
{
    protected:
    string color;
    public:
    Shape(string color)
    {
        this->color=color;
    }
    void displayColor()
    {
        cout<<"Color: "<<color<<endl;
    }
};
class Circle:public Shape
{
    protected:
    int radius;
    public:
    Circle(string color,int radius):Shape(color)
    {
        this->radius=radius;
    }
    void displayArea()
    {
        cout<<"Area: "<<3.14*(float)radius*(float)radius<<endl;
    }
};
class Rectangle:public Shape
{
    protected:
    int length,breadth;
    public:
    Rectangle(string color,int length,int breadth):Shape(color)
    {
        this->length=length;
        this->breadth=breadth;
    }
    void displayRectangleInfo()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Area: "<<(float)length*(float)breadth<<endl;
    }
};
int main()
{
    Circle c("Red",5);
    c.displayColor();
    c.displayArea();
    Rectangle r("Blue",4,5);
    r.displayColor();
    r.displayRectangleInfo();
    return 0;
}