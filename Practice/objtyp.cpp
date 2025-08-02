#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void draw()
    {
        cout<<"Draw Geometrical shape"<<endl;
    }
};
class Circle: public Shape
{
    public:
    void draw() override{
        cout<<"Draw Circle shape"<<endl;
    }
};
void rendershape(Shape* s)
{
    s->draw();
}
int main()
{
    Circle c;
    rendershape(&c);
    return 0;


}