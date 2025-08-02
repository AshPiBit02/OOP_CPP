#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void draw()
    {
        cout<<"Drawing Shape"<<endl;
    }
};
class Circle:public Shape
{
    public:
    void draw() override{
        cout<<"Drawing Circle"<<endl;
    }
    void specialFearutre()
    {
        cout<<"Circle's speacial feature: Smooth round edges "<<endl;
    }

};
class Square: public Circle
{
    public:
    void draw() override
    {
        cout<<"Drawing Square"<<endl;
    }
};
int main()
{
    Circle c;
    Square s;
    Shape* shapes[2];
    shapes[0]=&c;
    shapes[1]=&s;
    for(int i=0;i<2;i++)
    {
        shapes[i]->draw();
    }
    cout<<endl<<"Accessing specialFeature using derived pointer: "<<endl;
    Circle* circlePtr=dynamic_cast<Circle*>(shapes[0]);
    if(circlePtr)
    {
        circlePtr->specialFearutre();
    }
    return 0;

}