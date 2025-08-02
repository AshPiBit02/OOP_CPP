//composition (car has a engine)
#include<iostream>
using namespace std;
class Engine
{
    public:
    void start()
    {
        cout<<"Engine start."<<endl;
    }
};
class Bike
{
    public:
    Engine engine;
    void move()
    {
        engine.start();
    }
};
int main()
{
    Bike b;
    b.move();
    return 0;
    
}